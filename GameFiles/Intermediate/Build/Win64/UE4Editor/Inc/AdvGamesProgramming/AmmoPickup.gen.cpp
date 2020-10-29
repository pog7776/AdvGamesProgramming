// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvGamesProgramming/AmmoPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoPickup() {}
// Cross Module References
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AAmmoPickup_NoRegister();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AAmmoPickup();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_AdvGamesProgramming();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_AAmmoPickup_OnGenerate();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_AAmmoPickup_OnPickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FName NAME_AAmmoPickup_OnPickup = FName(TEXT("OnPickup"));
	void AAmmoPickup::OnPickup(AActor* ActorThatPickedUp)
	{
		AmmoPickup_eventOnPickup_Parms Parms;
		Parms.ActorThatPickedUp=ActorThatPickedUp;
		ProcessEvent(FindFunctionChecked(NAME_AAmmoPickup_OnPickup),&Parms);
	}
	void AAmmoPickup::StaticRegisterNativesAAmmoPickup()
	{
		UClass* Class = AAmmoPickup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGenerate", &AAmmoPickup::execOnGenerate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAmmoPickup_OnGenerate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoPickup_OnGenerate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AmmoPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmmoPickup_OnGenerate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmmoPickup, nullptr, "OnGenerate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAmmoPickup_OnGenerate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoPickup_OnGenerate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAmmoPickup_OnGenerate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAmmoPickup_OnGenerate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAmmoPickup_OnPickup_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorThatPickedUp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAmmoPickup_OnPickup_Statics::NewProp_ActorThatPickedUp = { "ActorThatPickedUp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmmoPickup_eventOnPickup_Parms, ActorThatPickedUp), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmmoPickup_OnPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoPickup_OnPickup_Statics::NewProp_ActorThatPickedUp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoPickup_OnPickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AmmoPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmmoPickup_OnPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmmoPickup, nullptr, "OnPickup", nullptr, nullptr, sizeof(AmmoPickup_eventOnPickup_Parms), Z_Construct_UFunction_AAmmoPickup_OnPickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoPickup_OnPickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAmmoPickup_OnPickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoPickup_OnPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAmmoPickup_OnPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAmmoPickup_OnPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAmmoPickup_NoRegister()
	{
		return AAmmoPickup::StaticClass();
	}
	struct Z_Construct_UClass_AAmmoPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAmmoPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvGamesProgramming,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAmmoPickup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAmmoPickup_OnGenerate, "OnGenerate" }, // 3132741321
		{ &Z_Construct_UFunction_AAmmoPickup_OnPickup, "OnPickup" }, // 2680607879
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AmmoPickup.h" },
		{ "ModuleRelativePath", "AmmoPickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoCount_MetaData[] = {
		{ "Category", "AmmoPickup" },
		{ "ModuleRelativePath", "AmmoPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoCount = { "AmmoCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoPickup, AmmoCount), METADATA_PARAMS(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAmmoPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAmmoPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmmoPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAmmoPickup_Statics::ClassParams = {
		&AAmmoPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAmmoPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAmmoPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAmmoPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAmmoPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAmmoPickup, 2665637589);
	template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<AAmmoPickup>()
	{
		return AAmmoPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAmmoPickup(Z_Construct_UClass_AAmmoPickup, &AAmmoPickup::StaticClass, TEXT("/Script/AdvGamesProgramming"), TEXT("AAmmoPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAmmoPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
