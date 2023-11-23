// Fill out your copyright notice in the Description page of Project Settings.


#include "JamCookBoard.h"

// Sets default values
AJamCookBoard::AJamCookBoard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CaldronMouth = CreateDefaultSubobject<UAudioComponent>(FName("Caldron Mouth"));
	RootComponent = CaldronMouth;
}

// Called when the game starts or when spawned
void AJamCookBoard::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJamCookBoard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AJamCookBoard::Chop_Implementation(float MeasureStartTime, float Tempo, FJamChunk Chunk)
{

}
