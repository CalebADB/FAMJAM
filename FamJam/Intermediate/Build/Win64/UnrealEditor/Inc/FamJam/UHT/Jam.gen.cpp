// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FamJam/Jam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FAMJAM_API UClass* Z_Construct_UClass_AJam();
	FAMJAM_API UClass* Z_Construct_UClass_AJam_NoRegister();
	FAMJAM_API UClass* Z_Construct_UClass_UJamChef_NoRegister();
	FAMJAM_API UClass* Z_Construct_UClass_UJamChunkLibrarian_NoRegister();
	FAMJAM_API UClass* Z_Construct_UClass_UJamRecipeLibrarian_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FamJam();
// End Cross Module References
	void AJam::StaticRegisterNativesAJam()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJam);
	UClass* Z_Construct_UClass_AJam_NoRegister()
	{
		return AJam::StaticClass();
	}
	struct Z_Construct_UClass_AJam_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Chef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkLibrarian_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChunkLibrarian;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecipeLibrarian_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RecipeLibrarian;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJam_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJam_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Jam.h" },
		{ "ModuleRelativePath", "Jam.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJam_Statics::NewProp_Chef_MetaData[] = {
		{ "Category", "Jam" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jam.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJam_Statics::NewProp_Chef = { "Chef", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJam, Chef), Z_Construct_UClass_UJamChef_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJam_Statics::NewProp_Chef_MetaData), Z_Construct_UClass_AJam_Statics::NewProp_Chef_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJam_Statics::NewProp_ChunkLibrarian_MetaData[] = {
		{ "Category", "Jam" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jam.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJam_Statics::NewProp_ChunkLibrarian = { "ChunkLibrarian", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJam, ChunkLibrarian), Z_Construct_UClass_UJamChunkLibrarian_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJam_Statics::NewProp_ChunkLibrarian_MetaData), Z_Construct_UClass_AJam_Statics::NewProp_ChunkLibrarian_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJam_Statics::NewProp_RecipeLibrarian_MetaData[] = {
		{ "Category", "Jam" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jam.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJam_Statics::NewProp_RecipeLibrarian = { "RecipeLibrarian", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJam, RecipeLibrarian), Z_Construct_UClass_UJamRecipeLibrarian_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJam_Statics::NewProp_RecipeLibrarian_MetaData), Z_Construct_UClass_AJam_Statics::NewProp_RecipeLibrarian_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJam_Statics::NewProp_Chef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJam_Statics::NewProp_ChunkLibrarian,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJam_Statics::NewProp_RecipeLibrarian,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJam>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJam_Statics::ClassParams = {
		&AJam::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AJam_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AJam_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJam_Statics::Class_MetaDataParams), Z_Construct_UClass_AJam_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJam_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AJam()
	{
		if (!Z_Registration_Info_UClass_AJam.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJam.OuterSingleton, Z_Construct_UClass_AJam_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AJam.OuterSingleton;
	}
	template<> FAMJAM_API UClass* StaticClass<AJam>()
	{
		return AJam::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJam);
	AJam::~AJam() {}
	struct Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_Jam_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_Jam_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AJam, AJam::StaticClass, TEXT("AJam"), &Z_Registration_Info_UClass_AJam, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJam), 949155026U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_Jam_h_1139062768(TEXT("/Script/FamJam"),
		Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_Jam_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_Jam_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
