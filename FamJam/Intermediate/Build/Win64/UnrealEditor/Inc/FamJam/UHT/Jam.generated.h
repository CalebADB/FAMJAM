// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Jam.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FAMJAM_Jam_generated_h
#error "Jam.generated.h already included, missing '#pragma once' in Jam.h"
#endif
#define FAMJAM_Jam_generated_h

#define FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_Jam_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BlueprintTick_Implementation(float DeltaTime); \
	DECLARE_FUNCTION(execBlueprintTick);


#define FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_Jam_h_16_CALLBACK_WRAPPERS
#define FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_Jam_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJam(); \
	friend struct Z_Construct_UClass_AJam_Statics; \
public: \
	DECLARE_CLASS(AJam, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FamJam"), NO_API) \
	DECLARE_SERIALIZER(AJam)


#define FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_Jam_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AJam(AJam&&); \
	AJam(const AJam&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJam); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJam); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJam) \
	NO_API virtual ~AJam();


#define FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_Jam_h_13_PROLOG
#define FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_Jam_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_Jam_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_Jam_h_16_CALLBACK_WRAPPERS \
	FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_Jam_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_Jam_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FAMJAM_API UClass* StaticClass<class AJam>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_caleb_Documents_GitHub_FAMJAM_FamJam_Source_FamJam_Jam_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
