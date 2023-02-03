// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CarootShooter/Rabbit_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRabbit_Base() {}
// Cross Module References
	CAROOTSHOOTER_API UClass* Z_Construct_UClass_ARabbit_Base();
	CAROOTSHOOTER_API UClass* Z_Construct_UClass_ARabbit_Base_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CarootShooter();
// End Cross Module References
	void ARabbit_Base::StaticRegisterNativesARabbit_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARabbit_Base);
	UClass* Z_Construct_UClass_ARabbit_Base_NoRegister()
	{
		return ARabbit_Base::StaticClass();
	}
	struct Z_Construct_UClass_ARabbit_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARabbit_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CarootShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARabbit_Base_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Rabbit_Base.h" },
		{ "ModuleRelativePath", "Rabbit_Base.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARabbit_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARabbit_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARabbit_Base_Statics::ClassParams = {
		&ARabbit_Base::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARabbit_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARabbit_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARabbit_Base()
	{
		if (!Z_Registration_Info_UClass_ARabbit_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARabbit_Base.OuterSingleton, Z_Construct_UClass_ARabbit_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARabbit_Base.OuterSingleton;
	}
	template<> CAROOTSHOOTER_API UClass* StaticClass<ARabbit_Base>()
	{
		return ARabbit_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARabbit_Base);
	ARabbit_Base::~ARabbit_Base() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_Rabbit_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_Rabbit_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARabbit_Base, ARabbit_Base::StaticClass, TEXT("ARabbit_Base"), &Z_Registration_Info_UClass_ARabbit_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARabbit_Base), 3125950611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_Rabbit_Base_h_563629164(TEXT("/Script/CarootShooter"),
		Z_CompiledInDeferFile_FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_Rabbit_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_Rabbit_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
