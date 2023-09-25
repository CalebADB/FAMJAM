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

#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FJamChunk_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> FAMJAM_API UScriptStruct* StaticStruct<struct FJamChunk>();

#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_70_SPARSE_DATA
#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_70_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_70_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_70_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_70_ACCESSORS
#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJamChunkLibrarian(); \
	friend struct Z_Construct_UClass_UJamChunkLibrarian_Statics; \
public: \
	DECLARE_CLASS(UJamChunkLibrarian, UJamLibrarian, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FamJam"), NO_API) \
	DECLARE_SERIALIZER(UJamChunkLibrarian)


#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_70_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJamChunkLibrarian(UJamChunkLibrarian&&); \
	NO_API UJamChunkLibrarian(const UJamChunkLibrarian&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJamChunkLibrarian); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJamChunkLibrarian); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UJamChunkLibrarian) \
	NO_API virtual ~UJamChunkLibrarian();


#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_67_PROLOG
#define FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_70_SPARSE_DATA \
	FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_70_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_70_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_70_ACCESSORS \
	FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_70_INCLASS_NO_PURE_DECLS \
	FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FAMJAM_API UClass* StaticClass<class UJamChunkLibrarian>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_TN_2019_Desktop_Work_FAMJAM_FamJam_Source_FamJam_JamChunkLibrarian_h


#define FOREACH_ENUM_EJAMKEY(op) \
	op(EJamKey::None) \
	op(EJamKey::A) \
	op(EJamKey::Am) \
	op(EJamKey::B) \
	op(EJamKey::Bm) \
	op(EJamKey::C) \
	op(EJamKey::Cm) \
	op(EJamKey::D) \
	op(EJamKey::Dm) \
	op(EJamKey::E) \
	op(EJamKey::Em) \
	op(EJamKey::F) \
	op(EJamKey::Fm) \
	op(EJamKey::G) \
	op(EJamKey::Gm) 

enum class EJamKey;
template<> struct TIsUEnumClass<EJamKey> { enum { Value = true }; };
template<> FAMJAM_API UEnum* StaticEnum<EJamKey>();

#define FOREACH_ENUM_EJAMSOUNDCATEGORY(op) \
	op(EJamSoundCategory::None) 

enum class EJamSoundCategory;
template<> struct TIsUEnumClass<EJamSoundCategory> { enum { Value = true }; };
template<> FAMJAM_API UEnum* StaticEnum<EJamSoundCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
