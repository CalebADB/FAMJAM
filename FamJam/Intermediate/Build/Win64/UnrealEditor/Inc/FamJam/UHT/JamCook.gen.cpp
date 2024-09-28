// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FamJam/JamCook.h"
#include "FamJam/JamChunkLibrarian.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamCook() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
FAMJAM_API UClass* Z_Construct_UClass_AJamCook();
FAMJAM_API UClass* Z_Construct_UClass_AJamCook_NoRegister();
FAMJAM_API UClass* Z_Construct_UClass_AJamCookBoard_NoRegister();
FAMJAM_API UClass* Z_Construct_UClass_AJamCookMind_NoRegister();
FAMJAM_API UClass* Z_Construct_UClass_UJamChunkLibrarian_NoRegister();
FAMJAM_API UScriptStruct* Z_Construct_UScriptStruct_FJamChunk();
UPackage* Z_Construct_UPackage__Script_FamJam();
// End Cross Module References

// Begin Class AJamCook
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "JamCook.h" },
		{ "ModuleRelativePath", "JamCook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMiseEnPlace_MetaData[] = {
		{ "Category", "JamCook" },
		{ "ModuleRelativePath", "JamCook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JamName_MetaData[] = {
		{ "Category", "JamCook" },
		{ "ModuleRelativePath", "JamCook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MindClass_MetaData[] = {
		{ "Category", "JamCook" },
		{ "ModuleRelativePath", "JamCook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mind_MetaData[] = {
		{ "Category", "JamCook" },
		{ "ModuleRelativePath", "JamCook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkLibrarian_MetaData[] = {
		{ "Category", "JamCook" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "JamCook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chunks_MetaData[] = {
		{ "Category", "JamCook" },
		{ "ModuleRelativePath", "JamCook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boards_MetaData[] = {
		{ "Category", "JamCook" },
		{ "ModuleRelativePath", "JamCook.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsMiseEnPlace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMiseEnPlace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_JamName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MindClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mind;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChunkLibrarian;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Chunks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Chunks;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Boards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Boards;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJamCook>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AJamCook_Statics::NewProp_bIsMiseEnPlace_SetBit(void* Obj)
{
	((AJamCook*)Obj)->bIsMiseEnPlace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AJamCook_Statics::NewProp_bIsMiseEnPlace = { "bIsMiseEnPlace", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AJamCook), &Z_Construct_UClass_AJamCook_Statics::NewProp_bIsMiseEnPlace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMiseEnPlace_MetaData), NewProp_bIsMiseEnPlace_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AJamCook_Statics::NewProp_JamName = { "JamName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJamCook, JamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JamName_MetaData), NewProp_JamName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AJamCook_Statics::NewProp_MindClass = { "MindClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJamCook, MindClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AJamCookMind_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MindClass_MetaData), NewProp_MindClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamCook_Statics::NewProp_Mind = { "Mind", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJamCook, Mind), Z_Construct_UClass_AJamCookMind_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mind_MetaData), NewProp_Mind_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamCook_Statics::NewProp_ChunkLibrarian = { "ChunkLibrarian", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJamCook, ChunkLibrarian), Z_Construct_UClass_UJamChunkLibrarian_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkLibrarian_MetaData), NewProp_ChunkLibrarian_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AJamCook_Statics::NewProp_Chunks_Inner = { "Chunks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FJamChunk, METADATA_PARAMS(0, nullptr) }; // 1802850806
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AJamCook_Statics::NewProp_Chunks = { "Chunks", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJamCook, Chunks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chunks_MetaData), NewProp_Chunks_MetaData) }; // 1802850806
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamCook_Statics::NewProp_Boards_Inner = { "Boards", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AJamCookBoard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AJamCook_Statics::NewProp_Boards = { "Boards", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJamCook, Boards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boards_MetaData), NewProp_Boards_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJamCook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamCook_Statics::NewProp_bIsMiseEnPlace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamCook_Statics::NewProp_JamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamCook_Statics::NewProp_MindClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamCook_Statics::NewProp_Mind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamCook_Statics::NewProp_ChunkLibrarian,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamCook_Statics::NewProp_Chunks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamCook_Statics::NewProp_Chunks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamCook_Statics::NewProp_Boards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamCook_Statics::NewProp_Boards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJamCook_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AJamCook_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJamCook_Statics::DependentSingletons) < 16);
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
// End Class AJamCook

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_JamCook_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AJamCook, AJamCook::StaticClass, TEXT("AJamCook"), &Z_Registration_Info_UClass_AJamCook, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJamCook), 2434240771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_JamCook_h_3748735682(TEXT("/Script/FamJam"),
	Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_JamCook_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_JamCook_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
