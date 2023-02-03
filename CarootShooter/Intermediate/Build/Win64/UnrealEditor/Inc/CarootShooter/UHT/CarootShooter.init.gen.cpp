// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarootShooter_init() {}
	CAROOTSHOOTER_API UFunction* Z_Construct_UDelegateFunction_CarootShooter_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CarootShooter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CarootShooter()
	{
		if (!Z_Registration_Info_UPackage__Script_CarootShooter.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CarootShooter_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CarootShooter",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5A3D41E7,
				0x1A72068A,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CarootShooter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CarootShooter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CarootShooter(Z_Construct_UPackage__Script_CarootShooter, TEXT("/Script/CarootShooter"), Z_Registration_Info_UPackage__Script_CarootShooter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5A3D41E7, 0x1A72068A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
