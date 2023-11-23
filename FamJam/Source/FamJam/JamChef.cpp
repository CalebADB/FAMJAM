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

void UJamChef::MiseEnPlace(UJamChunkLibrarian* InChunkLibrarian, UJamRecipeLibrarian* InRecipeLibrarian)
{
	ChunkLibrarian = InChunkLibrarian;
	RecipeLibrarian = InRecipeLibrarian;

	bIsMiseEnPlace = true;
}

// Called every frame
void UJamChef::Update(float DeltaTime)
{
	if (bShouldAttemptToReadRecipe && !bIsReadingRecipe)
	{
		bIsReadingRecipe = AttemptStartJam();
	}

	if (!bIsReadingRecipe) return;

	ConductCooks(DeltaTime);
}

bool UJamChef::AttemptStartJam()
{
	bShouldAttemptToReadRecipe = false;

	//
	if (!bIsMiseEnPlace) return false;

	Recipe = RecipeLibrarian->GetRecipe(TargetRecipeIndexName);

	if (Recipe == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Chef could not find Recipe_%s"), *TargetRecipeIndexName.ToString())
		return false;
	}

	//
	RecipeOverview = Recipe->GetOverview();

	if (RecipeOverview.CookNameToOverviewMap.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("Overview is missing Cooks. It is possible Recipe has other defects. Recipe is being thrown"))
			return false;
	}

	TArray<AActor*> CookActors = {};
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AJamCook::StaticClass(), CookActors);

	for (TPair<FName, FJamRecipeCookOverview> CookOverview : RecipeOverview.CookNameToOverviewMap)
	{
		AJamCook* Cook = nullptr;
		
		// Find Cook in game world with matching name
		for (AActor* CookActor : CookActors)
		{
			Cook = Cast<AJamCook>(CookActor);

			UE_LOG(LogTemp, Warning, TEXT("Looking at Cook_%s"), *Cook->JamName.ToString());
			
			if (Cook->JamName == CookOverview.Key)
			{
				UE_LOG(LogTemp, Warning, TEXT("Chef found Cook_%s in the world"), *Cook->GetName());
				break;
			}
			else
			{
				Cook = nullptr;
			}
		}

		// Spawn cook if not found in game world
		if (Cook == nullptr)
		{
			UE_LOG(LogTemp, Error, TEXT("Cook_%s was not found in the world. Spawning new cook"), *CookOverview.Key.ToString());

			Cook = GetWorld()->SpawnActor<AJamCook>(AJamCook::StaticClass());
			Cook->JamName = CookOverview.Key;
		}

		// Instance each cook for jam
		Cook->MiseEnPlace(ChunkLibrarian, CookOverview.Value.BoardClasses);
		Cooks.Add(CookOverview.Key, Cook);
	}

	//
	MeasureIdx = 0;

	Tempo = Recipe->TempoStart;
	NextStepIdx = 0;
	NextStepMeasureIdx = 0;
	CallChops(NextStepMeasureIdx, Recipe->Steps[NextStepIdx]);

	StepIdx = NextStepIdx;
	NextStepIdx = StepIdx + 1;
	NextStepMeasureIdx = Recipe->Steps[StepIdx].MeasuresCount;
	CallChops(NextStepMeasureIdx, Recipe->Steps[NextStepIdx]);


	//
	if(bShouldVisualizeJam) bShouldInitializeJamVisualizer = true;

	return true;
}

void UJamChef::FinishJam()
{
	//
	Recipe = nullptr;

	for (TPair<FName, AJamCook*> Cook : Cooks)
	{
		Cooks[Cook.Key]->Destroy();
	}
	Cooks.Empty();

	bIsReadingRecipe = false;

	UE_LOG(LogTemp, Warning, TEXT("Song ended"))
}

void UJamChef::ConductCooks(float DeltaTime)
{
	if (StepIdx >= Recipe->Steps.Num())
	{
		UE_LOG(LogTemp, Error, TEXT("Chef is trying to call Step_%d which doesn't exist"), StepIdx);

		return;
	}

	//UE_LOG(LogTemp, Warning, TEXT("MeasureIdx_%.5f"), MeasureIdx);

	if (MeasureIdx >= NextStepMeasureIdx)
	{
		if (NextStepIdx >= Recipe->Steps.Num())
		{
			FinishJam();
			return;
		}
		StepIdx = NextStepIdx;
		NextStepMeasureIdx += Recipe->Steps[StepIdx].MeasuresCount;

		// Select Default NextStep
		NextStepIdx = StepIdx + 1;

		// Prep next chops
		if (NextStepIdx < Recipe->Steps.Num())
		{
			CallChops(NextStepMeasureIdx, Recipe->Steps[NextStepIdx]);
		}
	}

	for (TPair<FName, AJamCook*> Cook : Cooks)
	{
		Cook.Value->ProcessChops(MeasureIdx, Tempo);
	}

	MeasureIdx += DeltaTime * ((Tempo / 60.0f) / TimeSignature.X);
}

void UJamChef::CallChops(float StepMeasureIdx, FJamStep Step)
{
	for (FJamChop Chop : Step.Chops)
	{
		Cooks[Chop.CookName]->ReceiveCalledChop(StepMeasureIdx, Chop);
	}
}



