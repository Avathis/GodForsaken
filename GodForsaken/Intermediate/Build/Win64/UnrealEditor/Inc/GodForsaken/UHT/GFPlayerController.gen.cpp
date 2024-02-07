// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/Player/GFPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFPlayerController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFPlayerController();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFPlayerController_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFAbilitySystemComponent_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFHUDWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	DEFINE_FUNCTION(AGFPlayerController::execSetSpecialPercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpecialPercentage(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGFPlayerController::execSetStaminaPercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStaminaPercentage(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGFPlayerController::execSetHealthPercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHealthPercentage(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGFPlayerController::execGetGFAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGFAbilitySystemComponent**)Z_Param__Result=P_THIS->GetGFAbilitySystemComponent();
		P_NATIVE_END;
	}
	void AGFPlayerController::StaticRegisterNativesAGFPlayerController()
	{
		UClass* Class = AGFPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGFAbilitySystemComponent", &AGFPlayerController::execGetGFAbilitySystemComponent },
			{ "SetHealthPercentage", &AGFPlayerController::execSetHealthPercentage },
			{ "SetSpecialPercentage", &AGFPlayerController::execSetSpecialPercentage },
			{ "SetStaminaPercentage", &AGFPlayerController::execSetStaminaPercentage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics
	{
		struct GFPlayerController_eventGetGFAbilitySystemComponent_Parms
		{
			UGFAbilitySystemComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFPlayerController_eventGetGFAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UGFAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTIONS\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/GFPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTIONS" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFPlayerController, nullptr, "GetGFAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::GFPlayerController_eventGetGFAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::GFPlayerController_eventGetGFAbilitySystemComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGFPlayerController_SetHealthPercentage_Statics
	{
		struct GFPlayerController_eventSetHealthPercentage_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGFPlayerController_SetHealthPercentage_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFPlayerController_eventSetHealthPercentage_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFPlayerController_SetHealthPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFPlayerController_SetHealthPercentage_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFPlayerController_SetHealthPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/Player/GFPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFPlayerController_SetHealthPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFPlayerController, nullptr, "SetHealthPercentage", nullptr, nullptr, Z_Construct_UFunction_AGFPlayerController_SetHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFPlayerController_SetHealthPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFPlayerController_SetHealthPercentage_Statics::GFPlayerController_eventSetHealthPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFPlayerController_SetHealthPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFPlayerController_SetHealthPercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFPlayerController_SetHealthPercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFPlayerController_SetHealthPercentage_Statics::GFPlayerController_eventSetHealthPercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFPlayerController_SetHealthPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFPlayerController_SetHealthPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGFPlayerController_SetSpecialPercentage_Statics
	{
		struct GFPlayerController_eventSetSpecialPercentage_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGFPlayerController_SetSpecialPercentage_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFPlayerController_eventSetSpecialPercentage_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFPlayerController_SetSpecialPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFPlayerController_SetSpecialPercentage_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFPlayerController_SetSpecialPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/Player/GFPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFPlayerController_SetSpecialPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFPlayerController, nullptr, "SetSpecialPercentage", nullptr, nullptr, Z_Construct_UFunction_AGFPlayerController_SetSpecialPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFPlayerController_SetSpecialPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFPlayerController_SetSpecialPercentage_Statics::GFPlayerController_eventSetSpecialPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFPlayerController_SetSpecialPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFPlayerController_SetSpecialPercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFPlayerController_SetSpecialPercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFPlayerController_SetSpecialPercentage_Statics::GFPlayerController_eventSetSpecialPercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFPlayerController_SetSpecialPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFPlayerController_SetSpecialPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGFPlayerController_SetStaminaPercentage_Statics
	{
		struct GFPlayerController_eventSetStaminaPercentage_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGFPlayerController_SetStaminaPercentage_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFPlayerController_eventSetStaminaPercentage_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFPlayerController_SetStaminaPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFPlayerController_SetStaminaPercentage_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFPlayerController_SetStaminaPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/Player/GFPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFPlayerController_SetStaminaPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFPlayerController, nullptr, "SetStaminaPercentage", nullptr, nullptr, Z_Construct_UFunction_AGFPlayerController_SetStaminaPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFPlayerController_SetStaminaPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFPlayerController_SetStaminaPercentage_Statics::GFPlayerController_eventSetStaminaPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFPlayerController_SetStaminaPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFPlayerController_SetStaminaPercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFPlayerController_SetStaminaPercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFPlayerController_SetStaminaPercentage_Statics::GFPlayerController_eventSetStaminaPercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFPlayerController_SetStaminaPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFPlayerController_SetStaminaPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGFPlayerController);
	UClass* Z_Construct_UClass_AGFPlayerController_NoRegister()
	{
		return AGFPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AGFPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGFPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayerController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGFPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGFPlayerController_GetGFAbilitySystemComponent, "GetGFAbilitySystemComponent" }, // 4244410996
		{ &Z_Construct_UFunction_AGFPlayerController_SetHealthPercentage, "SetHealthPercentage" }, // 2735804734
		{ &Z_Construct_UFunction_AGFPlayerController_SetSpecialPercentage, "SetSpecialPercentage" }, // 1394113310
		{ &Z_Construct_UFunction_AGFPlayerController_SetStaminaPercentage, "SetStaminaPercentage" }, // 3047487564
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayerController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/GFPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/GFPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFPlayerController_Statics::NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "HUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTIES\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/GFPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTIES" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGFPlayerController_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGFPlayerController, HUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayerController_Statics::NewProp_HUDWidgetClass_MetaData), Z_Construct_UClass_AGFPlayerController_Statics::NewProp_HUDWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFPlayerController_Statics::NewProp_HUDWidget_MetaData[] = {
		{ "Category", "HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GFPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGFPlayerController_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGFPlayerController, HUDWidget), Z_Construct_UClass_UGFHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayerController_Statics::NewProp_HUDWidget_MetaData), Z_Construct_UClass_AGFPlayerController_Statics::NewProp_HUDWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGFPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGFPlayerController_Statics::NewProp_HUDWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGFPlayerController_Statics::NewProp_HUDWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGFPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGFPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGFPlayerController_Statics::ClassParams = {
		&AGFPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGFPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGFPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGFPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGFPlayerController()
	{
		if (!Z_Registration_Info_UClass_AGFPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGFPlayerController.OuterSingleton, Z_Construct_UClass_AGFPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGFPlayerController.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<AGFPlayerController>()
	{
		return AGFPlayerController::StaticClass();
	}
	AGFPlayerController::AGFPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGFPlayerController);
	AGFPlayerController::~AGFPlayerController() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGFPlayerController, AGFPlayerController::StaticClass, TEXT("AGFPlayerController"), &Z_Registration_Info_UClass_AGFPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGFPlayerController), 1086058594U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_1748673506(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_Player_GFPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
