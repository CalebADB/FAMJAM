// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "JamChef.h"
#include "JamChunkLibrarian.h"
#include "JamRecipeLibrarian.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Jam.generated.h"

UCLASS()
class FAMJAM_API AJam : public AActor
{
	GENERATED_BODY()


private:
	UPROPERTY(VisibleAnywhere)
	bool bIsJamPossible = false;

	UPROPERTY(EditAnywhere)
	UJamChef* Chef;

	UPROPERTY(EditAnywhere)
	UJamChunkLibrarian* ChunkLibrarian;
	UPROPERTY(EditAnywhere)
	UJamRecipeLibrarian* RecipeLibrarian;

public:
	// Sets default values for this actor's properties
	AJam();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
