// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "JamRecipe.h"
#include "JamCookAudioLayer.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JamCook.generated.h"

UCLASS()
class FAMJAM_API AJamCook : public AActor
{
	GENERATED_BODY()
	

	TArray<UJamCookAudioLayer*> Layers;

public:	
	// Sets default values for this actor's properties
	AJamCook();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	void MiseEnPlace(int LayerCount, FColor InDebugColor);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ReceiveChop(FJamChop Chop);
};
