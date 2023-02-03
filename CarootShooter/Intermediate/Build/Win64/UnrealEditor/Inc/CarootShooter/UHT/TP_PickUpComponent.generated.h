// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TP_PickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACarootShooterCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CAROOTSHOOTER_TP_PickUpComponent_generated_h
#error "TP_PickUpComponent.generated.h already included, missing '#pragma once' in TP_PickUpComponent.h"
#endif
#define CAROOTSHOOTER_TP_PickUpComponent_generated_h

<<<<<<< Updated upstream
<<<<<<< Updated upstream
<<<<<<< Updated upstream
#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_12_DELEGATE \
=======
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_12_DELEGATE \
>>>>>>> Stashed changes
=======
#define FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_12_DELEGATE \
>>>>>>> Stashed changes
=======
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_12_DELEGATE \
>>>>>>> Stashed changes
struct _Script_CarootShooter_eventOnPickUp_Parms \
{ \
	ACarootShooterCharacter* PickUpCharacter; \
}; \
static inline void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, ACarootShooterCharacter* PickUpCharacter) \
{ \
	_Script_CarootShooter_eventOnPickUp_Parms Parms; \
	Parms.PickUpCharacter=PickUpCharacter; \
	OnPickUp.ProcessMulticastDelegate<UObject>(&Parms); \
}


<<<<<<< Updated upstream
<<<<<<< Updated upstream
<<<<<<< Updated upstream
#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_SPARSE_DATA
#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_RPC_WRAPPERS \
=======
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_SPARSE_DATA
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_RPC_WRAPPERS \
>>>>>>> Stashed changes
=======
#define FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_SPARSE_DATA
#define FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_RPC_WRAPPERS \
>>>>>>> Stashed changes
=======
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_SPARSE_DATA
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_RPC_WRAPPERS \
>>>>>>> Stashed changes
 \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


<<<<<<< Updated upstream
<<<<<<< Updated upstream
<<<<<<< Updated upstream
#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
=======
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> Stashed changes
=======
#define FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> Stashed changes
=======
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> Stashed changes
 \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


<<<<<<< Updated upstream
<<<<<<< Updated upstream
<<<<<<< Updated upstream
#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_ACCESSORS
#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
=======
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_ACCESSORS
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
>>>>>>> Stashed changes
=======
#define FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_ACCESSORS
#define FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
>>>>>>> Stashed changes
=======
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_ACCESSORS
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
>>>>>>> Stashed changes
private: \
	static void StaticRegisterNativesUTP_PickUpComponent(); \
	friend struct Z_Construct_UClass_UTP_PickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UTP_PickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CarootShooter"), NO_API) \
	DECLARE_SERIALIZER(UTP_PickUpComponent)


<<<<<<< Updated upstream
<<<<<<< Updated upstream
<<<<<<< Updated upstream
#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_INCLASS \
=======
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_INCLASS \
>>>>>>> Stashed changes
=======
#define FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_INCLASS \
>>>>>>> Stashed changes
=======
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_INCLASS \
>>>>>>> Stashed changes
private: \
	static void StaticRegisterNativesUTP_PickUpComponent(); \
	friend struct Z_Construct_UClass_UTP_PickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UTP_PickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CarootShooter"), NO_API) \
	DECLARE_SERIALIZER(UTP_PickUpComponent)


<<<<<<< Updated upstream
<<<<<<< Updated upstream
<<<<<<< Updated upstream
#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_STANDARD_CONSTRUCTORS \
=======
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_STANDARD_CONSTRUCTORS \
>>>>>>> Stashed changes
=======
#define FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_STANDARD_CONSTRUCTORS \
>>>>>>> Stashed changes
=======
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_STANDARD_CONSTRUCTORS \
>>>>>>> Stashed changes
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTP_PickUpComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTP_PickUpComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTP_PickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTP_PickUpComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTP_PickUpComponent(UTP_PickUpComponent&&); \
	NO_API UTP_PickUpComponent(const UTP_PickUpComponent&); \
public: \
	NO_API virtual ~UTP_PickUpComponent();


<<<<<<< Updated upstream
<<<<<<< Updated upstream
<<<<<<< Updated upstream
#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
=======
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
>>>>>>> Stashed changes
=======
#define FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
>>>>>>> Stashed changes
=======
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
>>>>>>> Stashed changes
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTP_PickUpComponent(UTP_PickUpComponent&&); \
	NO_API UTP_PickUpComponent(const UTP_PickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTP_PickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTP_PickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTP_PickUpComponent) \
	NO_API virtual ~UTP_PickUpComponent();


<<<<<<< Updated upstream
<<<<<<< Updated upstream
<<<<<<< Updated upstream
#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_14_PROLOG
#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_SPARSE_DATA \
	FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_RPC_WRAPPERS \
	FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_ACCESSORS \
	FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_INCLASS \
	FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_STANDARD_CONSTRUCTORS \
=======
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_14_PROLOG
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_SPARSE_DATA \
	FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_RPC_WRAPPERS \
	FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_ACCESSORS \
	FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_INCLASS \
	FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_STANDARD_CONSTRUCTORS \
>>>>>>> Stashed changes
=======
#define FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_14_PROLOG
#define FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_SPARSE_DATA \
	FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_RPC_WRAPPERS \
	FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_ACCESSORS \
	FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_INCLASS \
	FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_STANDARD_CONSTRUCTORS \
>>>>>>> Stashed changes
=======
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_14_PROLOG
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_SPARSE_DATA \
	FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_RPC_WRAPPERS \
	FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_ACCESSORS \
	FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_INCLASS \
	FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_STANDARD_CONSTRUCTORS \
>>>>>>> Stashed changes
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


<<<<<<< Updated upstream
<<<<<<< Updated upstream
<<<<<<< Updated upstream
#define FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_SPARSE_DATA \
	FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_ACCESSORS \
	FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
=======
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_SPARSE_DATA \
	FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_ACCESSORS \
	FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
>>>>>>> Stashed changes
=======
#define FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_SPARSE_DATA \
	FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_ACCESSORS \
	FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
>>>>>>> Stashed changes
=======
#define FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_SPARSE_DATA \
	FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_ACCESSORS \
	FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
>>>>>>> Stashed changes
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAROOTSHOOTER_API UClass* StaticClass<class UTP_PickUpComponent>();

#undef CURRENT_FILE_ID
<<<<<<< Updated upstream
<<<<<<< Updated upstream
<<<<<<< Updated upstream
#define CURRENT_FILE_ID FID_Programming_2_GitHub_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h
=======
#define CURRENT_FILE_ID FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h
>>>>>>> Stashed changes
=======
#define CURRENT_FILE_ID FID_Unreal_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h
>>>>>>> Stashed changes
=======
#define CURRENT_FILE_ID FID_Sebs_Unreal_Projects_Caroot_Shooter_CarootShooter_Source_CarootShooter_TP_PickUpComponent_h
>>>>>>> Stashed changes


PRAGMA_ENABLE_DEPRECATION_WARNINGS
