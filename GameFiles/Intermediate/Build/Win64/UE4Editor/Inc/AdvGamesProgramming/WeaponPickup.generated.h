// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ADVGAMESPROGRAMMING_WeaponPickup_generated_h
#error "WeaponPickup.generated.h already included, missing '#pragma once' in WeaponPickup.h"
#endif
#define ADVGAMESPROGRAMMING_WeaponPickup_generated_h

#define GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_SPARSE_DATA
#define GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnGenerate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGenerate(); \
		P_NATIVE_END; \
	}


#define GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGenerate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGenerate(); \
		P_NATIVE_END; \
	}


#define GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_EVENT_PARMS \
	struct WeaponPickup_eventOnPickup_Parms \
	{ \
		AActor* ActorThatPickedUp; \
	};


#define GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_CALLBACK_WRAPPERS
#define GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponPickup(); \
	friend struct Z_Construct_UClass_AWeaponPickup_Statics; \
public: \
	DECLARE_CLASS(AWeaponPickup, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(AWeaponPickup)


#define GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponPickup(); \
	friend struct Z_Construct_UClass_AWeaponPickup_Statics; \
public: \
	DECLARE_CLASS(AWeaponPickup, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(AWeaponPickup)


#define GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponPickup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponPickup(AWeaponPickup&&); \
	NO_API AWeaponPickup(const AWeaponPickup&); \
public:


#define GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponPickup() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponPickup(AWeaponPickup&&); \
	NO_API AWeaponPickup(const AWeaponPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponPickup)


#define GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_PRIVATE_PROPERTY_OFFSET
#define GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_21_PROLOG \
	GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_EVENT_PARMS


#define GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_PRIVATE_PROPERTY_OFFSET \
	GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_SPARSE_DATA \
	GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_RPC_WRAPPERS \
	GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_CALLBACK_WRAPPERS \
	GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_INCLASS \
	GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_PRIVATE_PROPERTY_OFFSET \
	GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_SPARSE_DATA \
	GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_CALLBACK_WRAPPERS \
	GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_INCLASS_NO_PURE_DECLS \
	GameFiles_Source_AdvGamesProgramming_WeaponPickup_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<class AWeaponPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameFiles_Source_AdvGamesProgramming_WeaponPickup_h


#define FOREACH_ENUM_WEAPONPICKUPRARITY(op) \
	op(WeaponPickupRarity::LEGENDARY) \
	op(WeaponPickupRarity::MASTER) \
	op(WeaponPickupRarity::RARE) \
	op(WeaponPickupRarity::COMMON) 

enum class WeaponPickupRarity : uint8;
template<> ADVGAMESPROGRAMMING_API UEnum* StaticEnum<WeaponPickupRarity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
