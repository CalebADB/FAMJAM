// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "JamChunkLibrarian.h"

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "JamRecipe.generated.h"

USTRUCT(BlueprintType)
struct FAMJAM_API FJamChop
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CookName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int CookLayer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ChunkName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsInteractive;

};


USTRUCT(BlueprintType)
struct FAMJAM_API FJamRecipeStep
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FJamChop> Chops;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeasureStart = -1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeasuresCount = -1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsLoop = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int LoopToMeasure = -1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float volumeStart = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float volumeEnd = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EJamKey Key = EJamKey::None;

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
	TArray<FJamRecipeStep> Steps;
	
public:

};
