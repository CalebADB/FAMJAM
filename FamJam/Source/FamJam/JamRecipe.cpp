// Fill out your copyright notice in the Description page of Project Settings.


#include "JamRecipe.h"

FJamRecipeOverview UJamRecipe::GetOverview()
{
	FJamRecipeOverview Overview;
	
	Overview.VolumeRatioMax = VolumeRatioStart;

	for (FJamStep Step : Steps)
	{
		if (Overview.LastMeasure < (Step.MeasureStart + Step.MeasuresCount))
		{
			Overview.LastMeasure = Step.MeasureStart + Step.MeasuresCount;
			UE_LOG(LogTemp, Warning, TEXT("Step at measure_%f has the latest measure at %f"), Step.MeasureStart, Overview.LastMeasure);

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
			if (Overview.LastMeasure < (Step.MeasureStart + Chop.MeasureStart + Chop.MeasureCount))
			{
				Overview.LastMeasure = Step.MeasureStart + Chop.MeasureStart + Chop.MeasureCount;
				UE_LOG(LogTemp, Warning, TEXT("Chop for Cook_%s_Layer_%d has the latest measure at %f"), Chop.ChunkName, Chop.CookLayer, Overview.LastMeasure);
			}

			for (TPair<FName, FJamChopSpecialActionParams> ChopSpecialActionKeyToParams : Chop.SpecialActionKeyToParamsMap)
			{
				if (Overview.VolumeRatioMax < StepVolumeRatioMax * ChopSpecialActionKeyToParams.Value.VolumeRatioTarget)
				{
					Overview.VolumeRatioMax = StepVolumeRatioMax * ChopSpecialActionKeyToParams.Value.VolumeRatioTarget;
				}
			}

			if (Overview.CookNameToLayerCountMap.Contains(Chop.CookName))
			{
				if (Overview.CookNameToLayerCountMap[Chop.CookName] < Chop.CookLayer) Overview.CookNameToLayerCountMap[Chop.CookName] = Chop.CookLayer;
			}
			else
			{
				Overview.CookNameToLayerCountMap.Add(Chop.CookName, Chop.CookLayer);
			}
		}
	}

	for (TPair<FName, int> CookNameToLayerCount : Overview.CookNameToLayerCountMap)
	{
		if (CookNameToDebugColorMap.Contains(CookNameToLayerCount.Key))
		{
			Overview.CookNameToDebugColorMap.Add(CookNameToLayerCount.Key, CookNameToDebugColorMap[CookNameToLayerCount.Key]);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s does not have a debug color"), *CookNameToLayerCount.Key.ToString())
			Overview.CookNameToDebugColorMap.Add(CookNameToLayerCount.Key, CookDefaultDebugColor);
		}
	}

	for (TPair<FName, FColor> CookNameToDebugColor : CookNameToDebugColorMap)
	{
		if (!Overview.CookNameToLayerCountMap.Contains(CookNameToDebugColor.Key))
		{
			UE_LOG(LogTemp, Error, TEXT("%s does not exist in Overview.CookNameToLayerCountMap"), *CookNameToDebugColor.Key.ToString())
		}
	}

	return Overview;
}