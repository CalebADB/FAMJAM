// Fill out your copyright notice in the Description page of Project Settings.


#include "JamLibrarian.h"

// Sets default values for this component's properties
UJamLibrarian::UJamLibrarian()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UJamLibrarian::BeginPlay()
{
	Super::BeginPlay();

	bIsLibraryComplete = CheckIsLibraryComplete();
	// ...	
}

bool UJamLibrarian::CheckIsLibraryComplete()
{
	UE_LOG(LogTemp, Error, TEXT("UJamLibrarian called method CheckIsLibraryComplete which is a \"pure virtual\" method"));
	return false;
}

// Called every frame
void UJamLibrarian::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

