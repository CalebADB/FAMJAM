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

	for (TPair<FName, FJamRecipeCookOverview> CookOverview : RecipeOverview.CookNameToOverviewMap)
	{
		AJamCook * Cook = GetWorld()->SpawnActor<AJamCook>(AJamCook::StaticClass());
		Cook->MiseEnPlace(CookOverview.Value.LayerCount);
		Cooks.Add(CookOverview.Key, Cook);
	}

	//
	StepIdx = 0;
	Tempo = Recipe->TempoStart;
	MeasureRemaining += Recipe->Steps[StepIdx].MeasuresCount;

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
		return;
	}
	Time += DeltaTime;

	MeasureRemaining -= DeltaTime * ((Tempo / 60.0f) / TimeSignature.X);

	if (MeasureRemaining <= 0.0f)
	{
		if (StepIdx+1 >= Recipe->Steps.Num())
		{
			FinishJam();

			return;
		}
		StepIdx++;
		MeasureRemaining = Recipe->Steps[StepIdx].MeasuresCount;

		StepChopIdxsOrdered.Empty();

		// Special Action Handling
	}
	//UE_LOG(LogTemp, Warning, TEXT("Conducting cooks at t_%.5f with %.5f_measures remaining"), Time, MeasureRemaining);

	for (int ChopIdx = 0; ChopIdx < Recipe->Steps[StepIdx].Chops.Num(); ChopIdx++)
	{
		if (StepChopIdxsOrdered.Contains(ChopIdx)) continue;

		FJamChop Chop = Recipe->Steps[StepIdx].Chops[ChopIdx];		
		if (Chop.MeasureStart <= Recipe->Steps[StepIdx].MeasuresCount - MeasureRemaining)
		{
			StepChopIdxsOrdered.Add(ChopIdx);
			UE_LOG(LogTemp, Warning, TEXT("In Step_%d, Chop_%d For Cook_%s, Layer_%d was played at t_%.5f with %.5f measures remaining"), StepIdx, ChopIdx, *Chop.CookName.ToString(), Chop.CookLayerIdx, Time, MeasureRemaining);
		}
	}
}



