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
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFCharacter();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFPlayableCharacter();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFPlayableCharacter_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFPlayerController_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFInputConfig_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFSpringArmComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	static FName NAME_AGFPlayableCharacter_InitializeAbilities = FName(TEXT("InitializeAbilities"));
	void AGFPlayableCharacter::InitializeAbilities()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGFPlayableCharacter_InitializeAbilities),NULL);
	}
	void AGFPlayableCharacter::StaticRegisterNativesAGFPlayableCharacter()
	{
	}
	struct Z_Construct_UFunction_AGFPlayableCharacter_InitializeAbilities_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFPlayableCharacter_InitializeAbilities_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFPlayableCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFPlayableCharacter_InitializeAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFPlayableCharacter, nullptr, "InitializeAbilities", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFPlayableCharacter_InitializeAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFPlayableCharacter_InitializeAbilities_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGFPlayableCharacter_InitializeAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFPlayableCharacter_InitializeAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGFPlayableCharacter);
	UClass* Z_Construct_UClass_AGFPlayableCharacter_NoRegister()
	{
		return AGFPlayableCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGFPlayableCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CineCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CineCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGFPlayableCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGFCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayableCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGFPlayableCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGFPlayableCharacter_InitializeAbilities, "InitializeAbilities" }, // 3359486334
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayableCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFPlayableCharacter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseClasses/Characters/GFPlayableCharacter.h" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFPlayableCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_InputConfig_MetaData[] = {
		{ "Category", "GFPlayableCharacter" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFPlayableCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGFPlayableCharacter, InputConfig), Z_Construct_UClass_UGFInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_InputConfig_MetaData), Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_InputConfig_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_PlayerController_MetaData[] = {
		{ "Category", "Controller" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFPlayableCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGFPlayableCharacter, PlayerController), Z_Construct_UClass_AGFPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_PlayerController_MetaData), Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_PlayerController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFPlayableCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGFPlayableCharacter, SpringArmComponent), Z_Construct_UClass_UGFSpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_SpringArmComponent_MetaData), Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_SpringArmComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFPlayableCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGFPlayableCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_CameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_CineCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFPlayableCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_CineCamera = { "CineCamera", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGFPlayableCharacter, CineCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_CineCamera_MetaData), Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_CineCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFPlayableCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGFPlayableCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGFPlayableCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_InputConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_SpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_CineCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGFPlayableCharacter_Statics::NewProp_DefaultMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGFPlayableCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGFPlayableCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGFPlayableCharacter_Statics::ClassParams = {
		&AGFPlayableCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGFPlayableCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayableCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayableCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGFPlayableCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayableCharacter_Statics::PropPointers) < 2048);
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGFPlayableCharacter);
	AGFPlayableCharacter::~AGFPlayableCharacter() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFPlayableCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFPlayableCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGFPlayableCharacter, AGFPlayableCharacter::StaticClass, TEXT("AGFPlayableCharacter"), &Z_Registration_Info_UClass_AGFPlayableCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGFPlayableCharacter), 735018341U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFPlayableCharacter_h_2376164782(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFPlayableCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFPlayableCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
