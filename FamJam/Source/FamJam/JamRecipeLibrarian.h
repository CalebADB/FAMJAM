// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "JamLibrarian.h"
#include "JamChunkLibrarian.h"

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "JamRecipeLibrarian.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class FAMJAM_API UJamRecipeLibrarian : public UJamLibrarian
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UJamRecipeLibrarian();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


};
