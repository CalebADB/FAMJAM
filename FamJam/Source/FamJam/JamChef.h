// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "JamChunkLibrarian.h"
#include "JamRecipeLibrarian.h"

#include "JamCook.h"

#include "Quartz/AudioMixerClockHandle.h"
#include "Quartz/QuartzSubsystem.h"
#include "Kismet/GameplayStatics.h"

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UQuartzClockHandle* Clock;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int JamBeatCount = 0;

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

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsVisualizingJam = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int StepIdx;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float MeasureIdx;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int NextStepIdx;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float NextStepMeasureIdx;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float Tempo;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector2D TimeSignature = FVector2D(4,4);
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EJamKey Key;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float VolumeRatio;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int StepBeatCountRemaining = 0;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int PrepNextStepBeatCountRemaining = 0;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bIsNextStepPrepped = false;


public:
	// Sets default values for this component's properties
	UJamChef();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	void MiseEnPlace(UJamChunkLibrarian* InChunkLibrarian, UJamRecipeLibrarian* InRecipeLibrarian);

private:
	bool AttemptPrepClock(float RecipeStartTempo);

public:
	// Called every frame
	void Update(float DeltaTime);

	bool AttemptStartJam();
	void FinishJam();
	UFUNCTION(BlueprintCallable)
	void ConductCooks();
private:
	void PrepNextStep();
	void DecideNextStep();
	void PrepChops();
	void FireNextStep();
};
