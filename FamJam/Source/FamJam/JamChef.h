// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "JamChunkLibrarian.h"
#include "JamRecipeLibrarian.h"

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "JamChef.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class FAMJAM_API UJamChef : public UActorComponent
{
	GENERATED_BODY()

private:
	UJamRecipeLibrarian* RecipeLibrarian;
	UJamChunkLibrarian* ChunkLibrarian;

public:
	// Sets default values for this component's properties
	UJamChef();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	void Initialize(UJamChunkLibrarian* InChunkLibrarian, UJamRecipeLibrarian* InRecipeLibrarian);

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


};
