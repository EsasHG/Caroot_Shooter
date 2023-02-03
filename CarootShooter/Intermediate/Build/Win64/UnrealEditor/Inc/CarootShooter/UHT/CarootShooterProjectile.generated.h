// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CarootShooterProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CAROOTSHOOTER_CarootShooterProjectile_generated_h
#error "CarootShooterProjectile.generated.h already included, missing '#pragma once' in CarootShooterProjectile.h"
#endif
#define CAROOTSHOOTER_CarootShooterProjectile_generated_h

#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h_15_SPARSE_DATA
#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h_15_ACCESSORS
#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACarootShooterProjectile(); \
	friend struct Z_Construct_UClass_ACarootShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(ACarootShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CarootShooter"), NO_API) \
	DECLARE_SERIALIZER(ACarootShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACarootShooterProjectile(); \
	friend struct Z_Construct_UClass_ACarootShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(ACarootShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CarootShooter"), NO_API) \
	DECLARE_SERIALIZER(ACarootShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACarootShooterProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACarootShooterProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarootShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarootShooterProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarootShooterProjectile(ACarootShooterProjectile&&); \
	NO_API ACarootShooterProjectile(const ACarootShooterProjectile&); \
public: \
	NO_API virtual ~ACarootShooterProjectile();


#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarootShooterProjectile(ACarootShooterProjectile&&); \
	NO_API ACarootShooterProjectile(const ACarootShooterProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarootShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarootShooterProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACarootShooterProjectile) \
	NO_API virtual ~ACarootShooterProjectile();


#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h_12_PROLOG
#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h_15_SPARSE_DATA \
	FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h_15_RPC_WRAPPERS \
	FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h_15_ACCESSORS \
	FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h_15_INCLASS \
	FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h_15_SPARSE_DATA \
	FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h_15_ACCESSORS \
	FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAROOTSHOOTER_API UClass* StaticClass<class ACarootShooterProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_CarootShooterProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
