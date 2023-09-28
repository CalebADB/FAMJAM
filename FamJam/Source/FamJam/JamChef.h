// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "JamChunkLibrarian.h"
#include "JamRecipeLibrarian.h"

#include "JamCook.h"

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "JamChef.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class FAMJAM_API UJamChef : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere)
	bool bIsMiseEnPlace = false;

	UJamRecipeLibrarian* RecipeLibrarian;
	UJamChunkLibrarian* ChunkLibrarian;

	TMap<FName, AJamCook*> Cooks;

	UPROPERTY(EditAnywhere)
	FName RecipeIndexName;
	UPROPERTY(VisibleAnywhere)
	UJamRecipe* Recipe = nullptr;
	UPROPERTY(VisibleAnywhere)
	FJamRecipeOverview RecipeOverview;

	bool bIsReadingJam = false;

public:
	// Sets default values for this component's properties
	UJamChef();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	void MiseEnPlace(UJamChunkLibrarian* InChunkLibrarian, UJamRecipeLibrarian* InRecipeLibrarian);

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	bool AttemptStartJam();

	void DictateRecipe(float DeltaTime);

};
