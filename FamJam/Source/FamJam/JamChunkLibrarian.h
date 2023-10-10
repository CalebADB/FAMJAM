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
	Gb,
	Db,
	Ab,
	Eb,
	Bb,
	F,
	C,
	G,
	D,
	A,
	E,
	B
};

UENUM(BlueprintType)
enum class EJamSoundCategory
{
	None,
	Organ
};

USTRUCT(BlueprintType)
struct FAMJAM_API FJamChunk : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundBase* Sound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeasuresCount = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Tempo = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D TimeSignature = FVector2D(0,0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EJamKey Key = EJamKey::None;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EJamSoundCategory SoundCategory = EJamSoundCategory::None;
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class FAMJAM_API UJamChunkLibrarian : public UJamLibrarian
{
	GENERATED_BODY()
public:
	// Sets default values for this component's properties
	UJamChunkLibrarian();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	virtual bool CheckIsLibraryComplete() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


};
