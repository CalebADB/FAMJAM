// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "JamChunkLibrarian.h"
#include "JamCookBoard.h"

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "JamRecipe.generated.h"

UENUM(BlueprintType)
enum class EJamVolumeTransitionType : uint8
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
	int TriggerId = -1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int CookLayerIdx = 1;

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
struct FAMJAM_API FJamMinceSpecialActionParams
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
struct FAMJAM_API FJamMince
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ChunkName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CookName;
	EJamKey Key = EJamKey::None;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FJamMinceSpecialActionParams> SpecialActionKeyToParamsMap;
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
	float MeasuresCount = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EJamKey Key = EJamKey::None;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FJamStepSpecialActionParams> SpecialActionKeyToParamsMap;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FJamChop> Chops;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FJamMince> Minces;
};

USTRUCT(BlueprintType)
struct FAMJAM_API FJamRecipeCookOverviewParams
{
	GENERATED_USTRUCT_BODY()

public:
	int LayerCountMax = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AJamCookBoard> DefaultBoard;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int, TSubclassOf<AJamCookBoard>> LayerToCustomBoard;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor CookColor = FColor(0, 0, 0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor ChopColor = FColor(0, 0, 0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor MinceColor = FColor(0, 0, 0);
};

USTRUCT(BlueprintType)
struct FAMJAM_API FJamRecipeCookOverview
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<AJamCookBoard>> BoardClasses;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor CookColor = FColor(180, 132, 66);
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor ChopColor = FColor(128, 96, 0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor MinceColor = FColor(128, 48, 0);
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
	TMap<FName, FJamRecipeCookOverview> CookNameToOverviewMap = TMap<FName, FJamRecipeCookOverview>();
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
	float VolumeRatioStart = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TempoStart = 60.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D TimeSignature = FVector2D(4, 4);
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FJamRecipeCookOverviewParams> CookNameToOverviewParamsMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FJamStep> Steps;

public:
	UFUNCTION(BlueprintCallable)
	FJamRecipeOverview GetOverview();
};
