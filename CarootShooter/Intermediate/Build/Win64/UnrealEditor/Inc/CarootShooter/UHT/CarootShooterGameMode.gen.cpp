// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CarootShooter/CarootShooterGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarootShooterGameMode() {}
// Cross Module References
	CAROOTSHOOTER_API UClass* Z_Construct_UClass_ACarootShooterGameMode();
	CAROOTSHOOTER_API UClass* Z_Construct_UClass_ACarootShooterGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CarootShooter();
// End Cross Module References
	void ACarootShooterGameMode::StaticRegisterNativesACarootShooterGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACarootShooterGameMode);
	UClass* Z_Construct_UClass_ACarootShooterGameMode_NoRegister()
	{
		return ACarootShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACarootShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACarootShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CarootShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarootShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CarootShooterGameMode.h" },
		{ "ModuleRelativePath", "CarootShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACarootShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACarootShooterGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACarootShooterGameMode_Statics::ClassParams = {
		&ACarootShooterGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACarootShooterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACarootShooterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACarootShooterGameMode()
	{
		if (!Z_Registration_Info_UClass_ACarootShooterGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACarootShooterGameMode.OuterSingleton, Z_Construct_UClass_ACarootShooterGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACarootShooterGameMode.OuterSingleton;
	}
	template<> CAROOTSHOOTER_API UClass* StaticClass<ACarootShooterGameMode>()
	{
		return ACarootShooterGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACarootShooterGameMode);
	ACarootShooterGameMode::~ACarootShooterGameMode() {}
<<<<<<< Updated upstream
<<<<<<< Updated upstream
	struct Z_CompiledInDeferFile_FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterGameMode_h_Statics
=======
	struct Z_CompiledInDeferFile_FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterGameMode_h_Statics
>>>>>>> Stashed changes
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACarootShooterGameMode, ACarootShooterGameMode::StaticClass, TEXT("ACarootShooterGameMode"), &Z_Registration_Info_UClass_ACarootShooterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACarootShooterGameMode), 1964995495U) },
	};
<<<<<<< Updated upstream
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterGameMode_h_3795983527(TEXT("/Script/CarootShooter"),
		Z_CompiledInDeferFile_FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterGameMode_h_Statics::ClassInfo),
=======
	struct Z_CompiledInDeferFile_FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACarootShooterGameMode, ACarootShooterGameMode::StaticClass, TEXT("ACarootShooterGameMode"), &Z_Registration_Info_UClass_ACarootShooterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACarootShooterGameMode), 1964995495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterGameMode_h_3795983527(TEXT("/Script/CarootShooter"),
		Z_CompiledInDeferFile_FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterGameMode_h_Statics::ClassInfo),
>>>>>>> Stashed changes
=======
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterGameMode_h_3795983527(TEXT("/Script/CarootShooter"),
		Z_CompiledInDeferFile_FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterGameMode_h_Statics::ClassInfo),
>>>>>>> Stashed changes
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
