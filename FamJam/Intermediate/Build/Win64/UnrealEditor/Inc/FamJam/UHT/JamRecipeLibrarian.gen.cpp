// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FamJam/JamRecipeLibrarian.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamRecipeLibrarian() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	FAMJAM_API UClass* Z_Construct_UClass_UJamLibrarian();
	FAMJAM_API UClass* Z_Construct_UClass_UJamRecipe_NoRegister();
	FAMJAM_API UClass* Z_Construct_UClass_UJamRecipeLibrarian();
	FAMJAM_API UClass* Z_Construct_UClass_UJamRecipeLibrarian_NoRegister();
	FAMJAM_API UScriptStruct* Z_Construct_UScriptStruct_FJamRecipeIndex();
	UPackage* Z_Construct_UPackage__Script_FamJam();
// End Cross Module References

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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecipeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RecipeClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "JamRecipeLibrarian.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJamRecipeIndex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::NewProp_RecipeClass_MetaData[] = {
		{ "Category", "JamRecipeIndex" },
		{ "ModuleRelativePath", "JamRecipeLibrarian.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::NewProp_RecipeClass = { "RecipeClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamRecipeIndex, RecipeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UJamRecipe_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::NewProp_RecipeClass_MetaData), Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::NewProp_RecipeClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::NewProp_RecipeClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FJamRecipeIndex()
	{
		if (!Z_Registration_Info_UScriptStruct_JamRecipeIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JamRecipeIndex.InnerSingleton, Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JamRecipeIndex.InnerSingleton;
	}
	DEFINE_FUNCTION(UJamRecipeLibrarian::execGetRecipe)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJamRecipe**)Z_Param__Result=P_THIS->GetRecipe(Z_Param_RowName);
		P_NATIVE_END;
	}
	void UJamRecipeLibrarian::StaticRegisterNativesUJamRecipeLibrarian()
	{
		UClass* Class = UJamRecipeLibrarian::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRecipe", &UJamRecipeLibrarian::execGetRecipe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics
	{
		struct JamRecipeLibrarian_eventGetRecipe_Parms
		{
			FName RowName;
			UJamRecipe* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JamRecipeLibrarian_eventGetRecipe_Parms, RowName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JamRecipeLibrarian_eventGetRecipe_Parms, ReturnValue), Z_Construct_UClass_UJamRecipe_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::NewProp_RowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JamRecipeLibrarian.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJamRecipeLibrarian, nullptr, "GetRecipe", nullptr, nullptr, Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::JamRecipeLibrarian_eventGetRecipe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe_Statics::PropPointers) < 2048);
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJamRecipeLibrarian);
	UClass* Z_Construct_UClass_UJamRecipeLibrarian_NoRegister()
	{
		return UJamRecipeLibrarian::StaticClass();
	}
	struct Z_Construct_UClass_UJamRecipeLibrarian_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJamRecipeLibrarian_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UJamLibrarian,
		(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJamRecipeLibrarian_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UJamRecipeLibrarian_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJamRecipeLibrarian_GetRecipe, "GetRecipe" }, // 3150777415
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJamRecipeLibrarian_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamRecipeLibrarian_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "JamRecipeLibrarian.h" },
		{ "ModuleRelativePath", "JamRecipeLibrarian.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJamRecipeLibrarian_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJamRecipeLibrarian>::IsAbstract,
	};
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
	struct Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipeLibrarian_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipeLibrarian_h_Statics::ScriptStructInfo[] = {
		{ FJamRecipeIndex::StaticStruct, Z_Construct_UScriptStruct_FJamRecipeIndex_Statics::NewStructOps, TEXT("JamRecipeIndex"), &Z_Registration_Info_UScriptStruct_JamRecipeIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJamRecipeIndex), 124389009U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipeLibrarian_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJamRecipeLibrarian, UJamRecipeLibrarian::StaticClass, TEXT("UJamRecipeLibrarian"), &Z_Registration_Info_UClass_UJamRecipeLibrarian, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJamRecipeLibrarian), 886034785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipeLibrarian_h_194666761(TEXT("/Script/FamJam"),
		Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipeLibrarian_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipeLibrarian_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipeLibrarian_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamRecipeLibrarian_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
