// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX/BarreraProtectora.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarreraProtectora() {}
// Cross Module References
	FACADE_USFX_API UClass* Z_Construct_UClass_ABarreraProtectora_NoRegister();
	FACADE_USFX_API UClass* Z_Construct_UClass_ABarreraProtectora();
	FACADE_USFX_API UClass* Z_Construct_UClass_APublicador();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX();
// End Cross Module References
	void ABarreraProtectora::StaticRegisterNativesABarreraProtectora()
	{
	}
	UClass* Z_Construct_UClass_ABarreraProtectora_NoRegister()
	{
		return ABarreraProtectora::StaticClass();
	}
	struct Z_Construct_UClass_ABarreraProtectora_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABarreraProtectora_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APublicador,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarreraProtectora_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BarreraProtectora.h" },
		{ "ModuleRelativePath", "BarreraProtectora.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarreraProtectora_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarreraProtectora>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABarreraProtectora_Statics::ClassParams = {
		&ABarreraProtectora::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABarreraProtectora_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABarreraProtectora_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarreraProtectora()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABarreraProtectora_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABarreraProtectora, 2707786340);
	template<> FACADE_USFX_API UClass* StaticClass<ABarreraProtectora>()
	{
		return ABarreraProtectora::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABarreraProtectora(Z_Construct_UClass_ABarreraProtectora, &ABarreraProtectora::StaticClass, TEXT("/Script/FACADE_USFX"), TEXT("ABarreraProtectora"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarreraProtectora);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
