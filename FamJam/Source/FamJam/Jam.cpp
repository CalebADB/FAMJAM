// Fill out your copyright notice in the Description page of Project Settings.


#include "Jam.h"

// Sets default values
AJam::AJam()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Chef = CreateDefaultSubobject<UJamChef>(FName(TEXT("Chef")));
	ChunkLibrarian = CreateDefaultSubobject<UJamChunkLibrarian>(FName(TEXT("ChunkLibrarian")));
	RecipeLibrarian = CreateDefaultSubobject<UJamRecipeLibrarian>(FName(TEXT("RecipeLibrarian")));
}

// Called when the game starts or when spawned
void AJam::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("c++"));

	bool bIsJamValid = true;

	if (!ChunkLibrarian->bIsLibraryComplete)
	{
		bIsJamValid = false;
		UE_LOG(LogTemp, Error, TEXT("Library is not complete"));
	}

	if (bIsJamValid)
	{
		bIsJamPossible = true;
		Chef->MiseEnPlace(ChunkLibrarian, RecipeLibrarian);
	}
}


// Called every frame
void AJam::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


