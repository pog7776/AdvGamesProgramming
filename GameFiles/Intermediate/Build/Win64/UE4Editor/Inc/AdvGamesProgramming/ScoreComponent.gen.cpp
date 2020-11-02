// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvGamesProgramming/ScoreComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreComponent() {}
// Cross Module References
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_UScoreComponent_NoRegister();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_UScoreComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AdvGamesProgramming();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_UScoreComponent_AddToScore();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_UScoreComponent_SetScore();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_UScoreComponent_SubtractFromScore();
// End Cross Module References
	void UScoreComponent::StaticRegisterNativesUScoreComponent()
	{
		UClass* Class = UScoreComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToScore", &UScoreComponent::execAddToScore },
			{ "SetScore", &UScoreComponent::execSetScore },
			{ "SubtractFromScore", &UScoreComponent::execSubtractFromScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScoreComponent_AddToScore_Statics
	{
		struct ScoreComponent_eventAddToScore_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScoreComponent_AddToScore_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScoreComponent_eventAddToScore_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScoreComponent_AddToScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScoreComponent_AddToScore_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScoreComponent_AddToScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScoreComponent_AddToScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScoreComponent, nullptr, "AddToScore", nullptr, nullptr, sizeof(ScoreComponent_eventAddToScore_Parms), Z_Construct_UFunction_UScoreComponent_AddToScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreComponent_AddToScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScoreComponent_AddToScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreComponent_AddToScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScoreComponent_AddToScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScoreComponent_AddToScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScoreComponent_SetScore_Statics
	{
		struct ScoreComponent_eventSetScore_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScoreComponent_SetScore_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScoreComponent_eventSetScore_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScoreComponent_SetScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScoreComponent_SetScore_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScoreComponent_SetScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScoreComponent_SetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScoreComponent, nullptr, "SetScore", nullptr, nullptr, sizeof(ScoreComponent_eventSetScore_Parms), Z_Construct_UFunction_UScoreComponent_SetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreComponent_SetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScoreComponent_SetScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreComponent_SetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScoreComponent_SetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScoreComponent_SetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScoreComponent_SubtractFromScore_Statics
	{
		struct ScoreComponent_eventSubtractFromScore_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScoreComponent_SubtractFromScore_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScoreComponent_eventSubtractFromScore_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScoreComponent_SubtractFromScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScoreComponent_SubtractFromScore_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScoreComponent_SubtractFromScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScoreComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScoreComponent_SubtractFromScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScoreComponent, nullptr, "SubtractFromScore", nullptr, nullptr, sizeof(ScoreComponent_eventSubtractFromScore_Parms), Z_Construct_UFunction_UScoreComponent_SubtractFromScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreComponent_SubtractFromScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScoreComponent_SubtractFromScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreComponent_SubtractFromScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScoreComponent_SubtractFromScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScoreComponent_SubtractFromScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScoreComponent_NoRegister()
	{
		return UScoreComponent::StaticClass();
	}
	struct Z_Construct_UClass_UScoreComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScoreComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvGamesProgramming,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScoreComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScoreComponent_AddToScore, "AddToScore" }, // 3187796106
		{ &Z_Construct_UFunction_UScoreComponent_SetScore, "SetScore" }, // 4149541478
		{ &Z_Construct_UFunction_UScoreComponent_SubtractFromScore, "SubtractFromScore" }, // 4136026781
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScoreComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ScoreComponent.h" },
		{ "ModuleRelativePath", "ScoreComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScoreComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScoreComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScoreComponent_Statics::ClassParams = {
		&UScoreComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UScoreComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScoreComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScoreComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScoreComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScoreComponent, 365912812);
	template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<UScoreComponent>()
	{
		return UScoreComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScoreComponent(Z_Construct_UClass_UScoreComponent, &UScoreComponent::StaticClass, TEXT("/Script/AdvGamesProgramming"), TEXT("UScoreComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScoreComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
