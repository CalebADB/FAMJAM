// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "JamChunkLibrarian.h"
#include "JamRecipeLibrarian.h"

#include "JamCook.h"

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "JamChef.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class FAMJAM_API UJamChef : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere)
	bool bIsMiseEnPlace = false;

	UJamRecipeLibrarian* RecipeLibrarian;
	UJamChunkLibrarian* ChunkLibrarian;

	TMap<FName, AJamCook*> Cooks;

public:
	UPROPERTY(EditAnywhere)
	FName TargetRecipeIndexName;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UJamRecipe* Recipe = nullptr;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FJamRecipeOverview RecipeOverview;

	UPROPERTY(EditAnywhere)
	bool bShouldAttemptToReadRecipe = false;
	UPROPERTY(VisibleAnywhere)
	bool bIsReadingRecipe = false;

	UPROPERTY(EditAnywhere)
	bool bShouldVisualizeJam = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bShouldInitializeJamVisualizer = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float Time;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int StepIdx;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float MeasureRemaining;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float Tempo;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector2D TimeSignature = FVector2D(4,4);
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EJamKey Key;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float VolumeRatio;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<int> StepChopIdxsOrdered;

public:
	// Sets default values for this component's properties
	UJamChef();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	void MiseEnPlace(UJamChunkLibrarian* InChunkLibrarian, UJamRecipeLibrarian* InRecipeLibrarian);

public:
	// Called every frame
	void Update(float DeltaTime);

	bool AttemptStartJam();
	void FinishJam();
private:
	void ConductCooks(float DeltaTime);
};
