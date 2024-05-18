// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX/PeticionNavesEnemigas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePeticionNavesEnemigas() {}
// Cross Module References
	FACADE_USFX_API UClass* Z_Construct_UClass_APeticionNavesEnemigas_NoRegister();
	FACADE_USFX_API UClass* Z_Construct_UClass_APeticionNavesEnemigas();
	FACADE_USFX_API UClass* Z_Construct_UClass_APeticionNaves();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX();
// End Cross Module References
	void APeticionNavesEnemigas::StaticRegisterNativesAPeticionNavesEnemigas()
	{
	}
	UClass* Z_Construct_UClass_APeticionNavesEnemigas_NoRegister()
	{
		return APeticionNavesEnemigas::StaticClass();
	}
	struct Z_Construct_UClass_APeticionNavesEnemigas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APeticionNavesEnemigas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APeticionNaves,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APeticionNavesEnemigas_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PeticionNavesEnemigas.h" },
		{ "ModuleRelativePath", "PeticionNavesEnemigas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APeticionNavesEnemigas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APeticionNavesEnemigas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APeticionNavesEnemigas_Statics::ClassParams = {
		&APeticionNavesEnemigas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APeticionNavesEnemigas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APeticionNavesEnemigas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APeticionNavesEnemigas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APeticionNavesEnemigas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APeticionNavesEnemigas, 1215532191);
	template<> FACADE_USFX_API UClass* StaticClass<APeticionNavesEnemigas>()
	{
		return APeticionNavesEnemigas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APeticionNavesEnemigas(Z_Construct_UClass_APeticionNavesEnemigas, &APeticionNavesEnemigas::StaticClass, TEXT("/Script/FACADE_USFX"), TEXT("APeticionNavesEnemigas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APeticionNavesEnemigas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
