// Fill out your copyright notice in the Description page of Project Settings.


#include "JamRecipe.h"

FJamRecipeOverview UJamRecipe::GetOverview()
{
	FJamRecipeOverview Overview;
	FString DebugAllCooksString;

	Overview.VolumeRatioMax = VolumeRatioStart;
	float StepMeasureStart = 0;
	for (FJamStep Step : Steps)
	{
		if (Overview.LastMeasure < (StepMeasureStart + Step.MeasuresCount))
		{
			Overview.LastMeasure = StepMeasureStart + Step.MeasuresCount;
			//UE_LOG(LogTemp, Warning, TEXT("Step at measure_%f has the latest measure at %f"), StepMeasureStart, Overview.LastMeasure);

		}

		float StepVolumeRatioMax = 0.0f;
		for (TPair<FName, FJamStepSpecialActionParams> StepSpecialActionKeyToParams : Step.SpecialActionKeyToParamsMap)
		{
			if (StepVolumeRatioMax < StepSpecialActionKeyToParams.Value.VolumeRatioTarget)
			{
				StepVolumeRatioMax = StepSpecialActionKeyToParams.Value.VolumeRatioTarget;
			}
		}

		for (FJamChop Chop : Step.Chops)
		{
			if (Overview.LastMeasure < (StepMeasureStart + Chop.MeasureStart + Chop.MeasureCount))
			{
				Overview.LastMeasure = StepMeasureStart + Chop.MeasureStart + Chop.MeasureCount;
				//UE_LOG(LogTemp, Warning, TEXT("Chop for Cook_%s_Layer_%d has the latest measure at %f"), Chop.ChunkName, Chop.CookLayerIdx, Overview.LastMeasure);
			}

			for (TPair<FName, FJamChopSpecialActionParams> ChopSpecialActionKeyToParams : Chop.SpecialActionKeyToParamsMap)
			{
				if (Overview.VolumeRatioMax < StepVolumeRatioMax * ChopSpecialActionKeyToParams.Value.VolumeRatioTarget)
				{
					Overview.VolumeRatioMax = StepVolumeRatioMax * ChopSpecialActionKeyToParams.Value.VolumeRatioTarget;
				}
			}

			if (CookNameToOverviewParamsMap.Contains(Chop.CookName))
			{
				if (CookNameToOverviewParamsMap[Chop.CookName].LayerCountMax < Chop.CookLayerIdx) CookNameToOverviewParamsMap[Chop.CookName].LayerCountMax = Chop.CookLayerIdx;
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Cook_%s was not found in the recipe CookNameToOverviewParamsMap"), *Chop.CookName.ToString());
			}
		}
		StepMeasureStart += Step.MeasuresCount;
	}

	for (TPair<FName, FJamRecipeCookOverviewParams> CookNameToOverviewParams : CookNameToOverviewParamsMap)
	{
		if (CookNameToOverviewParams.Value.DefaultBoard == nullptr) 
		{ 
			UE_LOG(LogTemp, Error, TEXT("Cook_%s is missing a DefaultBoard in FJamRecipeCookOverviewParams"), *CookNameToOverviewParams.Key.ToString());
			return FJamRecipeOverview();
		}

		FJamRecipeCookOverview CookOverview;
		
		CookOverview.CookColor = CookNameToOverviewParams.Value.CookColor;
		CookOverview.ChopColor = CookNameToOverviewParams.Value.ChopColor;
		CookOverview.MinceColor = CookNameToOverviewParams.Value.MinceColor;

		for (int idx = 0; idx < CookNameToOverviewParams.Value.LayerCountMax; idx++)
		{
			if (CookNameToOverviewParams.Value.LayerToCustomBoard.Contains(idx))
			{
				CookOverview.BoardClasses.Add(CookNameToOverviewParams.Value.LayerToCustomBoard[idx]);
			}
			else
			{
				CookOverview.BoardClasses.Add(CookNameToOverviewParams.Value.DefaultBoard);
			}
		}

		Overview.CookNameToOverviewMap.Add(CookNameToOverviewParams.Key, CookOverview);
	}

	return Overview;
}