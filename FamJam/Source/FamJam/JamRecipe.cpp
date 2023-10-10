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

			if (Overview.CookNameToOverviewMap.Contains(Chop.CookName))
			{
				if (Overview.CookNameToOverviewMap[Chop.CookName].LayerCount < Chop.CookLayerIdx) Overview.CookNameToOverviewMap[Chop.CookName].LayerCount = Chop.CookLayerIdx;
			}
			else
			{
				FJamRecipeCookOverview CookOverview;
				DebugAllCooksString += "Cook_" + Chop.CookName.ToString() + ", ";
				CookOverview.LayerCount = Chop.CookLayerIdx;
				Overview.CookNameToOverviewMap.Add(Chop.CookName, CookOverview);
			}
		}
		StepMeasureStart += Step.MeasuresCount;
	}

	for (TPair<FName, FJamRecipeCookOverviewParams> CookNameToOverviewParams : CookNameToOverviewParamsMap)
	{
		if (Overview.CookNameToOverviewMap.Contains(CookNameToOverviewParams.Key))
		{
			Overview.CookNameToOverviewMap[CookNameToOverviewParams.Key].CookColor = CookNameToOverviewParams.Value.CookColor;
			Overview.CookNameToOverviewMap[CookNameToOverviewParams.Key].ChopColor = CookNameToOverviewParams.Value.ChopColor;
			Overview.CookNameToOverviewMap[CookNameToOverviewParams.Key].MinceColor = CookNameToOverviewParams.Value.MinceColor;
		}
		else UE_LOG(LogTemp, Error, TEXT("The CookOverviewParams for Cook_%s were not found within the existing cooks: %s"), *CookNameToOverviewParams.Key.ToString(), *DebugAllCooksString)
	}

	return Overview;
}