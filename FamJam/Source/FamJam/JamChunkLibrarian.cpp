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

bool UJamChunkLibrarian::CheckIsLibraryComplete()
{
	if (Library == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Library is null"));
		return false;
	}

	bool bIsLibraryComplete = true;

	TArray<FJamChunk*> Chunks;
	Library->GetAllRows("", Chunks);

	int ChunkIdx = -1;
	for (FJamChunk* Chunk : Chunks)
	{
		ChunkIdx++;

		bool bIsChunkComplete = true;
		FString debugString = "Chunk_" + FString::FromInt(ChunkIdx) + " is not fully setup: ";

		if (Chunk->Name == FName("None"))
		{
			bIsChunkComplete = false;
			debugString += "Name is None ~ ";
			//const UEnum* JamChunkNameEnum = FindObject<UEnum>(ANY_PACKAGE, TEXT("EJamChunkName"));
			//debugString += "Name is " + JamChunkNameEnum->GetDisplayNameTextByValue((int64)Chunk->Name).ToString() + " ~ ";
		}
		if (Chunk->Sound == nullptr)
		{
			bIsChunkComplete = false;
			debugString += "SoundData is null ~ ";
		}
		if (Chunk->Length <= 0.0f)
		{
			bIsChunkComplete = false;
			debugString += "Length is " + FString::SanitizeFloat(Chunk->Length) + " ~ ";
		}
		if (Chunk->BPM <= 0.0f)
		{
			bIsChunkComplete = false;
			debugString += "BPM is " + FString::SanitizeFloat(Chunk->BPM) + " ~ ";
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
			bIsLibraryComplete = false;
			UE_LOG(LogTemp, Warning, TEXT("%s"), *debugString);
		}
	}

	return bIsLibrarianForgiving || bIsLibraryComplete;
}


// Called when the game starts
void UJamChunkLibrarian::BeginPlay()
{
	Super::BeginPlay();

	// ...

}


// Called every frame
void UJamChunkLibrarian::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

