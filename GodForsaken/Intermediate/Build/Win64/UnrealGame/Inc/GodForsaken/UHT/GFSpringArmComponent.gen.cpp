// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/BaseClasses/Components/GFSpringArmComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFSpringArmComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFSpringArmComponent();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFSpringArmComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	void UGFSpringArmComponent::StaticRegisterNativesUGFSpringArmComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFSpringArmComponent);
	UClass* Z_Construct_UClass_UGFSpringArmComponent_NoRegister()
	{
		return UGFSpringArmComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGFSpringArmComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFSpringArmComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpringArmComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFSpringArmComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFSpringArmComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "BaseClasses/Components/GFSpringArmComponent.h" },
		{ "ModuleRelativePath", "Public/BaseClasses/Components/GFSpringArmComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFSpringArmComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFSpringArmComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFSpringArmComponent_Statics::ClassParams = {
		&UGFSpringArmComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFSpringArmComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFSpringArmComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGFSpringArmComponent()
	{
		if (!Z_Registration_Info_UClass_UGFSpringArmComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFSpringArmComponent.OuterSingleton, Z_Construct_UClass_UGFSpringArmComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFSpringArmComponent.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFSpringArmComponent>()
	{
		return UGFSpringArmComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFSpringArmComponent);
	UGFSpringArmComponent::~UGFSpringArmComponent() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Components_GFSpringArmComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Components_GFSpringArmComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFSpringArmComponent, UGFSpringArmComponent::StaticClass, TEXT("UGFSpringArmComponent"), &Z_Registration_Info_UClass_UGFSpringArmComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFSpringArmComponent), 3924236924U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Components_GFSpringArmComponent_h_3985641862(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Components_GFSpringArmComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Components_GFSpringArmComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
