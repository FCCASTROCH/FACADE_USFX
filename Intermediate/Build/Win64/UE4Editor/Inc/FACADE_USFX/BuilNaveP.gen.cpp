// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX/BuilNaveP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilNaveP() {}
// Cross Module References
	FACADE_USFX_API UClass* Z_Construct_UClass_ABuilNaveP_NoRegister();
	FACADE_USFX_API UClass* Z_Construct_UClass_ABuilNaveP();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX();
	FACADE_USFX_API UClass* Z_Construct_UClass_UIBNEnemiga_NoRegister();
// End Cross Module References
	void ABuilNaveP::StaticRegisterNativesABuilNaveP()
	{
	}
	UClass* Z_Construct_UClass_ABuilNaveP_NoRegister()
	{
		return ABuilNaveP::StaticClass();
	}
	struct Z_Construct_UClass_ABuilNaveP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuilNaveP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilNaveP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuilNaveP.h" },
		{ "ModuleRelativePath", "BuilNaveP.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuilNaveP_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIBNEnemiga_NoRegister, (int32)VTABLE_OFFSET(ABuilNaveP, IIBNEnemiga), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilNaveP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilNaveP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuilNaveP_Statics::ClassParams = {
		&ABuilNaveP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuilNaveP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilNaveP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuilNaveP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuilNaveP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuilNaveP, 2103326159);
	template<> FACADE_USFX_API UClass* StaticClass<ABuilNaveP>()
	{
		return ABuilNaveP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuilNaveP(Z_Construct_UClass_ABuilNaveP, &ABuilNaveP::StaticClass, TEXT("/Script/FACADE_USFX"), TEXT("ABuilNaveP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilNaveP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
