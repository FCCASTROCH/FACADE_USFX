// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX/FACADE_USFXGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFACADE_USFXGameMode() {}
// Cross Module References
	FACADE_USFX_API UClass* Z_Construct_UClass_AFACADE_USFXGameMode_NoRegister();
	FACADE_USFX_API UClass* Z_Construct_UClass_AFACADE_USFXGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX();
// End Cross Module References
	void AFACADE_USFXGameMode::StaticRegisterNativesAFACADE_USFXGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFACADE_USFXGameMode_NoRegister()
	{
		return AFACADE_USFXGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFACADE_USFXGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFACADE_USFXGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFACADE_USFXGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FACADE_USFXGameMode.h" },
		{ "ModuleRelativePath", "FACADE_USFXGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFACADE_USFXGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFACADE_USFXGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFACADE_USFXGameMode_Statics::ClassParams = {
		&AFACADE_USFXGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFACADE_USFXGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFACADE_USFXGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFACADE_USFXGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFACADE_USFXGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFACADE_USFXGameMode, 2226196319);
	template<> FACADE_USFX_API UClass* StaticClass<AFACADE_USFXGameMode>()
	{
		return AFACADE_USFXGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFACADE_USFXGameMode(Z_Construct_UClass_AFACADE_USFXGameMode, &AFACADE_USFXGameMode::StaticClass, TEXT("/Script/FACADE_USFX"), TEXT("AFACADE_USFXGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFACADE_USFXGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
