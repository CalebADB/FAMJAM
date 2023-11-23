// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JamChunkLibrarian.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FAMJAM_JamChunkLibrarian_generated_h
#error "JamChunkLibrarian.generated.h already included, missing '#pragma once' in JamChunkLibrarian.h"
#endif
#define FAMJAM_JamChunkLibrarian_generated_h

#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FJamChunk_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FAMJAM_API UScriptStruct* StaticStruct<struct FJamChunk>();

#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FJamChunkIndex_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> FAMJAM_API UScriptStruct* StaticStruct<struct FJamChunkIndex>();

#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FJamChunkLibraryRow_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> FAMJAM_API UScriptStruct* StaticStruct<struct FJamChunkLibraryRow>();

#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_78_SPARSE_DATA
#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_78_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_78_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_78_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_78_ACCESSORS
#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJamChunkLibrarian(); \
	friend struct Z_Construct_UClass_UJamChunkLibrarian_Statics; \
public: \
	DECLARE_CLASS(UJamChunkLibrarian, UJamLibrarian, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FamJam"), NO_API) \
	DECLARE_SERIALIZER(UJamChunkLibrarian)


#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_78_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJamChunkLibrarian(UJamChunkLibrarian&&); \
	NO_API UJamChunkLibrarian(const UJamChunkLibrarian&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJamChunkLibrarian); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJamChunkLibrarian); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UJamChunkLibrarian) \
	NO_API virtual ~UJamChunkLibrarian();


#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_75_PROLOG
#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_78_SPARSE_DATA \
	FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_78_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_78_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_78_ACCESSORS \
	FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_78_INCLASS_NO_PURE_DECLS \
	FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FAMJAM_API UClass* StaticClass<class UJamChunkLibrarian>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h


#define FOREACH_ENUM_EJAMKEY(op) \
	op(EJamKey::None) \
	op(EJamKey::Gb) \
	op(EJamKey::Db) \
	op(EJamKey::Ab) \
	op(EJamKey::Eb) \
	op(EJamKey::Bb) \
	op(EJamKey::F) \
	op(EJamKey::C) \
	op(EJamKey::G) \
	op(EJamKey::D) \
	op(EJamKey::A) \
	op(EJamKey::E) \
	op(EJamKey::B) 

enum class EJamKey;
template<> struct TIsUEnumClass<EJamKey> { enum { Value = true }; };
template<> FAMJAM_API UEnum* StaticEnum<EJamKey>();

#define FOREACH_ENUM_EJAMSOUNDCATEGORY(op) \
	op(EJamSoundCategory::None) \
	op(EJamSoundCategory::Organ) 

enum class EJamSoundCategory;
template<> struct TIsUEnumClass<EJamSoundCategory> { enum { Value = true }; };
template<> FAMJAM_API UEnum* StaticEnum<EJamSoundCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
