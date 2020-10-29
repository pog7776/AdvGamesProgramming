// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ADVGAMESPROGRAMMING_AmmoPickup_generated_h
#error "AmmoPickup.generated.h already included, missing '#pragma once' in AmmoPickup.h"
#endif
#define ADVGAMESPROGRAMMING_AmmoPickup_generated_h

#define GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_SPARSE_DATA
#define GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnGenerate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGenerate(); \
		P_NATIVE_END; \
	}


#define GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGenerate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGenerate(); \
		P_NATIVE_END; \
	}


#define GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_EVENT_PARMS \
	struct AmmoPickup_eventOnPickup_Parms \
	{ \
		AActor* ActorThatPickedUp; \
	};


#define GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_CALLBACK_WRAPPERS
#define GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAmmoPickup(); \
	friend struct Z_Construct_UClass_AAmmoPickup_Statics; \
public: \
	DECLARE_CLASS(AAmmoPickup, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(AAmmoPickup)


#define GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAmmoPickup(); \
	friend struct Z_Construct_UClass_AAmmoPickup_Statics; \
public: \
	DECLARE_CLASS(AAmmoPickup, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(AAmmoPickup)


#define GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAmmoPickup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAmmoPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmoPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmoPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAmmoPickup(AAmmoPickup&&); \
	NO_API AAmmoPickup(const AAmmoPickup&); \
public:


#define GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAmmoPickup() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAmmoPickup(AAmmoPickup&&); \
	NO_API AAmmoPickup(const AAmmoPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmoPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmoPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAmmoPickup)


#define GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_PRIVATE_PROPERTY_OFFSET
#define GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_12_PROLOG \
	GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_EVENT_PARMS


#define GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_SPARSE_DATA \
	GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_RPC_WRAPPERS \
	GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_CALLBACK_WRAPPERS \
	GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_INCLASS \
	GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_SPARSE_DATA \
	GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_CALLBACK_WRAPPERS \
	GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_INCLASS_NO_PURE_DECLS \
	GameFiles_Source_AdvGamesProgramming_AmmoPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<class AAmmoPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameFiles_Source_AdvGamesProgramming_AmmoPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
