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

void AJamCook::MiseEnPlace(int LayerCount)
{
	for (int idx = 0; idx < LayerCount; idx++)
	{
		FString NameString = "AudioLayer" + FString::FromInt(idx);
		UE_LOG(LogTemp, Warning, TEXT("New audio layer made: %s"), *NameString);
		UJamCookAudioLayer* AudioLayer = NewObject<UJamCookAudioLayer>(this, UJamCookAudioLayer::StaticClass(), FName(*NameString));
		AudioLayer->RegisterComponent();
		AudioLayers.Add(AudioLayer);
	}
}

//void AJamCook::QueueChop(float ChopTime, int LayerIdx, FJamChunk Chunk, FJamChopSpecialActionParams SpecialActionParams)
//{
//	AudioLayers[LayerIdx]
//}

