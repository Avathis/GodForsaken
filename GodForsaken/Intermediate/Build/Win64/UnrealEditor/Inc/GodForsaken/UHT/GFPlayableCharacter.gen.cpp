// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/BaseClasses/Characters/GFPlayableCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFPlayableCharacter() {}
// Cross Module References
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFCharacter();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFPlayableCharacter();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFPlayableCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	void AGFPlayableCharacter::StaticRegisterNativesAGFPlayableCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGFPlayableCharacter);
	UClass* Z_Construct_UClass_AGFPlayableCharacter_NoRegister()
	{
		return AGFPlayableCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGFPlayableCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGFPlayableCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGFCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayableCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFPlayableCharacter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseClasses/Characters/GFPlayableCharacter.h" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFPlayableCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGFPlayableCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGFPlayableCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGFPlayableCharacter_Statics::ClassParams = {
		&AGFPlayableCharacter::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayableCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGFPlayableCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGFPlayableCharacter()
	{
		if (!Z_Registration_Info_UClass_AGFPlayableCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGFPlayableCharacter.OuterSingleton, Z_Construct_UClass_AGFPlayableCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGFPlayableCharacter.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<AGFPlayableCharacter>()
	{
		return AGFPlayableCharacter::StaticClass();
	}
	AGFPlayableCharacter::AGFPlayableCharacter() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGFPlayableCharacter);
	AGFPlayableCharacter::~AGFPlayableCharacter() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFPlayableCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFPlayableCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGFPlayableCharacter, AGFPlayableCharacter::StaticClass, TEXT("AGFPlayableCharacter"), &Z_Registration_Info_UClass_AGFPlayableCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGFPlayableCharacter), 4081589760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFPlayableCharacter_h_560445512(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFPlayableCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFPlayableCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
