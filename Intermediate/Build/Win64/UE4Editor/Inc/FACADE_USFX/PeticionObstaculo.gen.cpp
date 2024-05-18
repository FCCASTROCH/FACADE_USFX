// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX/PeticionObstaculo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePeticionObstaculo() {}
// Cross Module References
	FACADE_USFX_API UClass* Z_Construct_UClass_APeticionObstaculo_NoRegister();
	FACADE_USFX_API UClass* Z_Construct_UClass_APeticionObstaculo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX();
// End Cross Module References
	void APeticionObstaculo::StaticRegisterNativesAPeticionObstaculo()
	{
	}
	UClass* Z_Construct_UClass_APeticionObstaculo_NoRegister()
	{
		return APeticionObstaculo::StaticClass();
	}
	struct Z_Construct_UClass_APeticionObstaculo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APeticionObstaculo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APeticionObstaculo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PeticionObstaculo.h" },
		{ "ModuleRelativePath", "PeticionObstaculo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APeticionObstaculo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APeticionObstaculo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APeticionObstaculo_Statics::ClassParams = {
		&APeticionObstaculo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APeticionObstaculo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APeticionObstaculo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APeticionObstaculo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APeticionObstaculo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APeticionObstaculo, 4172580606);
	template<> FACADE_USFX_API UClass* StaticClass<APeticionObstaculo>()
	{
		return APeticionObstaculo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APeticionObstaculo(Z_Construct_UClass_APeticionObstaculo, &APeticionObstaculo::StaticClass, TEXT("/Script/FACADE_USFX"), TEXT("APeticionObstaculo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APeticionObstaculo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
