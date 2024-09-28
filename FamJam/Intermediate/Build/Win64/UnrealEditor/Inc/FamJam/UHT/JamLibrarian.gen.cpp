// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FamJam/JamLibrarian.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamLibrarian() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
FAMJAM_API UClass* Z_Construct_UClass_UJamLibrarian();
FAMJAM_API UClass* Z_Construct_UClass_UJamLibrarian_NoRegister();
UPackage* Z_Construct_UPackage__Script_FamJam();
// End Cross Module References

// Begin Class UJamLibrarian
void UJamLibrarian::StaticRegisterNativesUJamLibrarian()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJamLibrarian);
UClass* Z_Construct_UClass_UJamLibrarian_NoRegister()
{
	return UJamLibrarian::StaticClass();
}
struct Z_Construct_UClass_UJamLibrarian_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "JamLibrarian.h" },
		{ "ModuleRelativePath", "JamLibrarian.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Library_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "JamLibrarian" },
		{ "ModuleRelativePath", "JamLibrarian.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLibrarianForgiving_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "JamLibrarian" },
		{ "ModuleRelativePath", "JamLibrarian.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLibraryComplete_MetaData[] = {
		{ "Category", "JamLibrarian" },
		{ "ModuleRelativePath", "JamLibrarian.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Library;
	static void NewProp_bIsLibrarianForgiving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLibrarianForgiving;
	static void NewProp_bIsLibraryComplete_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLibraryComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJamLibrarian>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJamLibrarian_Statics::NewProp_Library = { "Library", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamLibrarian, Library), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Library_MetaData), NewProp_Library_MetaData) };
void Z_Construct_UClass_UJamLibrarian_Statics::NewProp_bIsLibrarianForgiving_SetBit(void* Obj)
{
	((UJamLibrarian*)Obj)->bIsLibrarianForgiving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJamLibrarian_Statics::NewProp_bIsLibrarianForgiving = { "bIsLibrarianForgiving", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJamLibrarian), &Z_Construct_UClass_UJamLibrarian_Statics::NewProp_bIsLibrarianForgiving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLibrarianForgiving_MetaData), NewProp_bIsLibrarianForgiving_MetaData) };
void Z_Construct_UClass_UJamLibrarian_Statics::NewProp_bIsLibraryComplete_SetBit(void* Obj)
{
	((UJamLibrarian*)Obj)->bIsLibraryComplete = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJamLibrarian_Statics::NewProp_bIsLibraryComplete = { "bIsLibraryComplete", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJamLibrarian), &Z_Construct_UClass_UJamLibrarian_Statics::NewProp_bIsLibraryComplete_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLibraryComplete_MetaData), NewProp_bIsLibraryComplete_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJamLibrarian_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamLibrarian_Statics::NewProp_Library,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamLibrarian_Statics::NewProp_bIsLibrarianForgiving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamLibrarian_Statics::NewProp_bIsLibraryComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJamLibrarian_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UJamLibrarian_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJamLibrarian_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJamLibrarian_Statics::ClassParams = {
	&UJamLibrarian::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UJamLibrarian_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UJamLibrarian_Statics::PropPointers),
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamLibrarian_Statics::Class_MetaDataParams), Z_Construct_UClass_UJamLibrarian_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJamLibrarian()
{
	if (!Z_Registration_Info_UClass_UJamLibrarian.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJamLibrarian.OuterSingleton, Z_Construct_UClass_UJamLibrarian_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJamLibrarian.OuterSingleton;
}
template<> FAMJAM_API UClass* StaticClass<UJamLibrarian>()
{
	return UJamLibrarian::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJamLibrarian);
UJamLibrarian::~UJamLibrarian() {}
// End Class UJamLibrarian

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_JamLibrarian_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJamLibrarian, UJamLibrarian::StaticClass, TEXT("UJamLibrarian"), &Z_Registration_Info_UClass_UJamLibrarian, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJamLibrarian), 1905511513U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_JamLibrarian_h_755903536(TEXT("/Script/FamJam"),
	Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_JamLibrarian_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_JamLibrarian_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
