// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/BaseClasses/Animation/GFAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFPlayableCharacter_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFAnimInstance();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	void UGFAnimInstance::StaticRegisterNativesUGFAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFAnimInstance);
	UClass* Z_Construct_UClass_UGFAnimInstance_NoRegister()
	{
		return UGFAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UGFAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAnimInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFAnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "BaseClasses/Animation/GFAnimInstance.h" },
		{ "ModuleRelativePath", "Public/BaseClasses/Animation/GFAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFAnimInstance_Statics::NewProp_MainCharacter_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/BaseClasses/Animation/GFAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGFAnimInstance_Statics::NewProp_MainCharacter = { "MainCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFAnimInstance, MainCharacter), Z_Construct_UClass_AGFPlayableCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAnimInstance_Statics::NewProp_MainCharacter_MetaData), Z_Construct_UClass_UGFAnimInstance_Statics::NewProp_MainCharacter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGFAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFAnimInstance_Statics::NewProp_MainCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFAnimInstance_Statics::ClassParams = {
		&UGFAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGFAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGFAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGFAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UGFAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFAnimInstance.OuterSingleton, Z_Construct_UClass_UGFAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFAnimInstance.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFAnimInstance>()
	{
		return UGFAnimInstance::StaticClass();
	}
	UGFAnimInstance::UGFAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFAnimInstance);
	UGFAnimInstance::~UGFAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Animation_GFAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Animation_GFAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFAnimInstance, UGFAnimInstance::StaticClass, TEXT("UGFAnimInstance"), &Z_Registration_Info_UClass_UGFAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFAnimInstance), 1331067527U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Animation_GFAnimInstance_h_1290914118(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Animation_GFAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Animation_GFAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
