// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFamJam_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FamJam;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FamJam()
	{
		if (!Z_Registration_Info_UPackage__Script_FamJam.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FamJam",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x25FB51F7,
				0xEE825A6E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FamJam.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FamJam.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FamJam(Z_Construct_UPackage__Script_FamJam, TEXT("/Script/FamJam"), Z_Registration_Info_UPackage__Script_FamJam, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x25FB51F7, 0xEE825A6E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
