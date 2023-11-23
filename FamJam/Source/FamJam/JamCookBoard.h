// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "JamChunkLibrarian.h"
#include "Components/AudioComponent.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JamCookBoard.generated.h"

UCLASS()
class FAMJAM_API AJamCookBoard : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAudioComponent * CaldronMouth;

public:	
	// Sets default values for this actor's properties
	AJamCookBoard();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintNativeEvent)
	void Chop(float MeasureStartTime, float Tempo, FJamChunk Chunk);

};
