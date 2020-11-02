// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvGamesProgramming/PlayerHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHud() {}
// Cross Module References
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_APlayerHud_NoRegister();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_APlayerHud();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_AdvGamesProgramming();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_APlayerHud_DebugButton();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_APlayerHud_SetAmmoText();
// End Cross Module References
	void APlayerHud::StaticRegisterNativesAPlayerHud()
	{
		UClass* Class = APlayerHud::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugButton", &APlayerHud::execDebugButton },
			{ "SetAmmoText", &APlayerHud::execSetAmmoText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerHud_DebugButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerHud_DebugButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerHud_DebugButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerHud, nullptr, "DebugButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerHud_DebugButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerHud_DebugButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerHud_DebugButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerHud_DebugButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerHud_SetAmmoText_Statics
	{
		struct PlayerHud_eventSetAmmoText_Parms
		{
			int32 RoundsRemaining;
			int32 MagazineSize;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MagazineSize;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RoundsRemaining;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerHud_SetAmmoText_Statics::NewProp_MagazineSize = { "MagazineSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHud_eventSetAmmoText_Parms, MagazineSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerHud_SetAmmoText_Statics::NewProp_RoundsRemaining = { "RoundsRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHud_eventSetAmmoText_Parms, RoundsRemaining), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerHud_SetAmmoText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerHud_SetAmmoText_Statics::NewProp_MagazineSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerHud_SetAmmoText_Statics::NewProp_RoundsRemaining,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerHud_SetAmmoText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerHud_SetAmmoText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerHud, nullptr, "SetAmmoText", nullptr, nullptr, sizeof(PlayerHud_eventSetAmmoText_Parms), Z_Construct_UFunction_APlayerHud_SetAmmoText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerHud_SetAmmoText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerHud_SetAmmoText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerHud_SetAmmoText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerHud_SetAmmoText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerHud_SetAmmoText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerHud_NoRegister()
	{
		return APlayerHud::StaticClass();
	}
	struct Z_Construct_UClass_APlayerHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvGamesProgramming,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerHud_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerHud_DebugButton, "DebugButton" }, // 1208736407
		{ &Z_Construct_UFunction_APlayerHud_SetAmmoText, "SetAmmoText" }, // 1982197072
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHud_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "PlayerHud.h" },
		{ "ModuleRelativePath", "PlayerHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerHud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerHud_Statics::ClassParams = {
		&APlayerHud::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APlayerHud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerHud, 4013308353);
	template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<APlayerHud>()
	{
		return APlayerHud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerHud(Z_Construct_UClass_APlayerHud, &APlayerHud::StaticClass, TEXT("/Script/AdvGamesProgramming"), TEXT("APlayerHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
