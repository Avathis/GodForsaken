// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/BaseClasses/Characters/GFAICharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFAICharacter() {}
// Cross Module References
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFAICharacter();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFAICharacter_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFCharacter();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	void AGFAICharacter::StaticRegisterNativesAGFAICharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGFAICharacter);
	UClass* Z_Construct_UClass_AGFAICharacter_NoRegister()
	{
		return AGFAICharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGFAICharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGFAICharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGFCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGFAICharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFAICharacter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseClasses/Characters/GFAICharacter.h" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFAICharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGFAICharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGFAICharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGFAICharacter_Statics::ClassParams = {
		&AGFAICharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFAICharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGFAICharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGFAICharacter()
	{
		if (!Z_Registration_Info_UClass_AGFAICharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGFAICharacter.OuterSingleton, Z_Construct_UClass_AGFAICharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGFAICharacter.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<AGFAICharacter>()
	{
		return AGFAICharacter::StaticClass();
	}
	AGFAICharacter::AGFAICharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGFAICharacter);
	AGFAICharacter::~AGFAICharacter() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFAICharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFAICharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGFAICharacter, AGFAICharacter::StaticClass, TEXT("AGFAICharacter"), &Z_Registration_Info_UClass_AGFAICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGFAICharacter), 303511655U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFAICharacter_h_1986567725(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFAICharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFAICharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
