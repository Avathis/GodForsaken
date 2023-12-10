// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/BaseClasses/Components/GFCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFCharacterMovementComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFCharacterMovementComponent();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFCharacterMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	void UGFCharacterMovementComponent::StaticRegisterNativesUGFCharacterMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFCharacterMovementComponent);
	UClass* Z_Construct_UClass_UGFCharacterMovementComponent_NoRegister()
	{
		return UGFCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGFCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFCharacterMovementComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BaseClasses/Components/GFCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/BaseClasses/Components/GFCharacterMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFCharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFCharacterMovementComponent_Statics::ClassParams = {
		&UGFCharacterMovementComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFCharacterMovementComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGFCharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UGFCharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UGFCharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFCharacterMovementComponent.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFCharacterMovementComponent>()
	{
		return UGFCharacterMovementComponent::StaticClass();
	}
	UGFCharacterMovementComponent::UGFCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFCharacterMovementComponent);
	UGFCharacterMovementComponent::~UGFCharacterMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Components_GFCharacterMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Components_GFCharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFCharacterMovementComponent, UGFCharacterMovementComponent::StaticClass, TEXT("UGFCharacterMovementComponent"), &Z_Registration_Info_UClass_UGFCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFCharacterMovementComponent), 698122575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Components_GFCharacterMovementComponent_h_1126767081(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Components_GFCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Components_GFCharacterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
