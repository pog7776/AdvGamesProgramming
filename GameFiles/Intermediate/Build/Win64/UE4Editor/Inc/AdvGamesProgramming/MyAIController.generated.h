// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVGAMESPROGRAMMING_MyAIController_generated_h
#error "MyAIController.generated.h already included, missing '#pragma once' in MyAIController.h"
#endif
#define ADVGAMESPROGRAMMING_MyAIController_generated_h

#define GameFiles_Source_AdvGamesProgramming_MyAIController_h_13_SPARSE_DATA
#define GameFiles_Source_AdvGamesProgramming_MyAIController_h_13_RPC_WRAPPERS
#define GameFiles_Source_AdvGamesProgramming_MyAIController_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define GameFiles_Source_AdvGamesProgramming_MyAIController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyAIController(); \
	friend struct Z_Construct_UClass_AMyAIController_Statics; \
public: \
	DECLARE_CLASS(AMyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(AMyAIController)


#define GameFiles_Source_AdvGamesProgramming_MyAIController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyAIController(); \
	friend struct Z_Construct_UClass_AMyAIController_Statics; \
public: \
	DECLARE_CLASS(AMyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(AMyAIController)


#define GameFiles_Source_AdvGamesProgramming_MyAIController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyAIController(AMyAIController&&); \
	NO_API AMyAIController(const AMyAIController&); \
public:


#define GameFiles_Source_AdvGamesProgramming_MyAIController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyAIController(AMyAIController&&); \
	NO_API AMyAIController(const AMyAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyAIController)


#define GameFiles_Source_AdvGamesProgramming_MyAIController_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__btree_comp() { return STRUCT_OFFSET(AMyAIController, btree_comp); } \
	FORCEINLINE static uint32 __PPO__btree() { return STRUCT_OFFSET(AMyAIController, btree); }


#define GameFiles_Source_AdvGamesProgramming_MyAIController_h_10_PROLOG
#define GameFiles_Source_AdvGamesProgramming_MyAIController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameFiles_Source_AdvGamesProgramming_MyAIController_h_13_PRIVATE_PROPERTY_OFFSET \
	GameFiles_Source_AdvGamesProgramming_MyAIController_h_13_SPARSE_DATA \
	GameFiles_Source_AdvGamesProgramming_MyAIController_h_13_RPC_WRAPPERS \
	GameFiles_Source_AdvGamesProgramming_MyAIController_h_13_INCLASS \
	GameFiles_Source_AdvGamesProgramming_MyAIController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameFiles_Source_AdvGamesProgramming_MyAIController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameFiles_Source_AdvGamesProgramming_MyAIController_h_13_PRIVATE_PROPERTY_OFFSET \
	GameFiles_Source_AdvGamesProgramming_MyAIController_h_13_SPARSE_DATA \
	GameFiles_Source_AdvGamesProgramming_MyAIController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GameFiles_Source_AdvGamesProgramming_MyAIController_h_13_INCLASS_NO_PURE_DECLS \
	GameFiles_Source_AdvGamesProgramming_MyAIController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<class AMyAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameFiles_Source_AdvGamesProgramming_MyAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
