// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FamJam/JamCook.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamCook() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FAMJAM_API UClass* Z_Construct_UClass_AJamCook();
	FAMJAM_API UClass* Z_Construct_UClass_AJamCook_NoRegister();
	FAMJAM_API UClass* Z_Construct_UClass_UJamCookAudioLayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FamJam();
// End Cross Module References
	void AJamCook::StaticRegisterNativesAJamCook()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJamCook);
	UClass* Z_Construct_UClass_AJamCook_NoRegister()
	{
		return AJamCook::StaticClass();
	}
	struct Z_Construct_UClass_AJamCook_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJamCook_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJamCook_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamCook_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "JamCook.h" },
		{ "ModuleRelativePath", "JamCook.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamCook_Statics::NewProp_AudioLayers_Inner = { "AudioLayers", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UJamCookAudioLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamCook_Statics::NewProp_AudioLayers_MetaData[] = {
		{ "Category", "JamCook" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "JamCook.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AJamCook_Statics::NewProp_AudioLayers = { "AudioLayers", nullptr, (EPropertyFlags)0x0010008000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJamCook, AudioLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJamCook_Statics::NewProp_AudioLayers_MetaData), Z_Construct_UClass_AJamCook_Statics::NewProp_AudioLayers_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJamCook_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamCook_Statics::NewProp_AudioLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamCook_Statics::NewProp_AudioLayers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJamCook_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJamCook>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJamCook_Statics::ClassParams = {
		&AJamCook::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AJamCook_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AJamCook_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJamCook_Statics::Class_MetaDataParams), Z_Construct_UClass_AJamCook_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJamCook_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AJamCook()
	{
		if (!Z_Registration_Info_UClass_AJamCook.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJamCook.OuterSingleton, Z_Construct_UClass_AJamCook_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AJamCook.OuterSingleton;
	}
	template<> FAMJAM_API UClass* StaticClass<AJamCook>()
	{
		return AJamCook::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJamCook);
	AJamCook::~AJamCook() {}
	struct Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamCook_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamCook_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AJamCook, AJamCook::StaticClass, TEXT("AJamCook"), &Z_Registration_Info_UClass_AJamCook, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJamCook), 1334988732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamCook_h_4287139469(TEXT("/Script/FamJam"),
		Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamCook_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamCook_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
