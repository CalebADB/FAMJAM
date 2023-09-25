// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FamJam/JamChef.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamChef() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	FAMJAM_API UClass* Z_Construct_UClass_UJamChef();
	FAMJAM_API UClass* Z_Construct_UClass_UJamChef_NoRegister();
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJamChef_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJamChef>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJamChef_Statics::ClassParams = {
		&UJamChef::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	struct Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChef_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChef_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJamChef, UJamChef::StaticClass, TEXT("UJamChef"), &Z_Registration_Info_UClass_UJamChef, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJamChef), 3858818369U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChef_h_2037846593(TEXT("/Script/FamJam"),
		Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChef_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChef_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
