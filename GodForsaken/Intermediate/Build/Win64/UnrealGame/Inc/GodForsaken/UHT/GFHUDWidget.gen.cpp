// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/UI/GFHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFHUDWidget() {}
// Cross Module References
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFHUDWidget();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFHUDWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	struct GFHUDWidget_eventSetHealthPercentage_Parms
	{
		float NewValue;
	};
	struct GFHUDWidget_eventSetMaxHealth_Parms
	{
		float NewValue;
	};
	struct GFHUDWidget_eventSetMaxSpecial_Parms
	{
		float NewValue;
	};
	struct GFHUDWidget_eventSetMaxStamina_Parms
	{
		float NewValue;
	};
	struct GFHUDWidget_eventSetSpecialPercentage_Parms
	{
		float NewValue;
	};
	struct GFHUDWidget_eventSetStaminaPercentage_Parms
	{
		float NewValue;
	};
	static FName NAME_UGFHUDWidget_SetHealthPercentage = FName(TEXT("SetHealthPercentage"));
	void UGFHUDWidget::SetHealthPercentage(float NewValue)
	{
		GFHUDWidget_eventSetHealthPercentage_Parms Parms;
		Parms.NewValue=NewValue;
		ProcessEvent(FindFunctionChecked(NAME_UGFHUDWidget_SetHealthPercentage),&Parms);
	}
	static FName NAME_UGFHUDWidget_SetMaxHealth = FName(TEXT("SetMaxHealth"));
	void UGFHUDWidget::SetMaxHealth(float NewValue)
	{
		GFHUDWidget_eventSetMaxHealth_Parms Parms;
		Parms.NewValue=NewValue;
		ProcessEvent(FindFunctionChecked(NAME_UGFHUDWidget_SetMaxHealth),&Parms);
	}
	static FName NAME_UGFHUDWidget_SetMaxSpecial = FName(TEXT("SetMaxSpecial"));
	void UGFHUDWidget::SetMaxSpecial(float NewValue)
	{
		GFHUDWidget_eventSetMaxSpecial_Parms Parms;
		Parms.NewValue=NewValue;
		ProcessEvent(FindFunctionChecked(NAME_UGFHUDWidget_SetMaxSpecial),&Parms);
	}
	static FName NAME_UGFHUDWidget_SetMaxStamina = FName(TEXT("SetMaxStamina"));
	void UGFHUDWidget::SetMaxStamina(float NewValue)
	{
		GFHUDWidget_eventSetMaxStamina_Parms Parms;
		Parms.NewValue=NewValue;
		ProcessEvent(FindFunctionChecked(NAME_UGFHUDWidget_SetMaxStamina),&Parms);
	}
	static FName NAME_UGFHUDWidget_SetSpecialPercentage = FName(TEXT("SetSpecialPercentage"));
	void UGFHUDWidget::SetSpecialPercentage(float NewValue)
	{
		GFHUDWidget_eventSetSpecialPercentage_Parms Parms;
		Parms.NewValue=NewValue;
		ProcessEvent(FindFunctionChecked(NAME_UGFHUDWidget_SetSpecialPercentage),&Parms);
	}
	static FName NAME_UGFHUDWidget_SetStaminaPercentage = FName(TEXT("SetStaminaPercentage"));
	void UGFHUDWidget::SetStaminaPercentage(float NewValue)
	{
		GFHUDWidget_eventSetStaminaPercentage_Parms Parms;
		Parms.NewValue=NewValue;
		ProcessEvent(FindFunctionChecked(NAME_UGFHUDWidget_SetStaminaPercentage),&Parms);
	}
	void UGFHUDWidget::StaticRegisterNativesUGFHUDWidget()
	{
	}
	struct Z_Construct_UFunction_UGFHUDWidget_SetHealthPercentage_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGFHUDWidget_SetHealthPercentage_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFHUDWidget_eventSetHealthPercentage_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFHUDWidget_SetHealthPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFHUDWidget_SetHealthPercentage_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFHUDWidget_SetHealthPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GFHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFHUDWidget_SetHealthPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFHUDWidget, nullptr, "SetHealthPercentage", nullptr, nullptr, Z_Construct_UFunction_UGFHUDWidget_SetHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFHUDWidget_SetHealthPercentage_Statics::PropPointers), sizeof(GFHUDWidget_eventSetHealthPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFHUDWidget_SetHealthPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFHUDWidget_SetHealthPercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFHUDWidget_SetHealthPercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(GFHUDWidget_eventSetHealthPercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFHUDWidget_SetHealthPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFHUDWidget_SetHealthPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFHUDWidget_SetMaxHealth_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGFHUDWidget_SetMaxHealth_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFHUDWidget_eventSetMaxHealth_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFHUDWidget_SetMaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFHUDWidget_SetMaxHealth_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFHUDWidget_SetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GFHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFHUDWidget_SetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFHUDWidget, nullptr, "SetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UGFHUDWidget_SetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFHUDWidget_SetMaxHealth_Statics::PropPointers), sizeof(GFHUDWidget_eventSetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFHUDWidget_SetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFHUDWidget_SetMaxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFHUDWidget_SetMaxHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(GFHUDWidget_eventSetMaxHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFHUDWidget_SetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFHUDWidget_SetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFHUDWidget_SetMaxSpecial_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGFHUDWidget_SetMaxSpecial_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFHUDWidget_eventSetMaxSpecial_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFHUDWidget_SetMaxSpecial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFHUDWidget_SetMaxSpecial_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFHUDWidget_SetMaxSpecial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GFHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFHUDWidget_SetMaxSpecial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFHUDWidget, nullptr, "SetMaxSpecial", nullptr, nullptr, Z_Construct_UFunction_UGFHUDWidget_SetMaxSpecial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFHUDWidget_SetMaxSpecial_Statics::PropPointers), sizeof(GFHUDWidget_eventSetMaxSpecial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFHUDWidget_SetMaxSpecial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFHUDWidget_SetMaxSpecial_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFHUDWidget_SetMaxSpecial_Statics::PropPointers) < 2048);
	static_assert(sizeof(GFHUDWidget_eventSetMaxSpecial_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFHUDWidget_SetMaxSpecial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFHUDWidget_SetMaxSpecial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFHUDWidget_SetMaxStamina_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGFHUDWidget_SetMaxStamina_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFHUDWidget_eventSetMaxStamina_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFHUDWidget_SetMaxStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFHUDWidget_SetMaxStamina_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFHUDWidget_SetMaxStamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GFHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFHUDWidget_SetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFHUDWidget, nullptr, "SetMaxStamina", nullptr, nullptr, Z_Construct_UFunction_UGFHUDWidget_SetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFHUDWidget_SetMaxStamina_Statics::PropPointers), sizeof(GFHUDWidget_eventSetMaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFHUDWidget_SetMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFHUDWidget_SetMaxStamina_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFHUDWidget_SetMaxStamina_Statics::PropPointers) < 2048);
	static_assert(sizeof(GFHUDWidget_eventSetMaxStamina_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFHUDWidget_SetMaxStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFHUDWidget_SetMaxStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFHUDWidget_SetSpecialPercentage_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGFHUDWidget_SetSpecialPercentage_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFHUDWidget_eventSetSpecialPercentage_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFHUDWidget_SetSpecialPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFHUDWidget_SetSpecialPercentage_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFHUDWidget_SetSpecialPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GFHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFHUDWidget_SetSpecialPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFHUDWidget, nullptr, "SetSpecialPercentage", nullptr, nullptr, Z_Construct_UFunction_UGFHUDWidget_SetSpecialPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFHUDWidget_SetSpecialPercentage_Statics::PropPointers), sizeof(GFHUDWidget_eventSetSpecialPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFHUDWidget_SetSpecialPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFHUDWidget_SetSpecialPercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFHUDWidget_SetSpecialPercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(GFHUDWidget_eventSetSpecialPercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFHUDWidget_SetSpecialPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFHUDWidget_SetSpecialPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFHUDWidget_SetStaminaPercentage_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGFHUDWidget_SetStaminaPercentage_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFHUDWidget_eventSetStaminaPercentage_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFHUDWidget_SetStaminaPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFHUDWidget_SetStaminaPercentage_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFHUDWidget_SetStaminaPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GFHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFHUDWidget_SetStaminaPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFHUDWidget, nullptr, "SetStaminaPercentage", nullptr, nullptr, Z_Construct_UFunction_UGFHUDWidget_SetStaminaPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFHUDWidget_SetStaminaPercentage_Statics::PropPointers), sizeof(GFHUDWidget_eventSetStaminaPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFHUDWidget_SetStaminaPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFHUDWidget_SetStaminaPercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFHUDWidget_SetStaminaPercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(GFHUDWidget_eventSetStaminaPercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFHUDWidget_SetStaminaPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFHUDWidget_SetStaminaPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFHUDWidget);
	UClass* Z_Construct_UClass_UGFHUDWidget_NoRegister()
	{
		return UGFHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGFHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFHUDWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGFHUDWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGFHUDWidget_SetHealthPercentage, "SetHealthPercentage" }, // 1054569413
		{ &Z_Construct_UFunction_UGFHUDWidget_SetMaxHealth, "SetMaxHealth" }, // 1948040453
		{ &Z_Construct_UFunction_UGFHUDWidget_SetMaxSpecial, "SetMaxSpecial" }, // 1509847553
		{ &Z_Construct_UFunction_UGFHUDWidget_SetMaxStamina, "SetMaxStamina" }, // 3956955840
		{ &Z_Construct_UFunction_UGFHUDWidget_SetSpecialPercentage, "SetSpecialPercentage" }, // 4254732387
		{ &Z_Construct_UFunction_UGFHUDWidget_SetStaminaPercentage, "SetStaminaPercentage" }, // 640427605
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFHUDWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFHUDWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/GFHUDWidget.h" },
		{ "ModuleRelativePath", "Public/UI/GFHUDWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFHUDWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFHUDWidget_Statics::ClassParams = {
		&UGFHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFHUDWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGFHUDWidget()
	{
		if (!Z_Registration_Info_UClass_UGFHUDWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFHUDWidget.OuterSingleton, Z_Construct_UClass_UGFHUDWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFHUDWidget.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFHUDWidget>()
	{
		return UGFHUDWidget::StaticClass();
	}
	UGFHUDWidget::UGFHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFHUDWidget);
	UGFHUDWidget::~UGFHUDWidget() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_UI_GFHUDWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_UI_GFHUDWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFHUDWidget, UGFHUDWidget::StaticClass, TEXT("UGFHUDWidget"), &Z_Registration_Info_UClass_UGFHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFHUDWidget), 2537927904U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_UI_GFHUDWidget_h_3997579277(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_UI_GFHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_UI_GFHUDWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
