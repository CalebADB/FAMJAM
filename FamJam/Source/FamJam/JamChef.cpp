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

	Recipe = RecipeLibrarian->GetRecipe(TargetRecipeIndexName);

	if (Recipe == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("JamChef could not find Recipe_%s"), *TargetRecipeIndexName.ToString());
		return;
	}
	
	// 
	RecipeOverview = Recipe->GetOverview();
	
	if (!AttemptPrepClock(Recipe->TempoStart))
	{
		UE_LOG(LogTemp, Error, TEXT("JamChef failed to build Clock"));
		return;
	}

	// 

	bIsMiseEnPlace = true;
}

bool UJamChef::AttemptPrepClock(float RecipeStartTempo)
{
	//
	UQuartzSubsystem* QuartzSubsystem = GetWorld()->GetSubsystem<UQuartzSubsystem>();
	if (!QuartzSubsystem)
	{
		UE_LOG(LogTemp, Error, TEXT("QuartzSubsystem is not available."));
		return false;
	}

	// Goal: Bind quartz clock measure To jam beat
	// Quartz BPM is tied to quarter note. Set one beat per quartz measure
	FQuartzClockSettings ClockSettings;
	ClockSettings.TimeSignature.NumBeats = 1;

	// Create quartz clock
	FName ClockName = FName("JamClock");
	Clock = QuartzSubsystem->CreateNewClock(this, ClockName, ClockSettings);
	if (!Clock)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create QuartzClockHandle."));
		return false;
	}

	// Set quartz clock BPM from JamRecipe
	FQuartzQuantizationBoundary SetBPMBoundary;
	SetBPMBoundary.bFireOnClockStart = true;

	FOnQuartzCommandEventBP OnSetBPMDelegate;

	float ClockBPM = RecipeStartTempo;

	Clock->SetBeatsPerMinute(this, SetBPMBoundary, OnSetBPMDelegate, Clock, ClockBPM);

	// Create beat event and have chef conduct cooks on each beat
	FOnQuartzMetronomeEventBP OnBeatEvent;
	OnBeatEvent.BindUFunction(this, FName("ConductCooks"));

	if (!OnBeatEvent.IsBound())
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to bind ConductCooks event"));
		return false;
	}

	Clock->SubscribeToQuantizationEvent(this,
		EQuartzCommandQuantization::Bar,
		OnBeatEvent,
		Clock
	);

	return true;
}


// Called every frame
void UJamChef::Update(float DeltaTime)
{
	if (bShouldAttemptToReadRecipe && !bIsReadingRecipe)
	{
		bIsReadingRecipe = AttemptStartJam();
	}

	if (!bIsReadingRecipe) return;

	//ConductCooks(DeltaTime);
}

bool UJamChef::AttemptStartJam()
{
	bShouldAttemptToReadRecipe = false;

	//
	if (!bIsMiseEnPlace) return false;

	if (RecipeOverview.CookNameToOverviewMap.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("Overview is missing Cooks. It is possible Recipe has other defects. Recipe is being thrown"));
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
	NextStepIdx = 0;

	Clock->StartClock(this, Clock);

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

	Clock->StopClock(this, true, Clock);

	bIsReadingRecipe = false;

	UE_LOG(LogTemp, Log, TEXT("Song ended"))
}

void UJamChef::ConductCooks()
{
	JamBeatCount++;
	StepBeatCountRemaining--;
	PrepNextStepBeatCountRemaining--;

	if (StepBeatCountRemaining <= 0)
	{
		if (NextStepIdx == -1)
		{
			FinishJam();
			return;
		}

		FireNextStep();
	}

	if (PrepNextStepBeatCountRemaining <= 0
		&&
		!bIsNextStepPrepped)
	{
		PrepNextStep();
	}

	float timeDebug = Clock->GetCurrentTimestamp(this).Seconds;
	Audio::FQuartzClockTickRate OutTickRate;
	Clock->GetCurrentTickRate(this, OutTickRate);
	float BeatsPerMinute = OutTickRate.GetBeatsPerMinute();
	UE_LOG(LogTemp, Log, TEXT("B_%06d: Step_%03d, StepBeatCountRemaining_%04d"), JamBeatCount, StepIdx, StepBeatCountRemaining, BeatsPerMinute);
}

void UJamChef::PrepNextStep()
{
	if (!bIsMiseEnPlace) return ;

	DecideNextStep();

	UE_LOG(LogTemp, Log, TEXT("B_%06d: Preping NextStep_%03d"), JamBeatCount, NextStepIdx);

	//PrepChops();

	bIsNextStepPrepped = true;
}

void UJamChef::DecideNextStep()
{
	int PotentialNextStepIdx = -1;

	//This is where the step branching code goes DARIUS
	PotentialNextStepIdx = StepIdx + 1;

	if (PotentialNextStepIdx >= Recipe->Steps.Num())
	{
		UE_LOG(LogTemp, Warning, TEXT("Chef is trying to Prep NextStep_%d which doesn't exist"), PotentialNextStepIdx);

		NextStepIdx = -1;

		return;
	}

	NextStepIdx = PotentialNextStepIdx;
}

void UJamChef::PrepChops()
{
	for (FJamChop Chop : Recipe->Steps[NextStepIdx].Chops)
	{
		Cooks[Chop.CookName]->PrepChop(0.0f, Chop);
	}
}


void UJamChef::FireNextStep()
{
	if (!bIsMiseEnPlace) return ;

	//
	if (NextStepIdx >= Recipe->Steps.Num())
	{
		UE_LOG(LogTemp, Error, TEXT("Chef is trying to Fire NextStep_%d which doesn't exist"), NextStepIdx);

		return;
	}

	StepIdx = NextStepIdx;

	// FireStep
	float BeatLengthTolerance = 0.05f;

	// Time until step ends
	float StepBeatLength = Recipe->Steps[StepIdx].MeasureLength * Recipe->TimeSignature.X;
	int StepBeatCount = FMath::FloorToInt(StepBeatLength);
	float RemainingStepBeatLength = StepBeatLength - (float)StepBeatCount;
	if (RemainingStepBeatLength > BeatLengthTolerance)
	{
		UE_LOG(LogTemp, Warning, TEXT("B_%06d: Step_%03d was given an extra step because of RemainingBeatLength_%.5f"), JamBeatCount, StepIdx, RemainingStepBeatLength);
		StepBeatCount++;
	}

	StepBeatCountRemaining = StepBeatCount;


	// Time until next step must be prepped
	float PrepNextStepBeatLength = Recipe->Steps[StepIdx].NextStepPrepMeasureLength * Recipe->TimeSignature.X;
	int PrepNextStepBeatCount = FMath::FloorToInt(PrepNextStepBeatLength);
	float RemainingPrepNextStepBeatLength = PrepNextStepBeatLength - (float)PrepNextStepBeatCount;
	if (RemainingPrepNextStepBeatLength > BeatLengthTolerance)
	{
		UE_LOG(LogTemp, Warning, TEXT("B_%06d: Step_%03d was given an extra step because of RemainingPrepNextStepBeatLength_%.5f"), JamBeatCount, StepIdx, RemainingPrepNextStepBeatLength);
		PrepNextStepBeatCount++;
	}

	PrepNextStepBeatCountRemaining = PrepNextStepBeatCount;

	bIsNextStepPrepped = false;
}

