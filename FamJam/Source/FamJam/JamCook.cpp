// Fill out your copyright notice in the Description page of Project Settings.


#include "JamCook.h"

// Sets default values
AJamCook::AJamCook()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	USceneComponent* SceneComponent = CreateDefaultSubobject<USceneComponent>(FName("DefaultSceneComponent"));
	RootComponent = SceneComponent;
}

// Called when the game starts or when spawned
void AJamCook::BeginPlay()
{
	Super::BeginPlay();
	// NextChopId = 0;
}

void AJamCook::MiseEnPlace(UJamChunkLibrarian* InChunkLibrarian, TArray<TSubclassOf<AJamCookBoard>> BoardClasses)
{

	const FAttachmentTransformRules AttachmentTransformRules = FAttachmentTransformRules(EAttachmentRule::KeepRelative, true);
	if (MindClass == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Cook_%s MindClass is null"), *JamName.ToString());
		return;
	}
	Mind = GetWorld()->SpawnActor<AJamCookMind>(MindClass);

	for (TSubclassOf<AJamCookBoard> BoardClass : BoardClasses)
	{
		AJamCookBoard* Board = GetWorld()->SpawnActor<AJamCookBoard>(BoardClass);

		if (Board == nullptr) 
		{ 
			UE_LOG(LogTemp, Error, TEXT("Cook_%s BoardClass is null"), *JamName.ToString());
			return;
		}
		else { UE_LOG(LogTemp, Warning, TEXT("Board_%d, BoardName_%s was added to Cook_%s"), BoardClasses.Num(), *Board->GetName(), *JamName.ToString()); }

		Board->AttachToActor(this, AttachmentTransformRules);
		Boards.Add(Board);
	}
	if(!InChunkLibrarian->bIsLibraryComplete)
	{
		UE_LOG(LogTemp, Error, TEXT("Cook_%s cannot access Chunks from the ChunkLibrarian because the library is not complete"), *JamName.ToString());
		return;
	}
	ChunkLibrarian = InChunkLibrarian;

	bIsMiseEnPlace = true;
}

void AJamCook::ReceiveCalledChop(float NextStepMeasureStart, FJamChop Chop)
{
	if (!bIsMiseEnPlace)
	{
		UE_LOG(LogTemp, Warning, TEXT("Cook_%s cannot call PrepChop because bIsMiseEnPlace is false"), *JamName.ToString());
		return;
	}
	// Calculate Unique ChopID Key
	int ChopId = NextChopId;
	NextChopId++;
		
	// Determine Measure Start
	float MeasureStart = NextStepMeasureStart + Chop.MeasureStart;
	
	Mind->Think(ChopId, Chop.TriggerId, MeasureStart);
	UE_LOG(LogTemp, Warning, TEXT("Cook_%s is thinking about Chop_%d, for Trigger_%d at MeasureStart_%.5f"), *JamName.ToString(), ChopId, Chop.TriggerId, MeasureStart);

	ChopIdToChopMap.Add(ChopId, Chop);
}

void AJamCook::ProcessChops(float MeasureIdx, float Tempo)
{
	if (!bIsMiseEnPlace)
	{
		UE_LOG(LogTemp, Warning, TEXT("Cook_%s cannot call ExecuteChops because bIsMiseEnPlace is false"), *JamName.ToString());
		return;
	}

	TArray<float> MeasureStarts; 
	if (Mind == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Cook_%s is missing its mind"), *JamName.ToString());
		return;
	}
	TArray<FJamCookFeeling> Feelings = Mind->Feel(MeasureIdx);

	for (FJamCookFeeling Feeling : Feelings)
	{
		FJamChop Chop;
		if (!ChopIdToChopMap.RemoveAndCopyValue(Feeling.Thought.ChopId, Chop))
		{
			UE_LOG(LogTemp, Error, TEXT("Cook_%s could not find the chop for Chop_%d"), *JamName.ToString(), Feeling.Thought.ChopId);
			continue;
		}

		FJamChunkLibraryRow* ChunkLibraryRow = ChunkLibrarian->GetRow(Chop.ChunkName);
		if (ChunkLibraryRow == nullptr)
		{
			UE_LOG(LogTemp, Error, TEXT("MeasureIdx_%.5f, Layer_%d/%d, Chunk_%s was not called because library returned nullptr"), MeasureIdx, Chop.CookLayerIdx, Boards.Num(), *Chop.ChunkName.ToString());
			continue;
		}
				
		UE_LOG(LogTemp, Warning, TEXT("Cook_%s is chopping Chop_%d, for Trigger_%d at MeasureIdx_%.5f, %d/4"), *JamName.ToString(), Feeling.Thought.ChopId, Chop.TriggerId, MeasureIdx, Feeling.Efficacy);
				
		FJamChunk Chunk = ChunkLibraryRow->Chunk;
		Boards[Chop.CookLayerIdx-1]->Chop(MeasureIdx - Feeling.Thought.MeasureIdxHit, Tempo, Chunk);
	}
}



