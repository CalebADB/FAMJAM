// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JamCookMindVisualizer.generated.h"

UENUM(BlueprintType)
enum class EJamCookThoughtEfficacy : uint8
{
	Nope,
	Bad,
	Mid,
	Good,
	Wow
};

UENUM(BlueprintType)
enum class EJamCookThoughtVisualizerButtonType : uint8
{
	PS,
	XB,
	PC,
	C1,
	C2,
	C3
};

UCLASS()
class FAMJAM_API AJamCookMindVisualizer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJamCookMindVisualizer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintNativeEvent)
	void BlueprintTick(float MeasureIdx);

	UFUNCTION(BlueprintNativeEvent)
	void BlueprintAddThought(int TriggerId, float MeasureIdxHit);

	UFUNCTION(BlueprintNativeEvent)
	void BlueprintAddFeeling(int TriggerId, EJamCookThoughtEfficacy Efficacy);
};
