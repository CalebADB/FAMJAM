// Fill out your copyright notice in the Description page of Project Settings.

#include "JamCookMindVisualizer.h"

//#include "JamCookMind.h"

// Sets default values
AJamCookMindVisualizer::AJamCookMindVisualizer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJamCookMindVisualizer::BeginPlay()
{
	Super::BeginPlay();
	
}

void AJamCookMindVisualizer::BlueprintTick_Implementation(float MeasureIdx)
{

}

void AJamCookMindVisualizer::BlueprintAddThought_Implementation(int TriggerId, float MeasureIdxHit)
{

}
void AJamCookMindVisualizer::BlueprintAddFeeling_Implementation(int TriggerId, EJamCookThoughtEfficacy Efficacy)
{

}
