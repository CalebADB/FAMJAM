// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "JamChunkLibrarian.h"

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "JamRecipe.generated.h"

UENUM(BlueprintType)
enum class EJamVolumeTransitionType
{
	Linear
};

USTRUCT(BlueprintType)
struct FAMJAM_API FJamChopSpecialActionParams
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsInteractive = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName InteractiveInputKey;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsVolumeRatioChange = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int VolumeRatioTarget = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EJamVolumeTransitionType VolumeTransitionType = EJamVolumeTransitionType::Linear;
};

USTRUCT(BlueprintType)
struct FAMJAM_API FJamChop
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ChunkName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CookName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int CookLayer = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeasureStart = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeasureCount = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EJamKey Key = EJamKey::None;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FJamChopSpecialActionParams> SpecialActionKeyToParamsMap;
};

USTRUCT(BlueprintType)
struct FAMJAM_API FJamStepSpecialActionParams
{
GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsJump = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int JumpTargetMeasure = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsBPMChange = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int BPMTarget = 60.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsVolumeRatioChange = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int VolumeRatioTarget = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EJamVolumeTransitionType VolumeTransitionType = EJamVolumeTransitionType::Linear;
};

USTRUCT(BlueprintType)
struct FAMJAM_API FJamStep
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeasureStart = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeasuresCount = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EJamKey Key = EJamKey::None;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FJamStepSpecialActionParams> SpecialActionKeyToParamsMap;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FJamChop> Chops;

};

USTRUCT(BlueprintType)
struct FAMJAM_API FJamRecipeOverview
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LastMeasure = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VolumeRatioMax = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, int> CookNameToLayerCountMap;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FColor> CookNameToDebugColorMap;
};


/**
 * 
 */
UCLASS(Blueprintable)
class FAMJAM_API UJamRecipe : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VolumeDecibelCenter = 10.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TempoStart = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VolumeRatioStart = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor CookDefaultDebugColor = FColor(223, 223, 223);
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FColor> CookNameToDebugColorMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FJamStep> Steps;

public:
	UFUNCTION(BlueprintCallable)
	FJamRecipeOverview GetOverview();
};
