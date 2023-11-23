// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "JamCook.h"
#include "JamCookTest.generated.h"

/**
 * 
 */
UCLASS()
class FAMJAM_API AJamCookTest : public AJamCook
{
	GENERATED_BODY()
	

	UPROPERTY(EditAnywhere)
	bool bShouldChop;

	UPROPERTY(EditAnywhere)
	FJamChunk OnDeck_Chunk;
	UPROPERTY(EditAnywhere)
	FJamChopSpecialActionParams OnDeck_SpecialActionParams;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
