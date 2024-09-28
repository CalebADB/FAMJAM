// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FamJam/Jam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJam() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
FAMJAM_API UClass* Z_Construct_UClass_AJam();
FAMJAM_API UClass* Z_Construct_UClass_AJam_NoRegister();
FAMJAM_API UClass* Z_Construct_UClass_UJamChef_NoRegister();
FAMJAM_API UClass* Z_Construct_UClass_UJamChunkLibrarian_NoRegister();
FAMJAM_API UClass* Z_Construct_UClass_UJamRecipeLibrarian_NoRegister();
UPackage* Z_Construct_UPackage__Script_FamJam();
// End Cross Module References

// Begin Class AJam Function BlueprintTick
struct Jam_eventBlueprintTick_Parms
{
	float DeltaTime;
};
static FName NAME_AJam_BlueprintTick = FName(TEXT("BlueprintTick"));
void AJam::BlueprintTick(float DeltaTime)
{
	Jam_eventBlueprintTick_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	ProcessEvent(FindFunctionChecked(NAME_AJam_BlueprintTick),&Parms);
}
struct Z_Construct_UFunction_AJam_BlueprintTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Jam.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AJam_BlueprintTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Jam_eventBlueprintTick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJam_BlueprintTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJam_BlueprintTick_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AJam_BlueprintTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJam_BlueprintTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJam, nullptr, "BlueprintTick", nullptr, nullptr, Z_Construct_UFunction_AJam_BlueprintTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJam_BlueprintTick_Statics::PropPointers), sizeof(Jam_eventBlueprintTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AJam_BlueprintTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_AJam_BlueprintTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(Jam_eventBlueprintTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AJam_BlueprintTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJam_BlueprintTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AJam::execBlueprintTick)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BlueprintTick_Implementation(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class AJam Function BlueprintTick

// Begin Class AJam
void AJam::StaticRegisterNativesAJam()
{
	UClass* Class = AJam::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BlueprintTick", &AJam::execBlueprintTick },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJam);
UClass* Z_Construct_UClass_AJam_NoRegister()
{
	return AJam::StaticClass();
}
struct Z_Construct_UClass_AJam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Jam.h" },
		{ "ModuleRelativePath", "Jam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsJamPossible_MetaData[] = {
		{ "Category", "Jam" },
		{ "ModuleRelativePath", "Jam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chef_MetaData[] = {
		{ "Category", "Jam" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkLibrarian_MetaData[] = {
		{ "Category", "Jam" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecipeLibrarian_MetaData[] = {
		{ "Category", "Jam" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jam.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsJamPossible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsJamPossible;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Chef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChunkLibrarian;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RecipeLibrarian;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AJam_BlueprintTick, "BlueprintTick" }, // 368493304
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJam>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AJam_Statics::NewProp_bIsJamPossible_SetBit(void* Obj)
{
	((AJam*)Obj)->bIsJamPossible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AJam_Statics::NewProp_bIsJamPossible = { "bIsJamPossible", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AJam), &Z_Construct_UClass_AJam_Statics::NewProp_bIsJamPossible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsJamPossible_MetaData), NewProp_bIsJamPossible_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJam_Statics::NewProp_Chef = { "Chef", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJam, Chef), Z_Construct_UClass_UJamChef_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chef_MetaData), NewProp_Chef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJam_Statics::NewProp_ChunkLibrarian = { "ChunkLibrarian", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJam, ChunkLibrarian), Z_Construct_UClass_UJamChunkLibrarian_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkLibrarian_MetaData), NewProp_ChunkLibrarian_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJam_Statics::NewProp_RecipeLibrarian = { "RecipeLibrarian", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJam, RecipeLibrarian), Z_Construct_UClass_UJamRecipeLibrarian_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecipeLibrarian_MetaData), NewProp_RecipeLibrarian_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJam_Statics::NewProp_bIsJamPossible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJam_Statics::NewProp_Chef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJam_Statics::NewProp_ChunkLibrarian,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJam_Statics::NewProp_RecipeLibrarian,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJam_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AJam_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJam_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AJam_Statics::ClassParams = {
	&AJam::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AJam_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AJam_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJam_Statics::Class_MetaDataParams), Z_Construct_UClass_AJam_Statics::Class_MetaDataParams)
};
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
// End Class AJam

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_Jam_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AJam, AJam::StaticClass, TEXT("AJam"), &Z_Registration_Info_UClass_AJam, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJam), 471724645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_Jam_h_419690645(TEXT("/Script/FamJam"),
	Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_Jam_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_Jam_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
