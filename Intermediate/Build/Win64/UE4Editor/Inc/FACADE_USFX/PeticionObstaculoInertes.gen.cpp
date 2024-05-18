// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX/PeticionObstaculoInertes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePeticionObstaculoInertes() {}
// Cross Module References
	FACADE_USFX_API UClass* Z_Construct_UClass_APeticionObstaculoInertes_NoRegister();
	FACADE_USFX_API UClass* Z_Construct_UClass_APeticionObstaculoInertes();
	FACADE_USFX_API UClass* Z_Construct_UClass_APeticionObstaculo();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX();
// End Cross Module References
	void APeticionObstaculoInertes::StaticRegisterNativesAPeticionObstaculoInertes()
	{
	}
	UClass* Z_Construct_UClass_APeticionObstaculoInertes_NoRegister()
	{
		return APeticionObstaculoInertes::StaticClass();
	}
	struct Z_Construct_UClass_APeticionObstaculoInertes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APeticionObstaculoInertes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APeticionObstaculo,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APeticionObstaculoInertes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PeticionObstaculoInertes.h" },
		{ "ModuleRelativePath", "PeticionObstaculoInertes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APeticionObstaculoInertes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APeticionObstaculoInertes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APeticionObstaculoInertes_Statics::ClassParams = {
		&APeticionObstaculoInertes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APeticionObstaculoInertes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APeticionObstaculoInertes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APeticionObstaculoInertes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APeticionObstaculoInertes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APeticionObstaculoInertes, 2501095714);
	template<> FACADE_USFX_API UClass* StaticClass<APeticionObstaculoInertes>()
	{
		return APeticionObstaculoInertes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APeticionObstaculoInertes(Z_Construct_UClass_APeticionObstaculoInertes, &APeticionObstaculoInertes::StaticClass, TEXT("/Script/FACADE_USFX"), TEXT("APeticionObstaculoInertes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APeticionObstaculoInertes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
