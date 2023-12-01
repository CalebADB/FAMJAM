// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "JamCookMindVisualizer.h"

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "JamCookMind.generated.h"


UENUM(BlueprintType)
enum class EJamCookImpulse
{
	HitStart,
	HitRelease
};

USTRUCT(BlueprintType)
struct FAMJAM_API FJamCookTrigger
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int> Impulses;
};

USTRUCT(BlueprintType)
struct FAMJAM_API FJamCookThought
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ChopId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int TriggerId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeasureIdxExtinct;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeasureIdxForget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeasureIdxOld;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeasureIdxHitMax;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeasureIdxHit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeasureIdxHitMin;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeasureIdxReady;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeasureIdxWarm;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeasureIdxExist;

	FJamCookThought()
		:
		ChopId(-1),
		TriggerId(-1),
		MeasureIdxForget(-1.0f),
		MeasureIdxOld(-1.0f),
		MeasureIdxHitMax(-1.0f),
		MeasureIdxHit(-1.0f),
		MeasureIdxHitMin(-1.0f),
		MeasureIdxReady(-1.0f),
		MeasureIdxWarm(-1.0f),
		MeasureIdxExist(-1.0)
	{}
};

USTRUCT(BlueprintType)
struct FAMJAM_API FJamCookFeeling
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FJamCookThought Thought;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EJamCookThoughtEfficacy Efficacy;
};


UCLASS()
class FAMJAM_API AJamCookMind : public APawn
{
	GENERATED_BODY()

public:
	TArray<FJamCookThought> Thoughts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int, FJamCookTrigger> Triggers;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool bShouldVisualize = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsVisualizing = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AJamCookMindVisualizer> VisualizerClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AJamCookMindVisualizer * Visualizer;

private:
	float SuckerSoon = 0.275f;
	float SugarSoon = 0.2f;
	float SamuraiSoon = 0.08f;
	float TalentToleranceMin = 0.01f;
	float TalentToleranceMax = 0.01f;
	float NearlySwagger = 0.1f;
	float NerdSwagger = 0.3f;
	float NoSwagger = 0.4f;


public:
	// Sets default values for this pawn's properties
	AJamCookMind();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void Think(int ChopId, int TriggerId, float ThoughtMeasureIdx);

	TArray<FJamCookFeeling> Feel(float MeasureIdx);

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
