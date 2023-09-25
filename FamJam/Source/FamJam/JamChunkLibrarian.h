// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "JamLibrarian.h"

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "JamChunkLibrarian.generated.h"

UENUM(BlueprintType)
enum class EJamKey
{
	None,
	A,
	Am,
	B,
	Bm,
	C,
	Cm,
	D,
	Dm,
	E,
	Em,
	F,
	Fm,
	G,
	Gm
};

UENUM(BlueprintType)
enum class EJamSoundCategory
{
	None
};

USTRUCT(BlueprintType)
struct FAMJAM_API FJamChunk : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EJamKey Key = EJamKey::None;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EJamSoundCategory SoundCategory = EJamSoundCategory::None;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundBase* Sound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Length = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MeasuresCount = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BPM = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D TimeSignature = FVector2D(0, 0);
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class FAMJAM_API UJamChunkLibrarian : public UJamLibrarian
{
	GENERATED_BODY()
public:
	// Sets default values for this component's properties
	UJamChunkLibrarian();

	bool CheckIsLibraryComplete();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


};
