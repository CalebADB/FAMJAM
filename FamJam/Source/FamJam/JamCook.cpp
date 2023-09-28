// Fill out your copyright notice in the Description page of Project Settings.


#include "JamCook.h"

// Sets default values
AJamCook::AJamCook()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJamCook::BeginPlay()
{
	Super::BeginPlay();
	
}
// Called every frame
void AJamCook::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AJamCook::MiseEnPlace(int LayerCount, FColor InDebugColor)
{
	for (int idx = 0; idx < LayerCount; idx++)
	{
		FString NameString = "Layer" + idx;
		UJamCookAudioLayer* Layer = NewObject<UJamCookAudioLayer>(this, UJamCookAudioLayer::StaticClass(), FName(*NameString));
		Layer->RegisterComponent();
	}
	

}

void AJamCook::ReceiveChop(FJamChop Chop)
{

}