// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX/ObstaculoSatelite.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoSatelite() {}
// Cross Module References
	FACADE_USFX_API UClass* Z_Construct_UClass_AObstaculoSatelite_NoRegister();
	FACADE_USFX_API UClass* Z_Construct_UClass_AObstaculoSatelite();
	FACADE_USFX_API UClass* Z_Construct_UClass_AObstaculo();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX();
// End Cross Module References
	void AObstaculoSatelite::StaticRegisterNativesAObstaculoSatelite()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoSatelite_NoRegister()
	{
		return AObstaculoSatelite::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoSatelite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoSatelite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculo,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoSatelite_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ObstaculoSatelite.h" },
		{ "ModuleRelativePath", "ObstaculoSatelite.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoSatelite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoSatelite>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoSatelite_Statics::ClassParams = {
		&AObstaculoSatelite::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoSatelite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoSatelite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoSatelite()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoSatelite_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoSatelite, 3584952520);
	template<> FACADE_USFX_API UClass* StaticClass<AObstaculoSatelite>()
	{
		return AObstaculoSatelite::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoSatelite(Z_Construct_UClass_AObstaculoSatelite, &AObstaculoSatelite::StaticClass, TEXT("/Script/FACADE_USFX"), TEXT("AObstaculoSatelite"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoSatelite);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
