// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FamJam/JamRecipeLibrarian.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamRecipeLibrarian() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
FAMJAM_API UClass* Z_Construct_UClass_UJamLibrarian();
FAMJAM_API UClass* Z_Construct_UClass_UJamRecipe_NoRegister();
FAMJAM_API UClass* Z_Construct_UClass_UJamRecipeLibrarian();
FAMJAM_API UClass* Z_Construct_UClass_UJamRecipeLibrarian_NoRegister();
FAMJAM_API UScriptStruct* Z_Construct_UScriptStruct_FJamRecipeIndex();
UPackage* Z_Construct_UPackage__Script_FamJam();
// End Cross Module References

// Begin ScriptStruct FJamRecipeIndex
static_assert(std::is_polymorphic<FJamRecipeIndex>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FJamRecipeIndex cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JamRecipeIndex;
class UScriptStruct* FJamRecipeIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JamRecipeIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JamRecipeIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJamRecipeIndex, (UObject*)Z_Construct_UPackage__Script_FamJam(), TEXT("JamRecipeIndex"));
	}
	return Z_Registration_Info_UScriptStruct_JamRecipeIndex.OuterSingleton;
}
template<> FAMJAM_API UScriptStruct* StaticStruct<FJamRecipeIndex>()
{
	return FJamRecipeIndex::StaticStruct();
}
struct Z_Construct_UScriptStruct_FJamRecipeIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "JamRecipeLibrarian.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecipeClass_MetaData[] = {
		{ "Category", "JamRecipeIndex" },
		{ "ModuleRelativePath", "JamRecipeLibrarian.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RecipeClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJamRecipeIndex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::NewProp_RecipeClass = { "RecipeClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamRecipeIndex, RecipeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UJamRecipe_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecipeClass_MetaData), NewProp_RecipeClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::NewProp_RecipeClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"JamRecipeIndex",
	Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::PropPointers),
	sizeof(FJamRecipeIndex),
	alignof(FJamRecipeIndex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJamRecipeIndex()
{
	if (!Z_Registration_Info_UScriptStruct_JamRecipeIndex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JamRecipeIndex.InnerSingleton, Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_JamRecipeIndex.InnerSingleton;
}
// End ScriptStruct FJamRecipeIndex

// Begin Class UJamRecipeLibrarian Function GetRecipe
struct Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics
{
	struct JamRecipeLibrarian_eventGetRecipe_Parms
	{
		FName RowName;
		UJamRecipe* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JamRecipeLibrarian.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JamRecipeLibrarian_eventGetRecipe_Parms, RowName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JamRecipeLibrarian_eventGetRecipe_Parms, ReturnValue), Z_Construct_UClass_UJamRecipe_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::NewProp_RowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJamRecipeLibrarian, nullptr, "GetRecipe", nullptr, nullptr, Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::JamRecipeLibrarian_eventGetRecipe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::JamRecipeLibrarian_eventGetRecipe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJamRecipeLibrarian::execGetRecipe)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UJamRecipe**)Z_Param__Result=P_THIS->GetRecipe(Z_Param_RowName);
	P_NATIVE_END;
}
// End Class UJamRecipeLibrarian Function GetRecipe

// Begin Class UJamRecipeLibrarian
void UJamRecipeLibrarian::StaticRegisterNativesUJamRecipeLibrarian()
{
	UClass* Class = UJamRecipeLibrarian::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRecipe", &UJamRecipeLibrarian::execGetRecipe },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJamRecipeLibrarian);
UClass* Z_Construct_UClass_UJamRecipeLibrarian_NoRegister()
{
	return UJamRecipeLibrarian::StaticClass();
}
struct Z_Construct_UClass_UJamRecipeLibrarian_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "JamRecipeLibrarian.h" },
		{ "ModuleRelativePath", "JamRecipeLibrarian.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe, "GetRecipe" }, // 48792033
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJamRecipeLibrarian>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UJamRecipeLibrarian_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UJamLibrarian,
	(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJamRecipeLibrarian_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJamRecipeLibrarian_Statics::ClassParams = {
	&UJamRecipeLibrarian::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamRecipeLibrarian_Statics::Class_MetaDataParams), Z_Construct_UClass_UJamRecipeLibrarian_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJamRecipeLibrarian()
{
	if (!Z_Registration_Info_UClass_UJamRecipeLibrarian.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJamRecipeLibrarian.OuterSingleton, Z_Construct_UClass_UJamRecipeLibrarian_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJamRecipeLibrarian.OuterSingleton;
}
template<> FAMJAM_API UClass* StaticClass<UJamRecipeLibrarian>()
{
	return UJamRecipeLibrarian::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJamRecipeLibrarian);
UJamRecipeLibrarian::~UJamRecipeLibrarian() {}
// End Class UJamRecipeLibrarian

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_JamRecipeLibrarian_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FJamRecipeIndex::StaticStruct, Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::NewStructOps, TEXT("JamRecipeIndex"), &Z_Registration_Info_UScriptStruct_JamRecipeIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJamRecipeIndex), 2633477584U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJamRecipeLibrarian, UJamRecipeLibrarian::StaticClass, TEXT("UJamRecipeLibrarian"), &Z_Registration_Info_UClass_UJamRecipeLibrarian, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJamRecipeLibrarian), 3301015252U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_JamRecipeLibrarian_h_4275773986(TEXT("/Script/FamJam"),
	Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_JamRecipeLibrarian_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_JamRecipeLibrarian_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_JamRecipeLibrarian_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_JamRecipeLibrarian_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
