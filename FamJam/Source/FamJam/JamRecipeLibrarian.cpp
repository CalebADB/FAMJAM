// Fill out your copyright notice in the Description page of Project Settings.


#include "JamRecipeLibrarian.h"

// Sets default values for this component's properties
UJamRecipeLibrarian::UJamRecipeLibrarian()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UJamRecipeLibrarian::BeginPlay()
{
	Super::BeginPlay();

	// ...

}

bool UJamRecipeLibrarian::CheckIsLibraryComplete() 
{
	if (Library == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("UJamRecipeLibrarian Library is null"));
		return false;
	}

	UE_LOG(LogTemp, Warning, TEXT("UJamRecipeLibrarian Library was not actually checked. Method needs to be filled out"));
	return true;
}

// Called every frame
void UJamRecipeLibrarian::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

UJamRecipe* UJamRecipeLibrarian::GetRecipe(FName RowName)
{
	if (!bIsLibraryComplete) return nullptr;

	FJamRecipeIndex* JamRecipeIndex = Library->FindRow<FJamRecipeIndex>(RowName, "");

	if (JamRecipeIndex == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("JamRecipeIndex == nullptr when searching for %s"), *RowName.ToString());
		return nullptr;
	}

	UE_LOG(LogTemp, Warning, TEXT("Found JamRecipeIndex when searching for %s"), *RowName.ToString());
	return NewObject<UJamRecipe>(this, JamRecipeIndex->RecipeClass);
}