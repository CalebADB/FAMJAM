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
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	FAMJAM_API UClass* Z_Construct_UClass_UJamChef();
	FAMJAM_API UClass* Z_Construct_UClass_UJamChef_NoRegister();
	FAMJAM_API UClass* Z_Construct_UClass_UJamRecipe_NoRegister();
	FAMJAM_API UEnum* Z_Construct_UEnum_FamJam_EJamKey();
	FAMJAM_API UScriptStruct* Z_Construct_UScriptStruct_FJamRecipeOverview();
	UPackage* Z_Construct_UPackage__Script_FamJam();
// End Cross Module References
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
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMiseEnPlace_MetaData[];
#endif
		static void NewProp_bIsMiseEnPlace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMiseEnPlace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRecipeIndexName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetRecipeIndexName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Recipe_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Recipe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecipeOverview_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecipeOverview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAttemptToReadRecipe_MetaData[];
#endif
		static void NewProp_bShouldAttemptToReadRecipe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAttemptToReadRecipe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsReadingRecipe_MetaData[];
#endif
		static void NewProp_bIsReadingRecipe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadingRecipe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldVisualizeJam_MetaData[];
#endif
		static void NewProp_bShouldVisualizeJam_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldVisualizeJam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldInitializeJamVisualizer_MetaData[];
#endif
		static void NewProp_bShouldInitializeJamVisualizer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldInitializeJamVisualizer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeasureRemaining_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MeasureRemaining;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tempo_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tempo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSignature_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimeSignature;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeRatio;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepChopIdxsOrdered_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepChopIdxsOrdered_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StepChopIdxsOrdered;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJamChef_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamChef_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "JamChef.h" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamChef_Statics::NewProp_bIsMiseEnPlace_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
#endif
	void Z_Construct_UClass_UJamChef_Statics::NewProp_bIsMiseEnPlace_SetBit(void* Obj)
	{
		((UJamChef*)Obj)->bIsMiseEnPlace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_bIsMiseEnPlace = { "bIsMiseEnPlace", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJamChef), &Z_Construct_UClass_UJamChef_Statics::NewProp_bIsMiseEnPlace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::NewProp_bIsMiseEnPlace_MetaData), Z_Construct_UClass_UJamChef_Statics::NewProp_bIsMiseEnPlace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamChef_Statics::NewProp_TargetRecipeIndexName_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_TargetRecipeIndexName = { "TargetRecipeIndexName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, TargetRecipeIndexName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::NewProp_TargetRecipeIndexName_MetaData), Z_Construct_UClass_UJamChef_Statics::NewProp_TargetRecipeIndexName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamChef_Statics::NewProp_Recipe_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_Recipe = { "Recipe", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, Recipe), Z_Construct_UClass_UJamRecipe_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::NewProp_Recipe_MetaData), Z_Construct_UClass_UJamChef_Statics::NewProp_Recipe_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamChef_Statics::NewProp_RecipeOverview_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_RecipeOverview = { "RecipeOverview", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, RecipeOverview), Z_Construct_UScriptStruct_FJamRecipeOverview, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::NewProp_RecipeOverview_MetaData), Z_Construct_UClass_UJamChef_Statics::NewProp_RecipeOverview_MetaData) }; // 598389494
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldAttemptToReadRecipe_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
#endif
	void Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldAttemptToReadRecipe_SetBit(void* Obj)
	{
		((UJamChef*)Obj)->bShouldAttemptToReadRecipe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldAttemptToReadRecipe = { "bShouldAttemptToReadRecipe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJamChef), &Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldAttemptToReadRecipe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldAttemptToReadRecipe_MetaData), Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldAttemptToReadRecipe_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamChef_Statics::NewProp_bIsReadingRecipe_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
#endif
	void Z_Construct_UClass_UJamChef_Statics::NewProp_bIsReadingRecipe_SetBit(void* Obj)
	{
		((UJamChef*)Obj)->bIsReadingRecipe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_bIsReadingRecipe = { "bIsReadingRecipe", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJamChef), &Z_Construct_UClass_UJamChef_Statics::NewProp_bIsReadingRecipe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::NewProp_bIsReadingRecipe_MetaData), Z_Construct_UClass_UJamChef_Statics::NewProp_bIsReadingRecipe_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldVisualizeJam_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
#endif
	void Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldVisualizeJam_SetBit(void* Obj)
	{
		((UJamChef*)Obj)->bShouldVisualizeJam = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldVisualizeJam = { "bShouldVisualizeJam", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJamChef), &Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldVisualizeJam_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldVisualizeJam_MetaData), Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldVisualizeJam_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldInitializeJamVisualizer_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
#endif
	void Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldInitializeJamVisualizer_SetBit(void* Obj)
	{
		((UJamChef*)Obj)->bShouldInitializeJamVisualizer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldInitializeJamVisualizer = { "bShouldInitializeJamVisualizer", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJamChef), &Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldInitializeJamVisualizer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldInitializeJamVisualizer_MetaData), Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldInitializeJamVisualizer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamChef_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, Time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::NewProp_Time_MetaData), Z_Construct_UClass_UJamChef_Statics::NewProp_Time_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamChef_Statics::NewProp_StepIdx_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_StepIdx = { "StepIdx", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, StepIdx), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::NewProp_StepIdx_MetaData), Z_Construct_UClass_UJamChef_Statics::NewProp_StepIdx_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamChef_Statics::NewProp_MeasureRemaining_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_MeasureRemaining = { "MeasureRemaining", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, MeasureRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::NewProp_MeasureRemaining_MetaData), Z_Construct_UClass_UJamChef_Statics::NewProp_MeasureRemaining_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamChef_Statics::NewProp_Tempo_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_Tempo = { "Tempo", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, Tempo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::NewProp_Tempo_MetaData), Z_Construct_UClass_UJamChef_Statics::NewProp_Tempo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamChef_Statics::NewProp_TimeSignature_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_TimeSignature = { "TimeSignature", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, TimeSignature), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::NewProp_TimeSignature_MetaData), Z_Construct_UClass_UJamChef_Statics::NewProp_TimeSignature_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamChef_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, Key), Z_Construct_UEnum_FamJam_EJamKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::NewProp_Key_MetaData), Z_Construct_UClass_UJamChef_Statics::NewProp_Key_MetaData) }; // 2996348813
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamChef_Statics::NewProp_VolumeRatio_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_VolumeRatio = { "VolumeRatio", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, VolumeRatio), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::NewProp_VolumeRatio_MetaData), Z_Construct_UClass_UJamChef_Statics::NewProp_VolumeRatio_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_StepChopIdxsOrdered_Inner = { "StepChopIdxsOrdered", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamChef_Statics::NewProp_StepChopIdxsOrdered_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_StepChopIdxsOrdered = { "StepChopIdxsOrdered", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, StepChopIdxsOrdered), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::NewProp_StepChopIdxsOrdered_MetaData), Z_Construct_UClass_UJamChef_Statics::NewProp_StepChopIdxsOrdered_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJamChef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_bIsMiseEnPlace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_TargetRecipeIndexName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_Recipe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_RecipeOverview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldAttemptToReadRecipe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_bIsReadingRecipe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldVisualizeJam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_bShouldInitializeJamVisualizer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_StepIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_MeasureRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_Tempo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_TimeSignature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_Key_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_VolumeRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_StepChopIdxsOrdered_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_StepChopIdxsOrdered,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJamChef_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJamChef>::IsAbstract,
	};
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChef_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChef_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJamChef, UJamChef::StaticClass, TEXT("UJamChef"), &Z_Registration_Info_UClass_UJamChef, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJamChef), 2594507742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChef_h_1650630312(TEXT("/Script/FamJam"),
		Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChef_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChef_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
