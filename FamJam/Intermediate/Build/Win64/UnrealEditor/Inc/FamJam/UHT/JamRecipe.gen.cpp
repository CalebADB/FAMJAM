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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	FAMJAM_API UClass* Z_Construct_UClass_AJamCookBoard_NoRegister();
	FAMJAM_API UClass* Z_Construct_UClass_UJamRecipe();
	FAMJAM_API UClass* Z_Construct_UClass_UJamRecipe_NoRegister();
	FAMJAM_API UEnum* Z_Construct_UEnum_FamJam_EJamKey();
	FAMJAM_API UEnum* Z_Construct_UEnum_FamJam_EJamVolumeTransitionType();
	FAMJAM_API UScriptStruct* Z_Construct_UScriptStruct_FJamChop();
	FAMJAM_API UScriptStruct* Z_Construct_UScriptStruct_FJamChopSpecialActionParams();
	FAMJAM_API UScriptStruct* Z_Construct_UScriptStruct_FJamMince();
	FAMJAM_API UScriptStruct* Z_Construct_UScriptStruct_FJamMinceSpecialActionParams();
	FAMJAM_API UScriptStruct* Z_Construct_UScriptStruct_FJamRecipeCookOverview();
	FAMJAM_API UScriptStruct* Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams();
	FAMJAM_API UScriptStruct* Z_Construct_UScriptStruct_FJamRecipeOverview();
	FAMJAM_API UScriptStruct* Z_Construct_UScriptStruct_FJamStep();
	FAMJAM_API UScriptStruct* Z_Construct_UScriptStruct_FJamStepSpecialActionParams();
	UPackage* Z_Construct_UPackage__Script_FamJam();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EJamVolumeTransitionType;
	static UEnum* EJamVolumeTransitionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EJamVolumeTransitionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EJamVolumeTransitionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FamJam_EJamVolumeTransitionType, (UObject*)Z_Construct_UPackage__Script_FamJam(), TEXT("EJamVolumeTransitionType"));
		}
		return Z_Registration_Info_UEnum_EJamVolumeTransitionType.OuterSingleton;
	}
	template<> FAMJAM_API UEnum* StaticEnum<EJamVolumeTransitionType>()
	{
		return EJamVolumeTransitionType_StaticEnum();
	}
	struct Z_Construct_UEnum_FamJam_EJamVolumeTransitionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FamJam_EJamVolumeTransitionType_Statics::Enumerators[] = {
		{ "EJamVolumeTransitionType::Linear", (int64)EJamVolumeTransitionType::Linear },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FamJam_EJamVolumeTransitionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Linear.Name", "EJamVolumeTransitionType::Linear" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FamJam_EJamVolumeTransitionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FamJam,
		nullptr,
		"EJamVolumeTransitionType",
		"EJamVolumeTransitionType",
		Z_Construct_UEnum_FamJam_EJamVolumeTransitionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FamJam_EJamVolumeTransitionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FamJam_EJamVolumeTransitionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FamJam_EJamVolumeTransitionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FamJam_EJamVolumeTransitionType()
	{
		if (!Z_Registration_Info_UEnum_EJamVolumeTransitionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EJamVolumeTransitionType.InnerSingleton, Z_Construct_UEnum_FamJam_EJamVolumeTransitionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EJamVolumeTransitionType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JamChopSpecialActionParams;
class UScriptStruct* FJamChopSpecialActionParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JamChopSpecialActionParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JamChopSpecialActionParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJamChopSpecialActionParams, (UObject*)Z_Construct_UPackage__Script_FamJam(), TEXT("JamChopSpecialActionParams"));
	}
	return Z_Registration_Info_UScriptStruct_JamChopSpecialActionParams.OuterSingleton;
}
template<> FAMJAM_API UScriptStruct* StaticStruct<FJamChopSpecialActionParams>()
{
	return FJamChopSpecialActionParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInteractive_MetaData[];
#endif
		static void NewProp_bIsInteractive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInteractive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractiveInputKey_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InteractiveInputKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVolumeRatioChange_MetaData[];
#endif
		static void NewProp_bIsVolumeRatioChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVolumeRatioChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeRatioTarget_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VolumeRatioTarget;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VolumeTransitionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeTransitionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VolumeTransitionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJamChopSpecialActionParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_bIsInteractive_MetaData[] = {
		{ "Category", "JamChopSpecialActionParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_bIsInteractive_SetBit(void* Obj)
	{
		((FJamChopSpecialActionParams*)Obj)->bIsInteractive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_bIsInteractive = { "bIsInteractive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJamChopSpecialActionParams), &Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_bIsInteractive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_bIsInteractive_MetaData), Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_bIsInteractive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_InteractiveInputKey_MetaData[] = {
		{ "Category", "JamChopSpecialActionParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_InteractiveInputKey = { "InteractiveInputKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChopSpecialActionParams, InteractiveInputKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_InteractiveInputKey_MetaData), Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_InteractiveInputKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_bIsVolumeRatioChange_MetaData[] = {
		{ "Category", "JamChopSpecialActionParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_bIsVolumeRatioChange_SetBit(void* Obj)
	{
		((FJamChopSpecialActionParams*)Obj)->bIsVolumeRatioChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_bIsVolumeRatioChange = { "bIsVolumeRatioChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJamChopSpecialActionParams), &Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_bIsVolumeRatioChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_bIsVolumeRatioChange_MetaData), Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_bIsVolumeRatioChange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_VolumeRatioTarget_MetaData[] = {
		{ "Category", "JamChopSpecialActionParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_VolumeRatioTarget = { "VolumeRatioTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChopSpecialActionParams, VolumeRatioTarget), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_VolumeRatioTarget_MetaData), Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_VolumeRatioTarget_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_VolumeTransitionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_VolumeTransitionType_MetaData[] = {
		{ "Category", "JamChopSpecialActionParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_VolumeTransitionType = { "VolumeTransitionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChopSpecialActionParams, VolumeTransitionType), Z_Construct_UEnum_FamJam_EJamVolumeTransitionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_VolumeTransitionType_MetaData), Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_VolumeTransitionType_MetaData) }; // 19808938
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_bIsInteractive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_InteractiveInputKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_bIsVolumeRatioChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_VolumeRatioTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_VolumeTransitionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewProp_VolumeTransitionType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
		nullptr,
		&NewStructOps,
		"JamChopSpecialActionParams",
		Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::PropPointers),
		sizeof(FJamChopSpecialActionParams),
		alignof(FJamChopSpecialActionParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FJamChopSpecialActionParams()
	{
		if (!Z_Registration_Info_UScriptStruct_JamChopSpecialActionParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JamChopSpecialActionParams.InnerSingleton, Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JamChopSpecialActionParams.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChunkName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CookName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriggerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookLayerIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CookLayerIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeasureStart_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MeasureStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeasureCount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MeasureCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpecialActionKeyToParamsMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpecialActionKeyToParamsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecialActionKeyToParamsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SpecialActionKeyToParamsMap;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_ChunkName_MetaData[] = {
		{ "Category", "JamChop" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_ChunkName = { "ChunkName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChop, ChunkName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_ChunkName_MetaData), Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_ChunkName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_CookName_MetaData[] = {
		{ "Category", "JamChop" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_CookName = { "CookName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChop, CookName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_CookName_MetaData), Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_CookName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_TriggerId_MetaData[] = {
		{ "Category", "JamChop" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_TriggerId = { "TriggerId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChop, TriggerId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_TriggerId_MetaData), Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_TriggerId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_CookLayerIdx_MetaData[] = {
		{ "Category", "JamChop" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_CookLayerIdx = { "CookLayerIdx", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChop, CookLayerIdx), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_CookLayerIdx_MetaData), Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_CookLayerIdx_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_MeasureStart_MetaData[] = {
		{ "Category", "JamChop" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_MeasureStart = { "MeasureStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChop, MeasureStart), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_MeasureStart_MetaData), Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_MeasureStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_MeasureCount_MetaData[] = {
		{ "Category", "JamChop" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_MeasureCount = { "MeasureCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChop, MeasureCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_MeasureCount_MetaData), Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_MeasureCount_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "JamChop" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChop, Key), Z_Construct_UEnum_FamJam_EJamKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_Key_MetaData) }; // 2996348813
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_SpecialActionKeyToParamsMap_ValueProp = { "SpecialActionKeyToParamsMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FJamChopSpecialActionParams, METADATA_PARAMS(0, nullptr) }; // 3057211773
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_SpecialActionKeyToParamsMap_Key_KeyProp = { "SpecialActionKeyToParamsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_SpecialActionKeyToParamsMap_MetaData[] = {
		{ "Category", "JamChop" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_SpecialActionKeyToParamsMap = { "SpecialActionKeyToParamsMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChop, SpecialActionKeyToParamsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_SpecialActionKeyToParamsMap_MetaData), Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_SpecialActionKeyToParamsMap_MetaData) }; // 3057211773
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJamChop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_ChunkName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_CookName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_TriggerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_CookLayerIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_MeasureStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_MeasureCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_Key_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_SpecialActionKeyToParamsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_SpecialActionKeyToParamsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChop_Statics::NewProp_SpecialActionKeyToParamsMap,
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
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JamMinceSpecialActionParams;
class UScriptStruct* FJamMinceSpecialActionParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JamMinceSpecialActionParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JamMinceSpecialActionParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJamMinceSpecialActionParams, (UObject*)Z_Construct_UPackage__Script_FamJam(), TEXT("JamMinceSpecialActionParams"));
	}
	return Z_Registration_Info_UScriptStruct_JamMinceSpecialActionParams.OuterSingleton;
}
template<> FAMJAM_API UScriptStruct* StaticStruct<FJamMinceSpecialActionParams>()
{
	return FJamMinceSpecialActionParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInteractive_MetaData[];
#endif
		static void NewProp_bIsInteractive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInteractive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractiveInputKey_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InteractiveInputKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVolumeRatioChange_MetaData[];
#endif
		static void NewProp_bIsVolumeRatioChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVolumeRatioChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeRatioTarget_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VolumeRatioTarget;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VolumeTransitionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeTransitionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VolumeTransitionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJamMinceSpecialActionParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_bIsInteractive_MetaData[] = {
		{ "Category", "JamMinceSpecialActionParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_bIsInteractive_SetBit(void* Obj)
	{
		((FJamMinceSpecialActionParams*)Obj)->bIsInteractive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_bIsInteractive = { "bIsInteractive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJamMinceSpecialActionParams), &Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_bIsInteractive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_bIsInteractive_MetaData), Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_bIsInteractive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_InteractiveInputKey_MetaData[] = {
		{ "Category", "JamMinceSpecialActionParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_InteractiveInputKey = { "InteractiveInputKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamMinceSpecialActionParams, InteractiveInputKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_InteractiveInputKey_MetaData), Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_InteractiveInputKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_bIsVolumeRatioChange_MetaData[] = {
		{ "Category", "JamMinceSpecialActionParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_bIsVolumeRatioChange_SetBit(void* Obj)
	{
		((FJamMinceSpecialActionParams*)Obj)->bIsVolumeRatioChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_bIsVolumeRatioChange = { "bIsVolumeRatioChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJamMinceSpecialActionParams), &Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_bIsVolumeRatioChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_bIsVolumeRatioChange_MetaData), Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_bIsVolumeRatioChange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_VolumeRatioTarget_MetaData[] = {
		{ "Category", "JamMinceSpecialActionParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_VolumeRatioTarget = { "VolumeRatioTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamMinceSpecialActionParams, VolumeRatioTarget), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_VolumeRatioTarget_MetaData), Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_VolumeRatioTarget_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_VolumeTransitionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_VolumeTransitionType_MetaData[] = {
		{ "Category", "JamMinceSpecialActionParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_VolumeTransitionType = { "VolumeTransitionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamMinceSpecialActionParams, VolumeTransitionType), Z_Construct_UEnum_FamJam_EJamVolumeTransitionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_VolumeTransitionType_MetaData), Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_VolumeTransitionType_MetaData) }; // 19808938
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_bIsInteractive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_InteractiveInputKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_bIsVolumeRatioChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_VolumeRatioTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_VolumeTransitionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewProp_VolumeTransitionType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
		nullptr,
		&NewStructOps,
		"JamMinceSpecialActionParams",
		Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::PropPointers),
		sizeof(FJamMinceSpecialActionParams),
		alignof(FJamMinceSpecialActionParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FJamMinceSpecialActionParams()
	{
		if (!Z_Registration_Info_UScriptStruct_JamMinceSpecialActionParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JamMinceSpecialActionParams.InnerSingleton, Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JamMinceSpecialActionParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JamMince;
class UScriptStruct* FJamMince::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JamMince.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JamMince.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJamMince, (UObject*)Z_Construct_UPackage__Script_FamJam(), TEXT("JamMince"));
	}
	return Z_Registration_Info_UScriptStruct_JamMince.OuterSingleton;
}
template<> FAMJAM_API UScriptStruct* StaticStruct<FJamMince>()
{
	return FJamMince::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJamMince_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChunkName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CookName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpecialActionKeyToParamsMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpecialActionKeyToParamsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecialActionKeyToParamsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SpecialActionKeyToParamsMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamMince_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJamMince_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJamMince>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamMince_Statics::NewProp_ChunkName_MetaData[] = {
		{ "Category", "JamMince" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJamMince_Statics::NewProp_ChunkName = { "ChunkName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamMince, ChunkName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamMince_Statics::NewProp_ChunkName_MetaData), Z_Construct_UScriptStruct_FJamMince_Statics::NewProp_ChunkName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamMince_Statics::NewProp_CookName_MetaData[] = {
		{ "Category", "JamMince" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJamMince_Statics::NewProp_CookName = { "CookName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamMince, CookName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamMince_Statics::NewProp_CookName_MetaData), Z_Construct_UScriptStruct_FJamMince_Statics::NewProp_CookName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJamMince_Statics::NewProp_SpecialActionKeyToParamsMap_ValueProp = { "SpecialActionKeyToParamsMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FJamMinceSpecialActionParams, METADATA_PARAMS(0, nullptr) }; // 3072376338
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJamMince_Statics::NewProp_SpecialActionKeyToParamsMap_Key_KeyProp = { "SpecialActionKeyToParamsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamMince_Statics::NewProp_SpecialActionKeyToParamsMap_MetaData[] = {
		{ "Category", "JamMince" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FJamMince_Statics::NewProp_SpecialActionKeyToParamsMap = { "SpecialActionKeyToParamsMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamMince, SpecialActionKeyToParamsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamMince_Statics::NewProp_SpecialActionKeyToParamsMap_MetaData), Z_Construct_UScriptStruct_FJamMince_Statics::NewProp_SpecialActionKeyToParamsMap_MetaData) }; // 3072376338
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJamMince_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamMince_Statics::NewProp_ChunkName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamMince_Statics::NewProp_CookName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamMince_Statics::NewProp_SpecialActionKeyToParamsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamMince_Statics::NewProp_SpecialActionKeyToParamsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamMince_Statics::NewProp_SpecialActionKeyToParamsMap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJamMince_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
		nullptr,
		&NewStructOps,
		"JamMince",
		Z_Construct_UScriptStruct_FJamMince_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamMince_Statics::PropPointers),
		sizeof(FJamMince),
		alignof(FJamMince),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamMince_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJamMince_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamMince_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FJamMince()
	{
		if (!Z_Registration_Info_UScriptStruct_JamMince.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JamMince.InnerSingleton, Z_Construct_UScriptStruct_FJamMince_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JamMince.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JamStepSpecialActionParams;
class UScriptStruct* FJamStepSpecialActionParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JamStepSpecialActionParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JamStepSpecialActionParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJamStepSpecialActionParams, (UObject*)Z_Construct_UPackage__Script_FamJam(), TEXT("JamStepSpecialActionParams"));
	}
	return Z_Registration_Info_UScriptStruct_JamStepSpecialActionParams.OuterSingleton;
}
template<> FAMJAM_API UScriptStruct* StaticStruct<FJamStepSpecialActionParams>()
{
	return FJamStepSpecialActionParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsJump_MetaData[];
#endif
		static void NewProp_bIsJump_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsJump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpTargetMeasure_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_JumpTargetMeasure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBPMChange_MetaData[];
#endif
		static void NewProp_bIsBPMChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBPMChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPMTarget_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BPMTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVolumeRatioChange_MetaData[];
#endif
		static void NewProp_bIsVolumeRatioChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVolumeRatioChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeRatioTarget_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VolumeRatioTarget;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VolumeTransitionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeTransitionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VolumeTransitionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJamStepSpecialActionParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_bIsJump_MetaData[] = {
		{ "Category", "JamStepSpecialActionParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_bIsJump_SetBit(void* Obj)
	{
		((FJamStepSpecialActionParams*)Obj)->bIsJump = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_bIsJump = { "bIsJump", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJamStepSpecialActionParams), &Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_bIsJump_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_bIsJump_MetaData), Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_bIsJump_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_JumpTargetMeasure_MetaData[] = {
		{ "Category", "JamStepSpecialActionParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_JumpTargetMeasure = { "JumpTargetMeasure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamStepSpecialActionParams, JumpTargetMeasure), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_JumpTargetMeasure_MetaData), Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_JumpTargetMeasure_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_bIsBPMChange_MetaData[] = {
		{ "Category", "JamStepSpecialActionParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_bIsBPMChange_SetBit(void* Obj)
	{
		((FJamStepSpecialActionParams*)Obj)->bIsBPMChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_bIsBPMChange = { "bIsBPMChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJamStepSpecialActionParams), &Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_bIsBPMChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_bIsBPMChange_MetaData), Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_bIsBPMChange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_BPMTarget_MetaData[] = {
		{ "Category", "JamStepSpecialActionParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_BPMTarget = { "BPMTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamStepSpecialActionParams, BPMTarget), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_BPMTarget_MetaData), Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_BPMTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_bIsVolumeRatioChange_MetaData[] = {
		{ "Category", "JamStepSpecialActionParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_bIsVolumeRatioChange_SetBit(void* Obj)
	{
		((FJamStepSpecialActionParams*)Obj)->bIsVolumeRatioChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_bIsVolumeRatioChange = { "bIsVolumeRatioChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJamStepSpecialActionParams), &Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_bIsVolumeRatioChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_bIsVolumeRatioChange_MetaData), Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_bIsVolumeRatioChange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_VolumeRatioTarget_MetaData[] = {
		{ "Category", "JamStepSpecialActionParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_VolumeRatioTarget = { "VolumeRatioTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamStepSpecialActionParams, VolumeRatioTarget), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_VolumeRatioTarget_MetaData), Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_VolumeRatioTarget_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_VolumeTransitionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_VolumeTransitionType_MetaData[] = {
		{ "Category", "JamStepSpecialActionParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_VolumeTransitionType = { "VolumeTransitionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamStepSpecialActionParams, VolumeTransitionType), Z_Construct_UEnum_FamJam_EJamVolumeTransitionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_VolumeTransitionType_MetaData), Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_VolumeTransitionType_MetaData) }; // 19808938
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_bIsJump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_JumpTargetMeasure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_bIsBPMChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_BPMTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_bIsVolumeRatioChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_VolumeRatioTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_VolumeTransitionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewProp_VolumeTransitionType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
		nullptr,
		&NewStructOps,
		"JamStepSpecialActionParams",
		Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::PropPointers),
		sizeof(FJamStepSpecialActionParams),
		alignof(FJamStepSpecialActionParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FJamStepSpecialActionParams()
	{
		if (!Z_Registration_Info_UScriptStruct_JamStepSpecialActionParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JamStepSpecialActionParams.InnerSingleton, Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JamStepSpecialActionParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JamStep;
class UScriptStruct* FJamStep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JamStep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JamStep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJamStep, (UObject*)Z_Construct_UPackage__Script_FamJam(), TEXT("JamStep"));
	}
	return Z_Registration_Info_UScriptStruct_JamStep.OuterSingleton;
}
template<> FAMJAM_API UScriptStruct* StaticStruct<FJamStep>()
{
	return FJamStep::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJamStep_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeasuresCount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MeasuresCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpecialActionKeyToParamsMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpecialActionKeyToParamsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecialActionKeyToParamsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SpecialActionKeyToParamsMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Chops_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chops_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Chops;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Minces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Minces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamStep_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJamStep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJamStep>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_MeasuresCount_MetaData[] = {
		{ "Category", "JamStep" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_MeasuresCount = { "MeasuresCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamStep, MeasuresCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_MeasuresCount_MetaData), Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_MeasuresCount_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "JamStep" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamStep, Key), Z_Construct_UEnum_FamJam_EJamKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_Key_MetaData) }; // 2996348813
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_SpecialActionKeyToParamsMap_ValueProp = { "SpecialActionKeyToParamsMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FJamStepSpecialActionParams, METADATA_PARAMS(0, nullptr) }; // 4191627935
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_SpecialActionKeyToParamsMap_Key_KeyProp = { "SpecialActionKeyToParamsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_SpecialActionKeyToParamsMap_MetaData[] = {
		{ "Category", "JamStep" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_SpecialActionKeyToParamsMap = { "SpecialActionKeyToParamsMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamStep, SpecialActionKeyToParamsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_SpecialActionKeyToParamsMap_MetaData), Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_SpecialActionKeyToParamsMap_MetaData) }; // 4191627935
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_Chops_Inner = { "Chops", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FJamChop, METADATA_PARAMS(0, nullptr) }; // 3958894928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_Chops_MetaData[] = {
		{ "Category", "JamStep" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_Chops = { "Chops", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamStep, Chops), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_Chops_MetaData), Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_Chops_MetaData) }; // 3958894928
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_Minces_Inner = { "Minces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FJamMince, METADATA_PARAMS(0, nullptr) }; // 1499527420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_Minces_MetaData[] = {
		{ "Category", "JamStep" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_Minces = { "Minces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamStep, Minces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_Minces_MetaData), Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_Minces_MetaData) }; // 1499527420
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJamStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_MeasuresCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_Key_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_SpecialActionKeyToParamsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_SpecialActionKeyToParamsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_SpecialActionKeyToParamsMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_Chops_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_Chops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_Minces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamStep_Statics::NewProp_Minces,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJamStep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
		nullptr,
		&NewStructOps,
		"JamStep",
		Z_Construct_UScriptStruct_FJamStep_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamStep_Statics::PropPointers),
		sizeof(FJamStep),
		alignof(FJamStep),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamStep_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJamStep_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamStep_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FJamStep()
	{
		if (!Z_Registration_Info_UScriptStruct_JamStep.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JamStep.InnerSingleton, Z_Construct_UScriptStruct_FJamStep_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JamStep.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JamRecipeCookOverviewParams;
class UScriptStruct* FJamRecipeCookOverviewParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JamRecipeCookOverviewParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JamRecipeCookOverviewParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams, (UObject*)Z_Construct_UPackage__Script_FamJam(), TEXT("JamRecipeCookOverviewParams"));
	}
	return Z_Registration_Info_UScriptStruct_JamRecipeCookOverviewParams.OuterSingleton;
}
template<> FAMJAM_API UScriptStruct* StaticStruct<FJamRecipeCookOverviewParams>()
{
	return FJamRecipeCookOverviewParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBoard_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultBoard;
		static const UECodeGen_Private::FClassPropertyParams NewProp_LayerToCustomBoard_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LayerToCustomBoard_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerToCustomBoard_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LayerToCustomBoard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CookColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChopColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChopColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinceColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinceColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJamRecipeCookOverviewParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_DefaultBoard_MetaData[] = {
		{ "Category", "JamRecipeCookOverviewParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_DefaultBoard = { "DefaultBoard", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamRecipeCookOverviewParams, DefaultBoard), Z_Construct_UClass_UClass, Z_Construct_UClass_AJamCookBoard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_DefaultBoard_MetaData), Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_DefaultBoard_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_LayerToCustomBoard_ValueProp = { "LayerToCustomBoard", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_AJamCookBoard_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_LayerToCustomBoard_Key_KeyProp = { "LayerToCustomBoard_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_LayerToCustomBoard_MetaData[] = {
		{ "Category", "JamRecipeCookOverviewParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_LayerToCustomBoard = { "LayerToCustomBoard", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamRecipeCookOverviewParams, LayerToCustomBoard), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_LayerToCustomBoard_MetaData), Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_LayerToCustomBoard_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_CookColor_MetaData[] = {
		{ "Category", "JamRecipeCookOverviewParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_CookColor = { "CookColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamRecipeCookOverviewParams, CookColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_CookColor_MetaData), Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_CookColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_ChopColor_MetaData[] = {
		{ "Category", "JamRecipeCookOverviewParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_ChopColor = { "ChopColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamRecipeCookOverviewParams, ChopColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_ChopColor_MetaData), Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_ChopColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_MinceColor_MetaData[] = {
		{ "Category", "JamRecipeCookOverviewParams" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_MinceColor = { "MinceColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamRecipeCookOverviewParams, MinceColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_MinceColor_MetaData), Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_MinceColor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_DefaultBoard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_LayerToCustomBoard_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_LayerToCustomBoard_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_LayerToCustomBoard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_CookColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_ChopColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewProp_MinceColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
		nullptr,
		&NewStructOps,
		"JamRecipeCookOverviewParams",
		Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::PropPointers),
		sizeof(FJamRecipeCookOverviewParams),
		alignof(FJamRecipeCookOverviewParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams()
	{
		if (!Z_Registration_Info_UScriptStruct_JamRecipeCookOverviewParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JamRecipeCookOverviewParams.InnerSingleton, Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JamRecipeCookOverviewParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JamRecipeCookOverview;
class UScriptStruct* FJamRecipeCookOverview::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JamRecipeCookOverview.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JamRecipeCookOverview.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJamRecipeCookOverview, (UObject*)Z_Construct_UPackage__Script_FamJam(), TEXT("JamRecipeCookOverview"));
	}
	return Z_Registration_Info_UScriptStruct_JamRecipeCookOverview.OuterSingleton;
}
template<> FAMJAM_API UScriptStruct* StaticStruct<FJamRecipeCookOverview>()
{
	return FJamRecipeCookOverview::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FClassPropertyParams NewProp_BoardClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoardClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoardClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CookColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChopColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChopColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinceColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinceColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJamRecipeCookOverview>();
	}
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_BoardClasses_Inner = { "BoardClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AJamCookBoard_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_BoardClasses_MetaData[] = {
		{ "Category", "JamRecipeCookOverview" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_BoardClasses = { "BoardClasses", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamRecipeCookOverview, BoardClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_BoardClasses_MetaData), Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_BoardClasses_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_CookColor_MetaData[] = {
		{ "Category", "JamRecipeCookOverview" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_CookColor = { "CookColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamRecipeCookOverview, CookColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_CookColor_MetaData), Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_CookColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_ChopColor_MetaData[] = {
		{ "Category", "JamRecipeCookOverview" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_ChopColor = { "ChopColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamRecipeCookOverview, ChopColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_ChopColor_MetaData), Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_ChopColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_MinceColor_MetaData[] = {
		{ "Category", "JamRecipeCookOverview" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_MinceColor = { "MinceColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamRecipeCookOverview, MinceColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_MinceColor_MetaData), Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_MinceColor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_BoardClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_BoardClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_CookColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_ChopColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewProp_MinceColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
		nullptr,
		&NewStructOps,
		"JamRecipeCookOverview",
		Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::PropPointers),
		sizeof(FJamRecipeCookOverview),
		alignof(FJamRecipeCookOverview),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FJamRecipeCookOverview()
	{
		if (!Z_Registration_Info_UScriptStruct_JamRecipeCookOverview.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JamRecipeCookOverview.InnerSingleton, Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JamRecipeCookOverview.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JamRecipeOverview;
class UScriptStruct* FJamRecipeOverview::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JamRecipeOverview.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JamRecipeOverview.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJamRecipeOverview, (UObject*)Z_Construct_UPackage__Script_FamJam(), TEXT("JamRecipeOverview"));
	}
	return Z_Registration_Info_UScriptStruct_JamRecipeOverview.OuterSingleton;
}
template<> FAMJAM_API UScriptStruct* StaticStruct<FJamRecipeOverview>()
{
	return FJamRecipeOverview::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJamRecipeOverview_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastMeasure_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastMeasure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeRatioMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeRatioMax;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CookNameToOverviewMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CookNameToOverviewMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookNameToOverviewMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CookNameToOverviewMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJamRecipeOverview>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::NewProp_LastMeasure_MetaData[] = {
		{ "Category", "JamRecipeOverview" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::NewProp_LastMeasure = { "LastMeasure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamRecipeOverview, LastMeasure), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::NewProp_LastMeasure_MetaData), Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::NewProp_LastMeasure_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::NewProp_VolumeRatioMax_MetaData[] = {
		{ "Category", "JamRecipeOverview" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::NewProp_VolumeRatioMax = { "VolumeRatioMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamRecipeOverview, VolumeRatioMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::NewProp_VolumeRatioMax_MetaData), Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::NewProp_VolumeRatioMax_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::NewProp_CookNameToOverviewMap_ValueProp = { "CookNameToOverviewMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FJamRecipeCookOverview, METADATA_PARAMS(0, nullptr) }; // 3687189747
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::NewProp_CookNameToOverviewMap_Key_KeyProp = { "CookNameToOverviewMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::NewProp_CookNameToOverviewMap_MetaData[] = {
		{ "Category", "JamRecipeOverview" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::NewProp_CookNameToOverviewMap = { "CookNameToOverviewMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamRecipeOverview, CookNameToOverviewMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::NewProp_CookNameToOverviewMap_MetaData), Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::NewProp_CookNameToOverviewMap_MetaData) }; // 3687189747
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::NewProp_LastMeasure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::NewProp_VolumeRatioMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::NewProp_CookNameToOverviewMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::NewProp_CookNameToOverviewMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::NewProp_CookNameToOverviewMap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
		nullptr,
		&NewStructOps,
		"JamRecipeOverview",
		Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::PropPointers),
		sizeof(FJamRecipeOverview),
		alignof(FJamRecipeOverview),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FJamRecipeOverview()
	{
		if (!Z_Registration_Info_UScriptStruct_JamRecipeOverview.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JamRecipeOverview.InnerSingleton, Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JamRecipeOverview.InnerSingleton;
	}
	DEFINE_FUNCTION(UJamRecipe::execGetOverview)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJamRecipeOverview*)Z_Param__Result=P_THIS->GetOverview();
		P_NATIVE_END;
	}
	void UJamRecipe::StaticRegisterNativesUJamRecipe()
	{
		UClass* Class = UJamRecipe::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOverview", &UJamRecipe::execGetOverview },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJamRecipe_GetOverview_Statics
	{
		struct JamRecipe_eventGetOverview_Parms
		{
			FJamRecipeOverview ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJamRecipe_GetOverview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JamRecipe_eventGetOverview_Parms, ReturnValue), Z_Construct_UScriptStruct_FJamRecipeOverview, METADATA_PARAMS(0, nullptr) }; // 1106486247
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJamRecipe_GetOverview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJamRecipe_GetOverview_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJamRecipe_GetOverview_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJamRecipe_GetOverview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJamRecipe, nullptr, "GetOverview", nullptr, nullptr, Z_Construct_UFunction_UJamRecipe_GetOverview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJamRecipe_GetOverview_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJamRecipe_GetOverview_Statics::JamRecipe_eventGetOverview_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJamRecipe_GetOverview_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJamRecipe_GetOverview_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJamRecipe_GetOverview_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UJamRecipe_GetOverview_Statics::JamRecipe_eventGetOverview_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UJamRecipe_GetOverview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJamRecipe_GetOverview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJamRecipe);
	UClass* Z_Construct_UClass_UJamRecipe_NoRegister()
	{
		return UJamRecipe::StaticClass();
	}
	struct Z_Construct_UClass_UJamRecipe_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeDecibelCenter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeDecibelCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeRatioStart_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeRatioStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TempoStart_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TempoStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSignature_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimeSignature;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CookNameToOverviewParamsMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CookNameToOverviewParamsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookNameToOverviewParamsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CookNameToOverviewParamsMap;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UJamRecipe_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJamRecipe_GetOverview, "GetOverview" }, // 1430890461
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJamRecipe_Statics::FuncInfo) < 2048);
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamRecipe_Statics::NewProp_VolumeDecibelCenter_MetaData[] = {
		{ "Category", "JamRecipe" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJamRecipe_Statics::NewProp_VolumeDecibelCenter = { "VolumeDecibelCenter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamRecipe, VolumeDecibelCenter), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamRecipe_Statics::NewProp_VolumeDecibelCenter_MetaData), Z_Construct_UClass_UJamRecipe_Statics::NewProp_VolumeDecibelCenter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamRecipe_Statics::NewProp_VolumeRatioStart_MetaData[] = {
		{ "Category", "JamRecipe" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJamRecipe_Statics::NewProp_VolumeRatioStart = { "VolumeRatioStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamRecipe, VolumeRatioStart), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamRecipe_Statics::NewProp_VolumeRatioStart_MetaData), Z_Construct_UClass_UJamRecipe_Statics::NewProp_VolumeRatioStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamRecipe_Statics::NewProp_TempoStart_MetaData[] = {
		{ "Category", "JamRecipe" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJamRecipe_Statics::NewProp_TempoStart = { "TempoStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamRecipe, TempoStart), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamRecipe_Statics::NewProp_TempoStart_MetaData), Z_Construct_UClass_UJamRecipe_Statics::NewProp_TempoStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamRecipe_Statics::NewProp_TimeSignature_MetaData[] = {
		{ "Category", "JamRecipe" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJamRecipe_Statics::NewProp_TimeSignature = { "TimeSignature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamRecipe, TimeSignature), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamRecipe_Statics::NewProp_TimeSignature_MetaData), Z_Construct_UClass_UJamRecipe_Statics::NewProp_TimeSignature_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJamRecipe_Statics::NewProp_CookNameToOverviewParamsMap_ValueProp = { "CookNameToOverviewParamsMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams, METADATA_PARAMS(0, nullptr) }; // 904702186
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UJamRecipe_Statics::NewProp_CookNameToOverviewParamsMap_Key_KeyProp = { "CookNameToOverviewParamsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamRecipe_Statics::NewProp_CookNameToOverviewParamsMap_MetaData[] = {
		{ "Category", "JamRecipe" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UJamRecipe_Statics::NewProp_CookNameToOverviewParamsMap = { "CookNameToOverviewParamsMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamRecipe, CookNameToOverviewParamsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamRecipe_Statics::NewProp_CookNameToOverviewParamsMap_MetaData), Z_Construct_UClass_UJamRecipe_Statics::NewProp_CookNameToOverviewParamsMap_MetaData) }; // 904702186
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJamRecipe_Statics::NewProp_Steps_Inner = { "Steps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FJamStep, METADATA_PARAMS(0, nullptr) }; // 1753942080
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamRecipe_Statics::NewProp_Steps_MetaData[] = {
		{ "Category", "JamRecipe" },
		{ "ModuleRelativePath", "JamRecipe.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UJamRecipe_Statics::NewProp_Steps = { "Steps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamRecipe, Steps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamRecipe_Statics::NewProp_Steps_MetaData), Z_Construct_UClass_UJamRecipe_Statics::NewProp_Steps_MetaData) }; // 1753942080
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJamRecipe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamRecipe_Statics::NewProp_VolumeDecibelCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamRecipe_Statics::NewProp_VolumeRatioStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamRecipe_Statics::NewProp_TempoStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamRecipe_Statics::NewProp_TimeSignature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamRecipe_Statics::NewProp_CookNameToOverviewParamsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamRecipe_Statics::NewProp_CookNameToOverviewParamsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamRecipe_Statics::NewProp_CookNameToOverviewParamsMap,
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
		FuncInfo,
		Z_Construct_UClass_UJamRecipe_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipe_h_Statics::EnumInfo[] = {
		{ EJamVolumeTransitionType_StaticEnum, TEXT("EJamVolumeTransitionType"), &Z_Registration_Info_UEnum_EJamVolumeTransitionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 19808938U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipe_h_Statics::ScriptStructInfo[] = {
		{ FJamChopSpecialActionParams::StaticStruct, Z_Construct_UScriptStruct_FJamChopSpecialActionParams_Statics::NewStructOps, TEXT("JamChopSpecialActionParams"), &Z_Registration_Info_UScriptStruct_JamChopSpecialActionParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJamChopSpecialActionParams), 3057211773U) },
		{ FJamChop::StaticStruct, Z_Construct_UScriptStruct_FJamChop_Statics::NewStructOps, TEXT("JamChop"), &Z_Registration_Info_UScriptStruct_JamChop, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJamChop), 3958894928U) },
		{ FJamMinceSpecialActionParams::StaticStruct, Z_Construct_UScriptStruct_FJamMinceSpecialActionParams_Statics::NewStructOps, TEXT("JamMinceSpecialActionParams"), &Z_Registration_Info_UScriptStruct_JamMinceSpecialActionParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJamMinceSpecialActionParams), 3072376338U) },
		{ FJamMince::StaticStruct, Z_Construct_UScriptStruct_FJamMince_Statics::NewStructOps, TEXT("JamMince"), &Z_Registration_Info_UScriptStruct_JamMince, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJamMince), 1499527420U) },
		{ FJamStepSpecialActionParams::StaticStruct, Z_Construct_UScriptStruct_FJamStepSpecialActionParams_Statics::NewStructOps, TEXT("JamStepSpecialActionParams"), &Z_Registration_Info_UScriptStruct_JamStepSpecialActionParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJamStepSpecialActionParams), 4191627935U) },
		{ FJamStep::StaticStruct, Z_Construct_UScriptStruct_FJamStep_Statics::NewStructOps, TEXT("JamStep"), &Z_Registration_Info_UScriptStruct_JamStep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJamStep), 1753942080U) },
		{ FJamRecipeCookOverviewParams::StaticStruct, Z_Construct_UScriptStruct_FJamRecipeCookOverviewParams_Statics::NewStructOps, TEXT("JamRecipeCookOverviewParams"), &Z_Registration_Info_UScriptStruct_JamRecipeCookOverviewParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJamRecipeCookOverviewParams), 904702186U) },
		{ FJamRecipeCookOverview::StaticStruct, Z_Construct_UScriptStruct_FJamRecipeCookOverview_Statics::NewStructOps, TEXT("JamRecipeCookOverview"), &Z_Registration_Info_UScriptStruct_JamRecipeCookOverview, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJamRecipeCookOverview), 3687189747U) },
		{ FJamRecipeOverview::StaticStruct, Z_Construct_UScriptStruct_FJamRecipeOverview_Statics::NewStructOps, TEXT("JamRecipeOverview"), &Z_Registration_Info_UScriptStruct_JamRecipeOverview, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJamRecipeOverview), 1106486247U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipe_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJamRecipe, UJamRecipe::StaticClass, TEXT("UJamRecipe"), &Z_Registration_Info_UClass_UJamRecipe, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJamRecipe), 253767674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipe_h_1273041398(TEXT("/Script/FamJam"),
		Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipe_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipe_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipe_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipe_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipe_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipe_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
