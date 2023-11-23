// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "JamRecipe.h"
#include "JamCookMind.h"
#include "JamCookBoard.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JamCook.generated.h"


UCLASS()
class FAMJAM_API AJamCook : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere)
	bool bIsMiseEnPlace = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FName JamName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AJamCookMind> MindClass;
	UPROPERTY(VisibleAnywhere)
	AJamCookMind* Mind;

	UPROPERTY(VisibleAnywhere)
	UJamChunkLibrarian* ChunkLibrarian;

	UPROPERTY(VisibleAnywhere)
	TArray<FJamChunk> Chunks;
	UPROPERTY(VisibleAnywhere)
	TArray<AJamCookBoard*> Boards;
	TMap<int, FJamChop> ChopIdToChopMap;
	int NextChopId = 0;

public:	
	// Sets default values for this actor's properties
	AJamCook();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	void MiseEnPlace(UJamChunkLibrarian* InChunkLibrarian, TArray<TSubclassOf<AJamCookBoard>> BoardClasses);

	void ReceiveCalledChop(float NextStepMeasureIdx, FJamChop Chop);
	
	void ProcessChops(float MeasureIdx, float Tempo);

	// IDEA
	// void CallProcessChops(float MeasureIdx, float Tempo);

};
