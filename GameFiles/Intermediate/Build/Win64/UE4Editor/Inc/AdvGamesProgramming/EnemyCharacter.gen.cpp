// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvGamesProgramming/EnemyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCharacter() {}
// Cross Module References
	ADVGAMESPROGRAMMING_API UEnum* Z_Construct_UEnum_AdvGamesProgramming_AgentState();
	UPackage* Z_Construct_UPackage__Script_AdvGamesProgramming();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AEnemyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_AEnemyCharacter_AllowMoveAlongPath();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_AEnemyCharacter_CalcKillApprox();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_AEnemyCharacter_CreatePathEngage();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_AEnemyCharacter_CreatePathEvade();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_AEnemyCharacter_CreatePathPatrol();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_AEnemyCharacter_EmptyPath();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_AEnemyCharacter_Fire();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_AEnemyCharacter_GetBCanSeeActor();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_AEnemyCharacter_GetBSensed();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_AEnemyCharacter_SensePlayer();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_AEnemyCharacter_Trigger();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AMyAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_ANavigationNode_NoRegister();
// End Cross Module References
	static UEnum* AgentState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvGamesProgramming_AgentState, Z_Construct_UPackage__Script_AdvGamesProgramming(), TEXT("AgentState"));
		}
		return Singleton;
	}
	template<> ADVGAMESPROGRAMMING_API UEnum* StaticEnum<AgentState>()
	{
		return AgentState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AgentState(AgentState_StaticEnum, TEXT("/Script/AdvGamesProgramming"), TEXT("AgentState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvGamesProgramming_AgentState_Hash() { return 3447457846U; }
	UEnum* Z_Construct_UEnum_AdvGamesProgramming_AgentState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvGamesProgramming();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AgentState"), 0, Get_Z_Construct_UEnum_AdvGamesProgramming_AgentState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AgentState::PATROL", (int64)AgentState::PATROL },
				{ "AgentState::ENGAGE", (int64)AgentState::ENGAGE },
				{ "AgentState::EVADE", (int64)AgentState::EVADE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ENGAGE.Name", "AgentState::ENGAGE" },
				{ "EVADE.Name", "AgentState::EVADE" },
				{ "ModuleRelativePath", "EnemyCharacter.h" },
				{ "PATROL.Name", "AgentState::PATROL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvGamesProgramming,
				nullptr,
				"AgentState",
				"AgentState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_AEnemyCharacter_Fire = FName(TEXT("Fire"));
	void AEnemyCharacter::Fire(FVector FireDirection)
	{
		EnemyCharacter_eventFire_Parms Parms;
		Parms.FireDirection=FireDirection;
		ProcessEvent(FindFunctionChecked(NAME_AEnemyCharacter_Fire),&Parms);
	}
	void AEnemyCharacter::StaticRegisterNativesAEnemyCharacter()
	{
		UClass* Class = AEnemyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AllowMoveAlongPath", &AEnemyCharacter::execAllowMoveAlongPath },
			{ "CalcKillApprox", &AEnemyCharacter::execCalcKillApprox },
			{ "CreatePathEngage", &AEnemyCharacter::execCreatePathEngage },
			{ "CreatePathEvade", &AEnemyCharacter::execCreatePathEvade },
			{ "CreatePathPatrol", &AEnemyCharacter::execCreatePathPatrol },
			{ "EmptyPath", &AEnemyCharacter::execEmptyPath },
			{ "GetBCanSeeActor", &AEnemyCharacter::execGetBCanSeeActor },
			{ "GetBSensed", &AEnemyCharacter::execGetBSensed },
			{ "SensePlayer", &AEnemyCharacter::execSensePlayer },
			{ "Trigger", &AEnemyCharacter::execTrigger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyCharacter_AllowMoveAlongPath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_AllowMoveAlongPath_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//For Movement\n" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
		{ "ToolTip", "For Movement" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_AllowMoveAlongPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "AllowMoveAlongPath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_AllowMoveAlongPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_AllowMoveAlongPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacter_AllowMoveAlongPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_AllowMoveAlongPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacter_CalcKillApprox_Statics
	{
		struct EnemyCharacter_eventCalcKillApprox_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemyCharacter_CalcKillApprox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyCharacter_eventCalcKillApprox_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacter_CalcKillApprox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_CalcKillApprox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_CalcKillApprox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_CalcKillApprox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "CalcKillApprox", nullptr, nullptr, sizeof(EnemyCharacter_eventCalcKillApprox_Parms), Z_Construct_UFunction_AEnemyCharacter_CalcKillApprox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_CalcKillApprox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_CalcKillApprox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_CalcKillApprox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacter_CalcKillApprox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_CalcKillApprox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacter_CreatePathEngage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_CreatePathEngage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_CreatePathEngage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "CreatePathEngage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_CreatePathEngage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_CreatePathEngage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacter_CreatePathEngage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_CreatePathEngage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacter_CreatePathEvade_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_CreatePathEvade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_CreatePathEvade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "CreatePathEvade", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_CreatePathEvade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_CreatePathEvade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacter_CreatePathEvade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_CreatePathEvade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacter_CreatePathPatrol_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_CreatePathPatrol_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//For Path Creation\n" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
		{ "ToolTip", "For Path Creation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_CreatePathPatrol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "CreatePathPatrol", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_CreatePathPatrol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_CreatePathPatrol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacter_CreatePathPatrol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_CreatePathPatrol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacter_EmptyPath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_EmptyPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_EmptyPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "EmptyPath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_EmptyPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_EmptyPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacter_EmptyPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_EmptyPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacter_Fire_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FireDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyCharacter_Fire_Statics::NewProp_FireDirection = { "FireDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyCharacter_eventFire_Parms, FireDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacter_Fire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_Fire_Statics::NewProp_FireDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "Fire", nullptr, nullptr, sizeof(EnemyCharacter_eventFire_Parms), Z_Construct_UFunction_AEnemyCharacter_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_Fire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacter_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacter_GetBCanSeeActor_Statics
	{
		struct EnemyCharacter_eventGetBCanSeeActor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AEnemyCharacter_GetBCanSeeActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EnemyCharacter_eventGetBCanSeeActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyCharacter_GetBCanSeeActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EnemyCharacter_eventGetBCanSeeActor_Parms), &Z_Construct_UFunction_AEnemyCharacter_GetBCanSeeActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacter_GetBCanSeeActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_GetBCanSeeActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_GetBCanSeeActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_GetBCanSeeActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "GetBCanSeeActor", nullptr, nullptr, sizeof(EnemyCharacter_eventGetBCanSeeActor_Parms), Z_Construct_UFunction_AEnemyCharacter_GetBCanSeeActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_GetBCanSeeActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_GetBCanSeeActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_GetBCanSeeActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacter_GetBCanSeeActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_GetBCanSeeActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacter_GetBSensed_Statics
	{
		struct EnemyCharacter_eventGetBSensed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AEnemyCharacter_GetBSensed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EnemyCharacter_eventGetBSensed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyCharacter_GetBSensed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EnemyCharacter_eventGetBSensed_Parms), &Z_Construct_UFunction_AEnemyCharacter_GetBSensed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacter_GetBSensed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_GetBSensed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_GetBSensed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_GetBSensed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "GetBSensed", nullptr, nullptr, sizeof(EnemyCharacter_eventGetBSensed_Parms), Z_Construct_UFunction_AEnemyCharacter_GetBSensed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_GetBSensed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_GetBSensed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_GetBSensed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacter_GetBSensed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_GetBSensed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacter_SensePlayer_Statics
	{
		struct EnemyCharacter_eventSensePlayer_Parms
		{
			AActor* ActorSensed;
			FAIStimulus Stimulus;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorSensed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyCharacter_SensePlayer_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyCharacter_eventSensePlayer_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyCharacter_SensePlayer_Statics::NewProp_ActorSensed = { "ActorSensed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyCharacter_eventSensePlayer_Parms, ActorSensed), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacter_SensePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_SensePlayer_Statics::NewProp_Stimulus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_SensePlayer_Statics::NewProp_ActorSensed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_SensePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_SensePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "SensePlayer", nullptr, nullptr, sizeof(EnemyCharacter_eventSensePlayer_Parms), Z_Construct_UFunction_AEnemyCharacter_SensePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_SensePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_SensePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_SensePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacter_SensePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_SensePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacter_Trigger_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_Trigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_Trigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "Trigger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_Trigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_Trigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacter_Trigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_Trigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister()
	{
		return AEnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyBlackboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyBlackboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanSeeActor_MetaData[];
#endif
		static void NewProp_bCanSeeActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanSeeActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSensed_MetaData[];
#endif
		static void NewProp_bSensed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSensed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Path_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvGamesProgramming,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyCharacter_AllowMoveAlongPath, "AllowMoveAlongPath" }, // 4117553157
		{ &Z_Construct_UFunction_AEnemyCharacter_CalcKillApprox, "CalcKillApprox" }, // 3150929251
		{ &Z_Construct_UFunction_AEnemyCharacter_CreatePathEngage, "CreatePathEngage" }, // 2485778652
		{ &Z_Construct_UFunction_AEnemyCharacter_CreatePathEvade, "CreatePathEvade" }, // 1729189943
		{ &Z_Construct_UFunction_AEnemyCharacter_CreatePathPatrol, "CreatePathPatrol" }, // 841029096
		{ &Z_Construct_UFunction_AEnemyCharacter_EmptyPath, "EmptyPath" }, // 1227039689
		{ &Z_Construct_UFunction_AEnemyCharacter_Fire, "Fire" }, // 2034662589
		{ &Z_Construct_UFunction_AEnemyCharacter_GetBCanSeeActor, "GetBCanSeeActor" }, // 307403349
		{ &Z_Construct_UFunction_AEnemyCharacter_GetBSensed, "GetBSensed" }, // 3732545338
		{ &Z_Construct_UFunction_AEnemyCharacter_SensePlayer, "SensePlayer" }, // 3679076591
		{ &Z_Construct_UFunction_AEnemyCharacter_Trigger, "Trigger" }, // 1346815487
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyCharacter.h" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_AIController_MetaData[] = {
		{ "Category", "EnemyCharacter" },
		{ "Comment", "//UFUNCTION(BlueprintImplementableEvent)\n//bool TestFunction();\n" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
		{ "ToolTip", "UFUNCTION(BlueprintImplementableEvent)\nbool TestFunction();" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, AIController), Z_Construct_UClass_AMyAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_AIController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_AIController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_EnemyBlackboard_MetaData[] = {
		{ "Category", "EnemyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_EnemyBlackboard = { "EnemyBlackboard", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, EnemyBlackboard), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_EnemyBlackboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_EnemyBlackboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BehaviorTreeComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BehaviorTreeComponent = { "BehaviorTreeComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, BehaviorTreeComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BehaviorTreeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BehaviorTreeComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DetectedActor_MetaData[] = {
		{ "Category", "EnemyCharacter" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DetectedActor = { "DetectedActor", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, DetectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DetectedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DetectedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bCanSeeActor_MetaData[] = {
		{ "Category", "EnemyCharacter" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bCanSeeActor_SetBit(void* Obj)
	{
		((AEnemyCharacter*)Obj)->bCanSeeActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bCanSeeActor = { "bCanSeeActor", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyCharacter), &Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bCanSeeActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bCanSeeActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bCanSeeActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bSensed_MetaData[] = {
		{ "Category", "EnemyCharacter" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bSensed_SetBit(void* Obj)
	{
		((AEnemyCharacter*)Obj)->bSensed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bSensed = { "bSensed", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyCharacter), &Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bSensed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bSensed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bSensed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "EnemyCharacter" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, Path), METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANavigationNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_EnemyBlackboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BehaviorTreeComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DetectedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bCanSeeActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bSensed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_Path_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams = {
		&AEnemyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyCharacter, 485379376);
	template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<AEnemyCharacter>()
	{
		return AEnemyCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyCharacter(Z_Construct_UClass_AEnemyCharacter, &AEnemyCharacter::StaticClass, TEXT("/Script/AdvGamesProgramming"), TEXT("AEnemyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
