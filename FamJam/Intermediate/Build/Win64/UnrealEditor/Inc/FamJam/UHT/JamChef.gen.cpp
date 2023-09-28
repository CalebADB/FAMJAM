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
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	FAMJAM_API UClass* Z_Construct_UClass_UJamChef();
	FAMJAM_API UClass* Z_Construct_UClass_UJamChef_NoRegister();
	FAMJAM_API UClass* Z_Construct_UClass_UJamRecipe_NoRegister();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecipeIndexName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RecipeIndexName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Recipe_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Recipe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecipeOverview_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecipeOverview;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamChef_Statics::NewProp_RecipeIndexName_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_RecipeIndexName = { "RecipeIndexName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, RecipeIndexName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::NewProp_RecipeIndexName_MetaData), Z_Construct_UClass_UJamChef_Statics::NewProp_RecipeIndexName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamChef_Statics::NewProp_Recipe_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_Recipe = { "Recipe", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, Recipe), Z_Construct_UClass_UJamRecipe_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::NewProp_Recipe_MetaData), Z_Construct_UClass_UJamChef_Statics::NewProp_Recipe_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamChef_Statics::NewProp_RecipeOverview_MetaData[] = {
		{ "Category", "JamChef" },
		{ "ModuleRelativePath", "JamChef.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJamChef_Statics::NewProp_RecipeOverview = { "RecipeOverview", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamChef, RecipeOverview), Z_Construct_UScriptStruct_FJamRecipeOverview, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChef_Statics::NewProp_RecipeOverview_MetaData), Z_Construct_UClass_UJamChef_Statics::NewProp_RecipeOverview_MetaData) }; // 4219514701
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJamChef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_bIsMiseEnPlace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_RecipeIndexName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_Recipe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamChef_Statics::NewProp_RecipeOverview,
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
		{ Z_Construct_UClass_UJamChef, UJamChef::StaticClass, TEXT("UJamChef"), &Z_Registration_Info_UClass_UJamChef, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJamChef), 3954548942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChef_h_3747933400(TEXT("/Script/FamJam"),
		Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChef_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChef_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
