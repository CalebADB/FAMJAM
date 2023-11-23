// Fill out your copyright notice in the Description page of Project Settings.


#include "JamCookMind.h"

// Sets default values
AJamCookMind::AJamCookMind()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJamCookMind::BeginPlay()
{
	Super::BeginPlay();
	Triggers.Add(1, FJamCookTrigger());
	Triggers.Add(2, FJamCookTrigger());
	Triggers.Add(3, FJamCookTrigger());
	Triggers.Add(4, FJamCookTrigger());
	Triggers.Add(5, FJamCookTrigger());
	Triggers.Add(6, FJamCookTrigger());
	Triggers.Add(7, FJamCookTrigger());
	Triggers.Add(8, FJamCookTrigger());
	Triggers.Add(9, FJamCookTrigger());
	Triggers.Add(10, FJamCookTrigger());
}

// Called every frame
void AJamCookMind::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bShouldVisualize)
	{
		Visualizer->BlueprintTick(DeltaTime);
	}
}

void AJamCookMind::Think(int ChopId, int TriggerId, float MeasureIdxHit)
{
	FJamCookThought Thought;
	UE_LOG(LogTemp, Warning, TEXT("CookMind was given Chop_%d"), ChopId);

	Thought.ChopId = ChopId;
	Thought.TriggerId = TriggerId;
	Thought.MeasureIdxExist = MeasureIdxHit - SuckerSoon;
	Thought.MeasureIdxWarm = MeasureIdxHit - SugarSoon;
	Thought.MeasureIdxReady = MeasureIdxHit - SamuraiSoon;
	Thought.MeasureIdxHitMin = MeasureIdxHit - TalentToleranceMin;
	Thought.MeasureIdxHit = MeasureIdxHit;
	Thought.MeasureIdxHitMax = MeasureIdxHit + TalentToleranceMax;
	Thought.MeasureIdxOld = MeasureIdxHit + NearlySwagger;
	Thought.MeasureIdxForget = MeasureIdxHit + NerdSwagger;
	Thought.MeasureIdxExtinct = MeasureIdxHit + NoSwagger;

	Thoughts.Add(Thought);
}

TArray<FJamCookFeeling> AJamCookMind::Feel(float MeasureIdx)
{
	TArray<FJamCookFeeling> Feelings;

	TArray<int> DoneThoughtIdxs;
	for (int ThoughtIdx = 0; ThoughtIdx < Thoughts.Num(); ThoughtIdx++)
	{
		FJamCookThought Thought = Thoughts[ThoughtIdx];

		FJamCookFeeling Feeling;
		Feeling.Thought = Thought;

		if (!Triggers.Contains(Feeling.Thought.TriggerId))
		{
			if (Feeling.Thought.MeasureIdxHit <= MeasureIdx)
			{
				Feeling.Efficacy = EJamCookThoughtEfficacy::Wow;
				Feelings.Add(Feeling);
				DoneThoughtIdxs.Add(ThoughtIdx);
			}
		}
		else
		{
			// Check if the thought is extinct
			if (Thought.MeasureIdxExtinct <= MeasureIdx)
			{
				DoneThoughtIdxs.Add(ThoughtIdx);
			}

			// Check if a trigger was pressed
			if (Triggers[Feeling.Thought.TriggerId].Impulses.Num() == 0)
			{
				// Remove Impulse from queue
				EJamCookThoughtEfficacy Efficacy = EJamCookThoughtEfficacy::Nope;
				if (Thought.MeasureIdxExist <= MeasureIdx && MeasureIdx < Thought.MeasureIdxWarm)
				{
					Efficacy = EJamCookThoughtEfficacy::Bad;
				}
				else if (Thought.MeasureIdxWarm <= MeasureIdx && MeasureIdx < Thought.MeasureIdxReady)
				{
					Efficacy = EJamCookThoughtEfficacy::Mid;
				}
				else if (Thought.MeasureIdxReady <= MeasureIdx && MeasureIdx < Thought.MeasureIdxHitMin)
				{
					Efficacy = EJamCookThoughtEfficacy::Good;
				}
				else if (Thought.MeasureIdxHitMin <= MeasureIdx && MeasureIdx < Thought.MeasureIdxHitMax)
				{
					Efficacy = EJamCookThoughtEfficacy::Wow;
				}
				else if (Thought.MeasureIdxHitMax <= MeasureIdx && MeasureIdx < Thought.MeasureIdxOld)
				{
					Efficacy = EJamCookThoughtEfficacy::Good;
				}
				else if (Thought.MeasureIdxOld <= MeasureIdx && MeasureIdx < Thought.MeasureIdxForget)
				{
					Efficacy = EJamCookThoughtEfficacy::Mid;
				}
				else if (Thought.MeasureIdxForget <= MeasureIdx && MeasureIdx < Thought.MeasureIdxExtinct)
				{
					Efficacy = EJamCookThoughtEfficacy::Bad;
				}
				UE_LOG(LogTemp, Warning, TEXT("Chop_%d waiting for Trigger_%d. Current efficacy rating_%d/4"), Feeling.Thought.ChopId, Thought.TriggerId, Efficacy);

				continue;
			}
			UE_LOG(LogTemp, Warning, TEXT("We made it on an impulse from Trigger_%d"), Feeling.Thought.TriggerId);
			
			// Remove Impulse from queue
			Triggers[Feeling.Thought.TriggerId].Impulses.RemoveAt(0);

			if (Thought.MeasureIdxExist <= MeasureIdx && MeasureIdx < Thought.MeasureIdxWarm)
			{
				Feeling.Efficacy = EJamCookThoughtEfficacy::Bad;
				Feelings.Add(Feeling);
				DoneThoughtIdxs.Add(ThoughtIdx);
			}
			else if (Thought.MeasureIdxWarm <= MeasureIdx && MeasureIdx < Thought.MeasureIdxReady)
			{
				Feeling.Efficacy = EJamCookThoughtEfficacy::Mid;
				Feelings.Add(Feeling);
				DoneThoughtIdxs.Add(ThoughtIdx);
			}
			else if (Thought.MeasureIdxReady <= MeasureIdx && MeasureIdx < Thought.MeasureIdxHitMin)
			{
				Feeling.Efficacy = EJamCookThoughtEfficacy::Good;
				Feelings.Add(Feeling);
				DoneThoughtIdxs.Add(ThoughtIdx);
			}
			else if (Thought.MeasureIdxHitMin <= MeasureIdx && MeasureIdx < Thought.MeasureIdxHitMax)
			{
				Feeling.Efficacy = EJamCookThoughtEfficacy::Wow;
				Feelings.Add(Feeling);
				DoneThoughtIdxs.Add(ThoughtIdx);
			}
			else if (Thought.MeasureIdxHitMax <= MeasureIdx && MeasureIdx < Thought.MeasureIdxOld)
			{
				Feeling.Efficacy = EJamCookThoughtEfficacy::Good;
				Feelings.Add(Feeling);
				DoneThoughtIdxs.Add(ThoughtIdx);
			}
			else if (Thought.MeasureIdxOld <= MeasureIdx && MeasureIdx < Thought.MeasureIdxForget)
			{
				Feeling.Efficacy = EJamCookThoughtEfficacy::Mid;
				Feelings.Add(Feeling);
				DoneThoughtIdxs.Add(ThoughtIdx);
			}
			else if (Thought.MeasureIdxForget <= MeasureIdx && MeasureIdx < Thought.MeasureIdxExtinct)
			{
				Feeling.Efficacy = EJamCookThoughtEfficacy::Bad;
				Feelings.Add(Feeling);
				DoneThoughtIdxs.Add(ThoughtIdx);
			}
		}
	}

	for (int idx = DoneThoughtIdxs.Num() - 1; idx >= 0; idx--)
	{
		UE_LOG(LogTemp, Warning, TEXT("CookMind is removing thought for Chop_%d"), Thoughts[DoneThoughtIdxs[idx]].ChopId);
		Thoughts.RemoveAt(DoneThoughtIdxs[idx]);
	}

	return Feelings;
}


// Called to bind functionality to input
void AJamCookMind::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

