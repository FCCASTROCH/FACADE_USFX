// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX/PeticionObstaculoExplosivos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePeticionObstaculoExplosivos() {}
// Cross Module References
	FACADE_USFX_API UClass* Z_Construct_UClass_APeticionObstaculoExplosivos_NoRegister();
	FACADE_USFX_API UClass* Z_Construct_UClass_APeticionObstaculoExplosivos();
	FACADE_USFX_API UClass* Z_Construct_UClass_APeticionObstaculo();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX();
// End Cross Module References
	void APeticionObstaculoExplosivos::StaticRegisterNativesAPeticionObstaculoExplosivos()
	{
	}
	UClass* Z_Construct_UClass_APeticionObstaculoExplosivos_NoRegister()
	{
		return APeticionObstaculoExplosivos::StaticClass();
	}
	struct Z_Construct_UClass_APeticionObstaculoExplosivos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APeticionObstaculoExplosivos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APeticionObstaculo,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APeticionObstaculoExplosivos_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PeticionObstaculoExplosivos.h" },
		{ "ModuleRelativePath", "PeticionObstaculoExplosivos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APeticionObstaculoExplosivos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APeticionObstaculoExplosivos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APeticionObstaculoExplosivos_Statics::ClassParams = {
		&APeticionObstaculoExplosivos::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APeticionObstaculoExplosivos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APeticionObstaculoExplosivos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APeticionObstaculoExplosivos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APeticionObstaculoExplosivos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APeticionObstaculoExplosivos, 964026026);
	template<> FACADE_USFX_API UClass* StaticClass<APeticionObstaculoExplosivos>()
	{
		return APeticionObstaculoExplosivos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APeticionObstaculoExplosivos(Z_Construct_UClass_APeticionObstaculoExplosivos, &APeticionObstaculoExplosivos::StaticClass, TEXT("/Script/FACADE_USFX"), TEXT("APeticionObstaculoExplosivos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APeticionObstaculoExplosivos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
