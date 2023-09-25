// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "JamLibrarian.generated.h"


UCLASS(Abstract, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class FAMJAM_API UJamLibrarian : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, meta = (AllowPrivateAccess = "true"))
	UDataTable* Library;

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	bool bIsLibrarianForgiving = true;
	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	bool bIsLibraryLoaded = false;


public:
	// Sets default values for this component's properties
	UJamLibrarian();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


};
