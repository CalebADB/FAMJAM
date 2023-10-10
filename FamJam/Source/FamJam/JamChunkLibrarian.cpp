// Fill out your copyright notice in the Description page of Project Settings.


#include "JamChunkLibrarian.h"
#include "UObject/Class.h"

// Sets default values for this component's properties
UJamChunkLibrarian::UJamChunkLibrarian()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UJamChunkLibrarian::BeginPlay()
{
	Super::BeginPlay();

	// ...

}

bool UJamChunkLibrarian::CheckIsLibraryComplete() 
{
	if (Library == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("UJamChunkLibrarian Library is null"));
		return false;
	}

	bool bDoesLibraryHaveErrors = true;

	TArray<FJamChunk*> Chunks;
	Library->GetAllRows("", Chunks);

	int ChunkIdx = -1;
	for (FJamChunk* Chunk : Chunks)
	{
		ChunkIdx++;

		bool bIsChunkComplete = true;
		FString debugString = "Chunk_" + FString::FromInt(ChunkIdx) + " is not fully setup: ";

		if (Chunk->Sound == nullptr)
		{
			bIsChunkComplete = false;
			debugString += "SoundData is null ~ ";
		}
		if (Chunk->Tempo <= 0.0f)
		{
			bIsChunkComplete = false;
			debugString += "Tempo is " + FString::SanitizeFloat(Chunk->Tempo) + " ~ ";
		}
		if (Chunk->MeasuresCount <= 0)
		{
			bIsChunkComplete = false;
			debugString += "NumOfMeasures is " + FString::FromInt(Chunk->MeasuresCount) + " ~ ";
		}
		if (Chunk->TimeSignature == FVector2D(0, 0))
		{
			bIsChunkComplete = false;
			debugString += "TimeSignature is (" + FString::SanitizeFloat(Chunk->TimeSignature.X) + ", " + FString::SanitizeFloat(Chunk->TimeSignature.Y) + ") ~ ";
		}

		if (!bIsChunkComplete)
		{
			bDoesLibraryHaveErrors = false;
			UE_LOG(LogTemp, Warning, TEXT("%s"), *debugString);
		}
	}

	return bIsLibrarianForgiving || bDoesLibraryHaveErrors;
}


// Called every frame
void UJamChunkLibrarian::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

