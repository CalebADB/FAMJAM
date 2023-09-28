// Fill out your copyright notice in the Description page of Project Settings.


#include "JamChef.h"

// Sets default values for this component's properties
UJamChef::UJamChef()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UJamChef::BeginPlay()
{
	Super::BeginPlay();

	// ...

}

void UJamChef::MiseEnPlace(UJamChunkLibrarian* InChunkLibrarian, UJamRecipeLibrarian* InRecipeLibrarian)
{
	ChunkLibrarian = InChunkLibrarian;
	RecipeLibrarian = InRecipeLibrarian;

	bIsMiseEnPlace = true;
}

// Called every frame
void UJamChef::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if (!bIsReadingJam)
	{
		bIsReadingJam = AttemptStartJam();
		if (!bIsReadingJam) return;
	}

	DictateRecipe(DeltaTime);
	
	// ...
}

bool UJamChef::AttemptStartJam()
{
	if (!bIsMiseEnPlace) return false;

	Recipe = RecipeLibrarian->GetRecipe(RecipeIndexName);

	if (Recipe == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Chef could not find Recipe_%s"), *RecipeIndexName.ToString())
		return false;
	}

	RecipeOverview = Recipe->GetOverview();

	for (TPair<FName, int> CookNameToLayerCount : RecipeOverview.CookNameToLayerCountMap)
	{
		AJamCook * Cook = GetWorld()->SpawnActor<AJamCook>(AJamCook::StaticClass());
		Cook->MiseEnPlace(CookNameToLayerCount.Value, RecipeOverview.CookNameToDebugColorMap[CookNameToLayerCount.Key]);
		Cooks.Add(CookNameToLayerCount.Key, Cook);
	}

	return true;
}

void UJamChef::DictateRecipe(float DeltaTime)
{

}