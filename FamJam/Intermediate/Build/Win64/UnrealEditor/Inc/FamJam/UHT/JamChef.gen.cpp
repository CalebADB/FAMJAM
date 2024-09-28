// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FamJam/JamChef.h"
#include "FamJam/JamRecipe.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamChef() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
FAMJAM_API UClass* Z_Construct_UClass_UJamChef();
FAMJAM_API UClass* Z_Construct_UClass_UJamChef_NoRegister();
FAMJAM_API UClass* Z_Construct_UClass_UJamRecipe_NoRegister();
FAMJAM_API UEnum* Z_Construct_UEnum_FamJam_EJamKey();
FAMJAM_API UScriptStruct* Z_Construct_UScriptStruct_FJamRecipeOverview();
UPackage* Z_Construct_UPackage__Script_FamJam();
// End Cross Module References

// Begin Class UJamChef
void UJamChef::StaticRegisterNativesUJamChef()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJamChef);
UClass* Z_Construct_UClass_UJamChef_NoRegister()
{
	return UJamChef::StaticClass();
}
struct Z_Construct_UClass_UJamChef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "JamChef.h" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMiseEnPlace_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRecipeIndexName_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Recipe_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecipeOverview_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAttemptToReadRecipe_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReadingRecipe_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldVisualizeJam_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldInitializeJamVisualizer_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisualizingJam_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepIdx_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeasureIdx_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextStepIdx_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextStepMeasureIdx_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tempo_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSignature_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeRatio_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsMiseEnPlace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMiseEnPlace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetRecipeIndexName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Recipe;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecipeOverview;
	static void NewProp_bShouldAttemptToReadRecipe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAttemptToReadRecipe;
	static void NewProp_bIsReadingRecipe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadingRecipe;
	static void NewProp_bShouldVisualizeJam_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldVisualizeJam;
	static void NewProp_bShouldInitializeJamVisualizer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldInitializeJamVisualizer;
	static void NewProp_bIsVisualizingJam_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisualizingJam;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StepIdx;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeasureIdx;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NextStepIdx;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NextStepMeasureIdx;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tempo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeSignature;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeRatio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJamChef>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UJamChef_Statics::NewProp_bIsMiseEnPlace_SetBit(void* Obj)
{
	((UJamChef*)Obj)->bIsMiseEnPlace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_bIsMiseEnPlace = { "bIsMiseEnPlace", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJamChef), &Z_Construct_UClass_UJamChef_Statics::NewProp_bIsMiseEnPlace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMiseEnPlace_MetaData), NewProp_bIsMiseEnPlace_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_TargetRecipeIndexName = { "TargetRecipeIndexName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, TargetRecipeIndexName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRecipeIndexName_MetaData), NewProp_TargetRecipeIndexName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_Recipe = { "Recipe", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, Recipe), Z_Construct_UClass_UJamRecipe_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Recipe_MetaData), NewProp_Recipe_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_RecipeOverview = { "RecipeOverview", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, RecipeOverview), Z_Construct_UScriptStruct_FJamRecipeOverview, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecipeOverview_MetaData), NewProp_RecipeOverview_MetaData) }; // 3162822913
void Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldAttemptToReadRecipe_SetBit(void* Obj)
{
	((UJamChef*)Obj)->bShouldAttemptToReadRecipe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldAttemptToReadRecipe = { "bShouldAttemptToReadRecipe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJamChef), &Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldAttemptToReadRecipe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldAttemptToReadRecipe_MetaData), NewProp_bShouldAttemptToReadRecipe_MetaData) };
void Z_Construct_UClass_UJamChef_Statics::NewProp_bIsReadingRecipe_SetBit(void* Obj)
{
	((UJamChef*)Obj)->bIsReadingRecipe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_bIsReadingRecipe = { "bIsReadingRecipe", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJamChef), &Z_Construct_UClass_UJamChef_Statics::NewProp_bIsReadingRecipe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReadingRecipe_MetaData), NewProp_bIsReadingRecipe_MetaData) };
void Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldVisualizeJam_SetBit(void* Obj)
{
	((UJamChef*)Obj)->bShouldVisualizeJam = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldVisualizeJam = { "bShouldVisualizeJam", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJamChef), &Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldVisualizeJam_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldVisualizeJam_MetaData), NewProp_bShouldVisualizeJam_MetaData) };
void Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldInitializeJamVisualizer_SetBit(void* Obj)
{
	((UJamChef*)Obj)->bShouldInitializeJamVisualizer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldInitializeJamVisualizer = { "bShouldInitializeJamVisualizer", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJamChef), &Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldInitializeJamVisualizer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldInitializeJamVisualizer_MetaData), NewProp_bShouldInitializeJamVisualizer_MetaData) };
void Z_Construct_UClass_UJamChef_Statics::NewProp_bIsVisualizingJam_SetBit(void* Obj)
{
	((UJamChef*)Obj)->bIsVisualizingJam = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_bIsVisualizingJam = { "bIsVisualizingJam", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJamChef), &Z_Construct_UClass_UJamChef_Statics::NewProp_bIsVisualizingJam_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVisualizingJam_MetaData), NewProp_bIsVisualizingJam_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_StepIdx = { "StepIdx", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, StepIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepIdx_MetaData), NewProp_StepIdx_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_MeasureIdx = { "MeasureIdx", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, MeasureIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeasureIdx_MetaData), NewProp_MeasureIdx_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_NextStepIdx = { "NextStepIdx", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, NextStepIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextStepIdx_MetaData), NewProp_NextStepIdx_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_NextStepMeasureIdx = { "NextStepMeasureIdx", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, NextStepMeasureIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextStepMeasureIdx_MetaData), NewProp_NextStepMeasureIdx_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_Tempo = { "Tempo", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, Tempo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tempo_MetaData), NewProp_Tempo_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_TimeSignature = { "TimeSignature", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, TimeSignature), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSignature_MetaData), NewProp_TimeSignature_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, Key), Z_Construct_UEnum_FamJam_EJamKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3050601693
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_VolumeRatio = { "VolumeRatio", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, VolumeRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeRatio_MetaData), NewProp_VolumeRatio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJamChef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_bIsMiseEnPlace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_TargetRecipeIndexName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_Recipe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_RecipeOverview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldAttemptToReadRecipe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_bIsReadingRecipe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldVisualizeJam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldInitializeJamVisualizer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_bIsVisualizingJam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_StepIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_MeasureIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_NextStepIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_NextStepMeasureIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_Tempo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_TimeSignature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_Key_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_VolumeRatio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UJamChef_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJamChef_Statics::ClassParams = {
	&UJamChef::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UJamChef_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::Class_MetaDataParams), Z_Construct_UClass_UJamChef_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJamChef()
{
	if (!Z_Registration_Info_UClass_UJamChef.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJamChef.OuterSingleton, Z_Construct_UClass_UJamChef_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJamChef.OuterSingleton;
}
template<> FAMJAM_API UClass* StaticClass<UJamChef>()
{
	return UJamChef::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJamChef);
UJamChef::~UJamChef() {}
// End Class UJamChef

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_JamChef_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJamChef, UJamChef::StaticClass, TEXT("UJamChef"), &Z_Registration_Info_UClass_UJamChef, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJamChef), 2354091208U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_JamChef_h_3407192564(TEXT("/Script/FamJam"),
	Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_JamChef_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_JamChef_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
