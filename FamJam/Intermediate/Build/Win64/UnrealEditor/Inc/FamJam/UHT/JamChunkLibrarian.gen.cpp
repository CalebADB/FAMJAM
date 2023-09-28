// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FamJam/JamChunkLibrarian.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamChunkLibrarian() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	FAMJAM_API UClass* Z_Construct_UClass_UJamChunkLibrarian();
	FAMJAM_API UClass* Z_Construct_UClass_UJamChunkLibrarian_NoRegister();
	FAMJAM_API UClass* Z_Construct_UClass_UJamLibrarian();
	FAMJAM_API UEnum* Z_Construct_UEnum_FamJam_EJamKey();
	FAMJAM_API UEnum* Z_Construct_UEnum_FamJam_EJamSoundCategory();
	FAMJAM_API UScriptStruct* Z_Construct_UScriptStruct_FJamChunk();
	UPackage* Z_Construct_UPackage__Script_FamJam();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EJamKey;
	static UEnum* EJamKey_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EJamKey.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EJamKey.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FamJam_EJamKey, (UObject*)Z_Construct_UPackage__Script_FamJam(), TEXT("EJamKey"));
		}
		return Z_Registration_Info_UEnum_EJamKey.OuterSingleton;
	}
	template<> FAMJAM_API UEnum* StaticEnum<EJamKey>()
	{
		return EJamKey_StaticEnum();
	}
	struct Z_Construct_UEnum_FamJam_EJamKey_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FamJam_EJamKey_Statics::Enumerators[] = {
		{ "EJamKey::None", (int64)EJamKey::None },
		{ "EJamKey::A", (int64)EJamKey::A },
		{ "EJamKey::Am", (int64)EJamKey::Am },
		{ "EJamKey::B", (int64)EJamKey::B },
		{ "EJamKey::Bm", (int64)EJamKey::Bm },
		{ "EJamKey::C", (int64)EJamKey::C },
		{ "EJamKey::Cm", (int64)EJamKey::Cm },
		{ "EJamKey::D", (int64)EJamKey::D },
		{ "EJamKey::Dm", (int64)EJamKey::Dm },
		{ "EJamKey::E", (int64)EJamKey::E },
		{ "EJamKey::Em", (int64)EJamKey::Em },
		{ "EJamKey::F", (int64)EJamKey::F },
		{ "EJamKey::Fm", (int64)EJamKey::Fm },
		{ "EJamKey::G", (int64)EJamKey::G },
		{ "EJamKey::Gm", (int64)EJamKey::Gm },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FamJam_EJamKey_Statics::Enum_MetaDataParams[] = {
		{ "A.Name", "EJamKey::A" },
		{ "Am.Name", "EJamKey::Am" },
		{ "B.Name", "EJamKey::B" },
		{ "BlueprintType", "true" },
		{ "Bm.Name", "EJamKey::Bm" },
		{ "C.Name", "EJamKey::C" },
		{ "Cm.Name", "EJamKey::Cm" },
		{ "D.Name", "EJamKey::D" },
		{ "Dm.Name", "EJamKey::Dm" },
		{ "E.Name", "EJamKey::E" },
		{ "Em.Name", "EJamKey::Em" },
		{ "F.Name", "EJamKey::F" },
		{ "Fm.Name", "EJamKey::Fm" },
		{ "G.Name", "EJamKey::G" },
		{ "Gm.Name", "EJamKey::Gm" },
		{ "ModuleRelativePath", "JamChunkLibrarian.h" },
		{ "None.Name", "EJamKey::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FamJam_EJamKey_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FamJam,
		nullptr,
		"EJamKey",
		"EJamKey",
		Z_Construct_UEnum_FamJam_EJamKey_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FamJam_EJamKey_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FamJam_EJamKey_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FamJam_EJamKey_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FamJam_EJamKey()
	{
		if (!Z_Registration_Info_UEnum_EJamKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EJamKey.InnerSingleton, Z_Construct_UEnum_FamJam_EJamKey_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EJamKey.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EJamSoundCategory;
	static UEnum* EJamSoundCategory_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EJamSoundCategory.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EJamSoundCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FamJam_EJamSoundCategory, (UObject*)Z_Construct_UPackage__Script_FamJam(), TEXT("EJamSoundCategory"));
		}
		return Z_Registration_Info_UEnum_EJamSoundCategory.OuterSingleton;
	}
	template<> FAMJAM_API UEnum* StaticEnum<EJamSoundCategory>()
	{
		return EJamSoundCategory_StaticEnum();
	}
	struct Z_Construct_UEnum_FamJam_EJamSoundCategory_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FamJam_EJamSoundCategory_Statics::Enumerators[] = {
		{ "EJamSoundCategory::None", (int64)EJamSoundCategory::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FamJam_EJamSoundCategory_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "JamChunkLibrarian.h" },
		{ "None.Name", "EJamSoundCategory::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FamJam_EJamSoundCategory_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FamJam,
		nullptr,
		"EJamSoundCategory",
		"EJamSoundCategory",
		Z_Construct_UEnum_FamJam_EJamSoundCategory_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FamJam_EJamSoundCategory_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FamJam_EJamSoundCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FamJam_EJamSoundCategory_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FamJam_EJamSoundCategory()
	{
		if (!Z_Registration_Info_UEnum_EJamSoundCategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EJamSoundCategory.InnerSingleton, Z_Construct_UEnum_FamJam_EJamSoundCategory_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EJamSoundCategory.InnerSingleton;
	}

static_assert(std::is_polymorphic<FJamChunk>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FJamChunk cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JamChunk;
class UScriptStruct* FJamChunk::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JamChunk.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JamChunk.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJamChunk, (UObject*)Z_Construct_UPackage__Script_FamJam(), TEXT("JamChunk"));
	}
	return Z_Registration_Info_UScriptStruct_JamChunk.OuterSingleton;
}
template<> FAMJAM_API UScriptStruct* StaticStruct<FJamChunk>()
{
	return FJamChunk::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJamChunk_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SoundCategory_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundCategory_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SoundCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeasuresCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeasuresCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tempo_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tempo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSignature_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimeSignature;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChunk_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "JamChunkLibrarian.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJamChunk_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJamChunk>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "JamChunk" },
		{ "ModuleRelativePath", "JamChunkLibrarian.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChunk, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "JamChunk" },
		{ "ModuleRelativePath", "JamChunkLibrarian.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChunk, Key), Z_Construct_UEnum_FamJam_EJamKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Key_MetaData) }; // 2649760022
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_SoundCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_SoundCategory_MetaData[] = {
		{ "Category", "JamChunk" },
		{ "ModuleRelativePath", "JamChunkLibrarian.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_SoundCategory = { "SoundCategory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChunk, SoundCategory), Z_Construct_UEnum_FamJam_EJamSoundCategory, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_SoundCategory_MetaData), Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_SoundCategory_MetaData) }; // 3287790029
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "JamChunk" },
		{ "ModuleRelativePath", "JamChunkLibrarian.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChunk, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Sound_MetaData), Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Sound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "JamChunk" },
		{ "ModuleRelativePath", "JamChunkLibrarian.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChunk, Length), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Length_MetaData), Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Length_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_MeasuresCount_MetaData[] = {
		{ "Category", "JamChunk" },
		{ "ModuleRelativePath", "JamChunkLibrarian.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_MeasuresCount = { "MeasuresCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChunk, MeasuresCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_MeasuresCount_MetaData), Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_MeasuresCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Tempo_MetaData[] = {
		{ "Category", "JamChunk" },
		{ "ModuleRelativePath", "JamChunkLibrarian.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Tempo = { "Tempo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChunk, Tempo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Tempo_MetaData), Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Tempo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_TimeSignature_MetaData[] = {
		{ "Category", "JamChunk" },
		{ "ModuleRelativePath", "JamChunkLibrarian.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_TimeSignature = { "TimeSignature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJamChunk, TimeSignature), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_TimeSignature_MetaData), Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_TimeSignature_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJamChunk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Key_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_SoundCategory_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_SoundCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_MeasuresCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_Tempo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJamChunk_Statics::NewProp_TimeSignature,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJamChunk_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"JamChunk",
		Z_Construct_UScriptStruct_FJamChunk_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChunk_Statics::PropPointers),
		sizeof(FJamChunk),
		alignof(FJamChunk),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChunk_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJamChunk_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJamChunk_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FJamChunk()
	{
		if (!Z_Registration_Info_UScriptStruct_JamChunk.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JamChunk.InnerSingleton, Z_Construct_UScriptStruct_FJamChunk_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JamChunk.InnerSingleton;
	}
	void UJamChunkLibrarian::StaticRegisterNativesUJamChunkLibrarian()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJamChunkLibrarian);
	UClass* Z_Construct_UClass_UJamChunkLibrarian_NoRegister()
	{
		return UJamChunkLibrarian::StaticClass();
	}
	struct Z_Construct_UClass_UJamChunkLibrarian_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJamChunkLibrarian_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UJamLibrarian,
		(UObject* (*)())Z_Construct_UPackage__Script_FamJam,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChunkLibrarian_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJamChunkLibrarian_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "JamChunkLibrarian.h" },
		{ "ModuleRelativePath", "JamChunkLibrarian.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJamChunkLibrarian_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJamChunkLibrarian>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJamChunkLibrarian_Statics::ClassParams = {
		&UJamChunkLibrarian::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamChunkLibrarian_Statics::Class_MetaDataParams), Z_Construct_UClass_UJamChunkLibrarian_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UJamChunkLibrarian()
	{
		if (!Z_Registration_Info_UClass_UJamChunkLibrarian.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJamChunkLibrarian.OuterSingleton, Z_Construct_UClass_UJamChunkLibrarian_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJamChunkLibrarian.OuterSingleton;
	}
	template<> FAMJAM_API UClass* StaticClass<UJamChunkLibrarian>()
	{
		return UJamChunkLibrarian::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJamChunkLibrarian);
	UJamChunkLibrarian::~UJamChunkLibrarian() {}
	struct Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_Statics::EnumInfo[] = {
		{ EJamKey_StaticEnum, TEXT("EJamKey"), &Z_Registration_Info_UEnum_EJamKey, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2649760022U) },
		{ EJamSoundCategory_StaticEnum, TEXT("EJamSoundCategory"), &Z_Registration_Info_UEnum_EJamSoundCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3287790029U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_Statics::ScriptStructInfo[] = {
		{ FJamChunk::StaticStruct, Z_Construct_UScriptStruct_FJamChunk_Statics::NewStructOps, TEXT("JamChunk"), &Z_Registration_Info_UScriptStruct_JamChunk, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJamChunk), 1511109468U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJamChunkLibrarian, UJamChunkLibrarian::StaticClass, TEXT("UJamChunkLibrarian"), &Z_Registration_Info_UClass_UJamChunkLibrarian, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJamChunkLibrarian), 67980433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_1271974620(TEXT("/Script/FamJam"),
		Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
