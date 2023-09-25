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

void UJamChef::Initialize(UJamChunkLibrarian* InChunkLibrarian, UJamRecipeLibrarian* InRecipeLibrarian)
{
	ChunkLibrarian = InChunkLibrarian;
	RecipeLibrarian = InRecipeLibrarian;
}

// Called every frame
void UJamChef::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

