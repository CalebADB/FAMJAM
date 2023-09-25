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

	bool bShouldJamTimeStart = true;

	UE_LOG(LogTemp, Warning, TEXT("c++"));

	if (!ChunkLibrarian->CheckIsLibraryComplete())
	{
		bShouldJamTimeStart = false;
		UE_LOG(LogTemp, Warning, TEXT("Library is not complete"));
	}



	bIsJamTime = bShouldJamTimeStart;

	if (bIsJamTime)
	{
		Chef->Initialize(ChunkLibrarian, RecipeLibrarian);
	}
}


// Called every frame
void AJam::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


