// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FamJam/JamRecipe.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamRecipe() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FAMJAM_API UClass* Z_Construct_UClass_UJamRecipe();
	FAMJAM_API UClass* Z_Construct_UClass_UJamRecipe_NoRegister();
	FAMJAM_API UEnum* Z_Construct_UEnum_FamJam_EJamKey();
	FAMJAM_API UScriptStruct* Z_Construct_UScriptStruct_FJamChop();
	FAMJAM_API UScriptStruct* Z_Construct_UScriptStruct_FJamRecipeStep();
	UPackage* Z_Construct_UPackage__Script_FamJam();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JamChop;
class UScriptStruct* FJamChop::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JamChop.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JamChop.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJamChop, (UObject*)Z_Construct_UPackage__Script_FamJam(), TEXT("JamChop"));
	}
	return Z_Registration_Info_UScriptStruct_JamChop.OuterSingleton;
}
template<> FAMJAM_API UScriptStruct* StaticStruct<FJamChop>()
{
	return FJamChop::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJamChop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CookName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookLayer_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CookLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChunkName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInteractive_MetaData[];
#endif
		static void NewProp_bIsInteractive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInteractive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChop_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJamChop_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJamChop>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_CookName_MetaData[] = {
		{ "Category", "JamChop" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_CookName = { "CookName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChop, CookName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_CookName_MetaData), Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_CookName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_CookLayer_MetaData[] = {
		{ "Category", "JamChop" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_CookLayer = { "CookLayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChop, CookLayer), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_CookLayer_MetaData), Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_CookLayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_ChunkName_MetaData[] = {
		{ "Category", "JamChop" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_ChunkName = { "ChunkName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChop, ChunkName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_ChunkName_MetaData), Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_ChunkName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_bIsInteractive_MetaData[] = {
		{ "Category", "JamChop" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_bIsInteractive_SetBit(void* Obj)
	{
		((FJamChop*)Obj)->bIsInteractive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_bIsInteractive = { "bIsInteractive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJamChop), &Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_bIsInteractive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_bIsInteractive_MetaData), Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_bIsInteractive_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJamChop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_CookName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_CookLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_ChunkName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_bIsInteractive,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJamChop_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
		nullptr,
		&NewStructOps,
		"JamChop",
		Z_Construct_UScriptStruct_FJamChop_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChop_Statics::PropPointers),
		sizeof(FJamChop),
		alignof(FJamChop),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChop_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJamChop_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChop_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FJamChop()
	{
		if (!Z_Registration_Info_UScriptStruct_JamChop.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JamChop.InnerSingleton, Z_Construct_UScriptStruct_FJamChop_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JamChop.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JamRecipeStep;
class UScriptStruct* FJamRecipeStep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JamRecipeStep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JamRecipeStep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJamRecipeStep, (UObject*)Z_Construct_UPackage__Script_FamJam(), TEXT("JamRecipeStep"));
	}
	return Z_Registration_Info_UScriptStruct_JamRecipeStep.OuterSingleton;
}
template<> FAMJAM_API UScriptStruct* StaticStruct<FJamRecipeStep>()
{
	return FJamRecipeStep::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJamRecipeStep_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Chops_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chops_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Chops;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeasureStart_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MeasureStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeasuresCount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MeasuresCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoop_MetaData[];
#endif
		static void NewProp_bIsLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopToMeasure_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LoopToMeasure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_volumeStart_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_volumeStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_volumeEnd_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_volumeEnd;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeStep_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJamRecipeStep>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_Chops_Inner = { "Chops", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FJamChop, METADATA_PARAMS(0, nullptr) }; // 2057991903
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_Chops_MetaData[] = {
		{ "Category", "JamRecipeStep" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_Chops = { "Chops", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamRecipeStep, Chops), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_Chops_MetaData), Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_Chops_MetaData) }; // 2057991903
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_MeasureStart_MetaData[] = {
		{ "Category", "JamRecipeStep" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_MeasureStart = { "MeasureStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamRecipeStep, MeasureStart), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_MeasureStart_MetaData), Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_MeasureStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_MeasuresCount_MetaData[] = {
		{ "Category", "JamRecipeStep" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_MeasuresCount = { "MeasuresCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamRecipeStep, MeasuresCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_MeasuresCount_MetaData), Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_MeasuresCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_bIsLoop_MetaData[] = {
		{ "Category", "JamRecipeStep" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_bIsLoop_SetBit(void* Obj)
	{
		((FJamRecipeStep*)Obj)->bIsLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_bIsLoop = { "bIsLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJamRecipeStep), &Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_bIsLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_bIsLoop_MetaData), Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_bIsLoop_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_LoopToMeasure_MetaData[] = {
		{ "Category", "JamRecipeStep" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_LoopToMeasure = { "LoopToMeasure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamRecipeStep, LoopToMeasure), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_LoopToMeasure_MetaData), Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_LoopToMeasure_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_volumeStart_MetaData[] = {
		{ "Category", "JamRecipeStep" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_volumeStart = { "volumeStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamRecipeStep, volumeStart), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_volumeStart_MetaData), Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_volumeStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_volumeEnd_MetaData[] = {
		{ "Category", "JamRecipeStep" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_volumeEnd = { "volumeEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamRecipeStep, volumeEnd), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_volumeEnd_MetaData), Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_volumeEnd_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "JamRecipeStep" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamRecipeStep, Key), Z_Construct_UEnum_FamJam_EJamKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_Key_MetaData) }; // 2649760022
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJamRecipeStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_Chops_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_Chops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_MeasureStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_MeasuresCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_bIsLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_LoopToMeasure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_volumeStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_volumeEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_Key_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewProp_Key,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJamRecipeStep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
		nullptr,
		&NewStructOps,
		"JamRecipeStep",
		Z_Construct_UScriptStruct_FJamRecipeStep_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeStep_Statics::PropPointers),
		sizeof(FJamRecipeStep),
		alignof(FJamRecipeStep),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeStep_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJamRecipeStep_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeStep_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FJamRecipeStep()
	{
		if (!Z_Registration_Info_UScriptStruct_JamRecipeStep.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JamRecipeStep.InnerSingleton, Z_Construct_UScriptStruct_FJamRecipeStep_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JamRecipeStep.InnerSingleton;
	}
	void UJamRecipe::StaticRegisterNativesUJamRecipe()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJamRecipe);
	UClass* Z_Construct_UClass_UJamRecipe_NoRegister()
	{
		return UJamRecipe::StaticClass();
	}
	struct Z_Construct_UClass_UJamRecipe_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Steps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Steps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Steps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJamRecipe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJamRecipe_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamRecipe_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "JamRecipe.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJamRecipe_Statics::NewProp_Steps_Inner = { "Steps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FJamRecipeStep, METADATA_PARAMS(0, nullptr) }; // 1222442403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamRecipe_Statics::NewProp_Steps_MetaData[] = {
		{ "Category", "JamRecipe" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UJamRecipe_Statics::NewProp_Steps = { "Steps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamRecipe, Steps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamRecipe_Statics::NewProp_Steps_MetaData), Z_Construct_UClass_UJamRecipe_Statics::NewProp_Steps_MetaData) }; // 1222442403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJamRecipe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamRecipe_Statics::NewProp_Steps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamRecipe_Statics::NewProp_Steps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJamRecipe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJamRecipe>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJamRecipe_Statics::ClassParams = {
		&UJamRecipe::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UJamRecipe_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UJamRecipe_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamRecipe_Statics::Class_MetaDataParams), Z_Construct_UClass_UJamRecipe_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJamRecipe_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UJamRecipe()
	{
		if (!Z_Registration_Info_UClass_UJamRecipe.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJamRecipe.OuterSingleton, Z_Construct_UClass_UJamRecipe_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJamRecipe.OuterSingleton;
	}
	template<> FAMJAM_API UClass* StaticClass<UJamRecipe>()
	{
		return UJamRecipe::StaticClass();
	}
	UJamRecipe::UJamRecipe(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJamRecipe);
	UJamRecipe::~UJamRecipe() {}
	struct Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipe_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipe_h_Statics::ScriptStructInfo[] = {
		{ FJamChop::StaticStruct, Z_Construct_UScriptStruct_FJamChop_Statics::NewStructOps, TEXT("JamChop"), &Z_Registration_Info_UScriptStruct_JamChop, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJamChop), 2057991903U) },
		{ FJamRecipeStep::StaticStruct, Z_Construct_UScriptStruct_FJamRecipeStep_Statics::NewStructOps, TEXT("JamRecipeStep"), &Z_Registration_Info_UScriptStruct_JamRecipeStep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJamRecipeStep), 1222442403U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipe_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJamRecipe, UJamRecipe::StaticClass, TEXT("UJamRecipe"), &Z_Registration_Info_UClass_UJamRecipe, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJamRecipe), 465581355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipe_h_782100392(TEXT("/Script/FamJam"),
		Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipe_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipe_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipe_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipe_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
