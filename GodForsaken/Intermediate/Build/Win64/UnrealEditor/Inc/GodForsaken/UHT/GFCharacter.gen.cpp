// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/BaseClasses/Characters/GFCharacter.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFCharacter();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFCharacter_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFAbilitySystemComponent_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFAttributeSet_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFGameplayAbility_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	DEFINE_FUNCTION(AGFCharacter::execGetMaxSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGFCharacter::execGetSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGFCharacter::execGetSpecialPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpecialPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGFCharacter::execGetEnergyPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEnergyPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGFCharacter::execGetStaminaPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStaminaPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGFCharacter::execGetHealthPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGFCharacter::execGetMaxSpecial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxSpecial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGFCharacter::execGetSpecial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpecial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGFCharacter::execGetStaminaRegenRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStaminaRegenRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGFCharacter::execGetMaxStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGFCharacter::execGetStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGFCharacter::execGetEnergyRegenRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEnergyRegenRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGFCharacter::execGetMaxEnergy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxEnergy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGFCharacter::execGetEnergy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEnergy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGFCharacter::execGetHealthRegenRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthRegenRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGFCharacter::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGFCharacter::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGFCharacter::execGrantAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_AbilityLevel);
		P_GET_STRUCT(FGameplayTag,Z_Param_InputTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrantAbility(Z_Param_AbilityClass,Z_Param_AbilityLevel,Z_Param_InputTag);
		P_NATIVE_END;
	}
	void AGFCharacter::StaticRegisterNativesAGFCharacter()
	{
		UClass* Class = AGFCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEnergy", &AGFCharacter::execGetEnergy },
			{ "GetEnergyPercentage", &AGFCharacter::execGetEnergyPercentage },
			{ "GetEnergyRegenRate", &AGFCharacter::execGetEnergyRegenRate },
			{ "GetHealth", &AGFCharacter::execGetHealth },
			{ "GetHealthPercentage", &AGFCharacter::execGetHealthPercentage },
			{ "GetHealthRegenRate", &AGFCharacter::execGetHealthRegenRate },
			{ "GetMaxEnergy", &AGFCharacter::execGetMaxEnergy },
			{ "GetMaxHealth", &AGFCharacter::execGetMaxHealth },
			{ "GetMaxSpecial", &AGFCharacter::execGetMaxSpecial },
			{ "GetMaxSpeed", &AGFCharacter::execGetMaxSpeed },
			{ "GetMaxStamina", &AGFCharacter::execGetMaxStamina },
			{ "GetSpecial", &AGFCharacter::execGetSpecial },
			{ "GetSpecialPercentage", &AGFCharacter::execGetSpecialPercentage },
			{ "GetSpeed", &AGFCharacter::execGetSpeed },
			{ "GetStamina", &AGFCharacter::execGetStamina },
			{ "GetStaminaPercentage", &AGFCharacter::execGetStaminaPercentage },
			{ "GetStaminaRegenRate", &AGFCharacter::execGetStaminaRegenRate },
			{ "GrantAbility", &AGFCharacter::execGrantAbility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGFCharacter_GetEnergy_Statics
	{
		struct GFCharacter_eventGetEnergy_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGFCharacter_GetEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFCharacter_eventGetEnergy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFCharacter_GetEnergy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFCharacter_GetEnergy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFCharacter_GetEnergy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFCharacter_GetEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFCharacter, nullptr, "GetEnergy", nullptr, nullptr, Z_Construct_UFunction_AGFCharacter_GetEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFCharacter_GetEnergy_Statics::GFCharacter_eventGetEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFCharacter_GetEnergy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetEnergy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFCharacter_GetEnergy_Statics::GFCharacter_eventGetEnergy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFCharacter_GetEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFCharacter_GetEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGFCharacter_GetEnergyPercentage_Statics
	{
		struct GFCharacter_eventGetEnergyPercentage_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGFCharacter_GetEnergyPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFCharacter_eventGetEnergyPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFCharacter_GetEnergyPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFCharacter_GetEnergyPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFCharacter_GetEnergyPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFCharacter_GetEnergyPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFCharacter, nullptr, "GetEnergyPercentage", nullptr, nullptr, Z_Construct_UFunction_AGFCharacter_GetEnergyPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetEnergyPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFCharacter_GetEnergyPercentage_Statics::GFCharacter_eventGetEnergyPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetEnergyPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFCharacter_GetEnergyPercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetEnergyPercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFCharacter_GetEnergyPercentage_Statics::GFCharacter_eventGetEnergyPercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFCharacter_GetEnergyPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFCharacter_GetEnergyPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGFCharacter_GetEnergyRegenRate_Statics
	{
		struct GFCharacter_eventGetEnergyRegenRate_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGFCharacter_GetEnergyRegenRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFCharacter_eventGetEnergyRegenRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFCharacter_GetEnergyRegenRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFCharacter_GetEnergyRegenRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFCharacter_GetEnergyRegenRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFCharacter_GetEnergyRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFCharacter, nullptr, "GetEnergyRegenRate", nullptr, nullptr, Z_Construct_UFunction_AGFCharacter_GetEnergyRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetEnergyRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFCharacter_GetEnergyRegenRate_Statics::GFCharacter_eventGetEnergyRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetEnergyRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFCharacter_GetEnergyRegenRate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetEnergyRegenRate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFCharacter_GetEnergyRegenRate_Statics::GFCharacter_eventGetEnergyRegenRate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFCharacter_GetEnergyRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFCharacter_GetEnergyRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGFCharacter_GetHealth_Statics
	{
		struct GFCharacter_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGFCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFCharacter_GetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFCharacter_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFCharacter_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Attribute Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute Functions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFCharacter, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_AGFCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFCharacter_GetHealth_Statics::GFCharacter_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFCharacter_GetHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFCharacter_GetHealth_Statics::GFCharacter_eventGetHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFCharacter_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFCharacter_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGFCharacter_GetHealthPercentage_Statics
	{
		struct GFCharacter_eventGetHealthPercentage_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGFCharacter_GetHealthPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFCharacter_eventGetHealthPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFCharacter_GetHealthPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFCharacter_GetHealthPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFCharacter_GetHealthPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFCharacter_GetHealthPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFCharacter, nullptr, "GetHealthPercentage", nullptr, nullptr, Z_Construct_UFunction_AGFCharacter_GetHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetHealthPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFCharacter_GetHealthPercentage_Statics::GFCharacter_eventGetHealthPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetHealthPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFCharacter_GetHealthPercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetHealthPercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFCharacter_GetHealthPercentage_Statics::GFCharacter_eventGetHealthPercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFCharacter_GetHealthPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFCharacter_GetHealthPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGFCharacter_GetHealthRegenRate_Statics
	{
		struct GFCharacter_eventGetHealthRegenRate_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGFCharacter_GetHealthRegenRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFCharacter_eventGetHealthRegenRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFCharacter_GetHealthRegenRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFCharacter_GetHealthRegenRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFCharacter_GetHealthRegenRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFCharacter_GetHealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFCharacter, nullptr, "GetHealthRegenRate", nullptr, nullptr, Z_Construct_UFunction_AGFCharacter_GetHealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetHealthRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFCharacter_GetHealthRegenRate_Statics::GFCharacter_eventGetHealthRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetHealthRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFCharacter_GetHealthRegenRate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetHealthRegenRate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFCharacter_GetHealthRegenRate_Statics::GFCharacter_eventGetHealthRegenRate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFCharacter_GetHealthRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFCharacter_GetHealthRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGFCharacter_GetMaxEnergy_Statics
	{
		struct GFCharacter_eventGetMaxEnergy_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGFCharacter_GetMaxEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFCharacter_eventGetMaxEnergy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFCharacter_GetMaxEnergy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFCharacter_GetMaxEnergy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFCharacter_GetMaxEnergy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFCharacter_GetMaxEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFCharacter, nullptr, "GetMaxEnergy", nullptr, nullptr, Z_Construct_UFunction_AGFCharacter_GetMaxEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetMaxEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFCharacter_GetMaxEnergy_Statics::GFCharacter_eventGetMaxEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetMaxEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFCharacter_GetMaxEnergy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetMaxEnergy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFCharacter_GetMaxEnergy_Statics::GFCharacter_eventGetMaxEnergy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFCharacter_GetMaxEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFCharacter_GetMaxEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGFCharacter_GetMaxHealth_Statics
	{
		struct GFCharacter_eventGetMaxHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGFCharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFCharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFCharacter_GetMaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFCharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFCharacter_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFCharacter_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFCharacter, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_AGFCharacter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFCharacter_GetMaxHealth_Statics::GFCharacter_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFCharacter_GetMaxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetMaxHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFCharacter_GetMaxHealth_Statics::GFCharacter_eventGetMaxHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFCharacter_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFCharacter_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGFCharacter_GetMaxSpecial_Statics
	{
		struct GFCharacter_eventGetMaxSpecial_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGFCharacter_GetMaxSpecial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFCharacter_eventGetMaxSpecial_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFCharacter_GetMaxSpecial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFCharacter_GetMaxSpecial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFCharacter_GetMaxSpecial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFCharacter_GetMaxSpecial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFCharacter, nullptr, "GetMaxSpecial", nullptr, nullptr, Z_Construct_UFunction_AGFCharacter_GetMaxSpecial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetMaxSpecial_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFCharacter_GetMaxSpecial_Statics::GFCharacter_eventGetMaxSpecial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetMaxSpecial_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFCharacter_GetMaxSpecial_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetMaxSpecial_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFCharacter_GetMaxSpecial_Statics::GFCharacter_eventGetMaxSpecial_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFCharacter_GetMaxSpecial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFCharacter_GetMaxSpecial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGFCharacter_GetMaxSpeed_Statics
	{
		struct GFCharacter_eventGetMaxSpeed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGFCharacter_GetMaxSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFCharacter_eventGetMaxSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFCharacter_GetMaxSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFCharacter_GetMaxSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFCharacter_GetMaxSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFCharacter_GetMaxSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFCharacter, nullptr, "GetMaxSpeed", nullptr, nullptr, Z_Construct_UFunction_AGFCharacter_GetMaxSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetMaxSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFCharacter_GetMaxSpeed_Statics::GFCharacter_eventGetMaxSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetMaxSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFCharacter_GetMaxSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetMaxSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFCharacter_GetMaxSpeed_Statics::GFCharacter_eventGetMaxSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFCharacter_GetMaxSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFCharacter_GetMaxSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGFCharacter_GetMaxStamina_Statics
	{
		struct GFCharacter_eventGetMaxStamina_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGFCharacter_GetMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFCharacter_eventGetMaxStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFCharacter_GetMaxStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFCharacter_GetMaxStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFCharacter_GetMaxStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFCharacter_GetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFCharacter, nullptr, "GetMaxStamina", nullptr, nullptr, Z_Construct_UFunction_AGFCharacter_GetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetMaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFCharacter_GetMaxStamina_Statics::GFCharacter_eventGetMaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFCharacter_GetMaxStamina_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetMaxStamina_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFCharacter_GetMaxStamina_Statics::GFCharacter_eventGetMaxStamina_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFCharacter_GetMaxStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFCharacter_GetMaxStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGFCharacter_GetSpecial_Statics
	{
		struct GFCharacter_eventGetSpecial_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGFCharacter_GetSpecial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFCharacter_eventGetSpecial_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFCharacter_GetSpecial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFCharacter_GetSpecial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFCharacter_GetSpecial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFCharacter_GetSpecial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFCharacter, nullptr, "GetSpecial", nullptr, nullptr, Z_Construct_UFunction_AGFCharacter_GetSpecial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetSpecial_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFCharacter_GetSpecial_Statics::GFCharacter_eventGetSpecial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetSpecial_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFCharacter_GetSpecial_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetSpecial_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFCharacter_GetSpecial_Statics::GFCharacter_eventGetSpecial_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFCharacter_GetSpecial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFCharacter_GetSpecial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGFCharacter_GetSpecialPercentage_Statics
	{
		struct GFCharacter_eventGetSpecialPercentage_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGFCharacter_GetSpecialPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFCharacter_eventGetSpecialPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFCharacter_GetSpecialPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFCharacter_GetSpecialPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFCharacter_GetSpecialPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFCharacter_GetSpecialPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFCharacter, nullptr, "GetSpecialPercentage", nullptr, nullptr, Z_Construct_UFunction_AGFCharacter_GetSpecialPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetSpecialPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFCharacter_GetSpecialPercentage_Statics::GFCharacter_eventGetSpecialPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetSpecialPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFCharacter_GetSpecialPercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetSpecialPercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFCharacter_GetSpecialPercentage_Statics::GFCharacter_eventGetSpecialPercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFCharacter_GetSpecialPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFCharacter_GetSpecialPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGFCharacter_GetSpeed_Statics
	{
		struct GFCharacter_eventGetSpeed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGFCharacter_GetSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFCharacter_eventGetSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFCharacter_GetSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFCharacter_GetSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFCharacter_GetSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFCharacter_GetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFCharacter, nullptr, "GetSpeed", nullptr, nullptr, Z_Construct_UFunction_AGFCharacter_GetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFCharacter_GetSpeed_Statics::GFCharacter_eventGetSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFCharacter_GetSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFCharacter_GetSpeed_Statics::GFCharacter_eventGetSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFCharacter_GetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFCharacter_GetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGFCharacter_GetStamina_Statics
	{
		struct GFCharacter_eventGetStamina_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGFCharacter_GetStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFCharacter_eventGetStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFCharacter_GetStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFCharacter_GetStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFCharacter_GetStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFCharacter_GetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFCharacter, nullptr, "GetStamina", nullptr, nullptr, Z_Construct_UFunction_AGFCharacter_GetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFCharacter_GetStamina_Statics::GFCharacter_eventGetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFCharacter_GetStamina_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetStamina_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFCharacter_GetStamina_Statics::GFCharacter_eventGetStamina_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFCharacter_GetStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFCharacter_GetStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGFCharacter_GetStaminaPercentage_Statics
	{
		struct GFCharacter_eventGetStaminaPercentage_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGFCharacter_GetStaminaPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFCharacter_eventGetStaminaPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFCharacter_GetStaminaPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFCharacter_GetStaminaPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFCharacter_GetStaminaPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFCharacter_GetStaminaPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFCharacter, nullptr, "GetStaminaPercentage", nullptr, nullptr, Z_Construct_UFunction_AGFCharacter_GetStaminaPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetStaminaPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFCharacter_GetStaminaPercentage_Statics::GFCharacter_eventGetStaminaPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetStaminaPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFCharacter_GetStaminaPercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetStaminaPercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFCharacter_GetStaminaPercentage_Statics::GFCharacter_eventGetStaminaPercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFCharacter_GetStaminaPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFCharacter_GetStaminaPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGFCharacter_GetStaminaRegenRate_Statics
	{
		struct GFCharacter_eventGetStaminaRegenRate_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGFCharacter_GetStaminaRegenRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFCharacter_eventGetStaminaRegenRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFCharacter_GetStaminaRegenRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFCharacter_GetStaminaRegenRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFCharacter_GetStaminaRegenRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFCharacter_GetStaminaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFCharacter, nullptr, "GetStaminaRegenRate", nullptr, nullptr, Z_Construct_UFunction_AGFCharacter_GetStaminaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetStaminaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFCharacter_GetStaminaRegenRate_Statics::GFCharacter_eventGetStaminaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetStaminaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFCharacter_GetStaminaRegenRate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GetStaminaRegenRate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFCharacter_GetStaminaRegenRate_Statics::GFCharacter_eventGetStaminaRegenRate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFCharacter_GetStaminaRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFCharacter_GetStaminaRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGFCharacter_GrantAbility_Statics
	{
		struct GFCharacter_eventGrantAbility_Parms
		{
			TSubclassOf<UGFGameplayAbility>  AbilityClass;
			int32 AbilityLevel;
			FGameplayTag InputTag;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AGFCharacter_GrantAbility_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFCharacter_eventGrantAbility_Parms, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGFGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGFCharacter_GrantAbility_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFCharacter_eventGrantAbility_Parms, AbilityLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGFCharacter_GrantAbility_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFCharacter_eventGrantAbility_Parms, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGFCharacter_GrantAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFCharacter_GrantAbility_Statics::NewProp_AbilityClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFCharacter_GrantAbility_Statics::NewProp_AbilityLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGFCharacter_GrantAbility_Statics::NewProp_InputTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGFCharacter_GrantAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGFCharacter_GrantAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGFCharacter, nullptr, "GrantAbility", nullptr, nullptr, Z_Construct_UFunction_AGFCharacter_GrantAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GrantAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGFCharacter_GrantAbility_Statics::GFCharacter_eventGrantAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GrantAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGFCharacter_GrantAbility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGFCharacter_GrantAbility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGFCharacter_GrantAbility_Statics::GFCharacter_eventGrantAbility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGFCharacter_GrantAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGFCharacter_GrantAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGFCharacter);
	UClass* Z_Construct_UClass_AGFCharacter_NoRegister()
	{
		return AGFCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGFCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterStatusBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterStatusBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGFCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGFCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGFCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGFCharacter_GetEnergy, "GetEnergy" }, // 1277416499
		{ &Z_Construct_UFunction_AGFCharacter_GetEnergyPercentage, "GetEnergyPercentage" }, // 3487373588
		{ &Z_Construct_UFunction_AGFCharacter_GetEnergyRegenRate, "GetEnergyRegenRate" }, // 3486010478
		{ &Z_Construct_UFunction_AGFCharacter_GetHealth, "GetHealth" }, // 3233069237
		{ &Z_Construct_UFunction_AGFCharacter_GetHealthPercentage, "GetHealthPercentage" }, // 580752305
		{ &Z_Construct_UFunction_AGFCharacter_GetHealthRegenRate, "GetHealthRegenRate" }, // 2877866909
		{ &Z_Construct_UFunction_AGFCharacter_GetMaxEnergy, "GetMaxEnergy" }, // 2247766395
		{ &Z_Construct_UFunction_AGFCharacter_GetMaxHealth, "GetMaxHealth" }, // 4084958406
		{ &Z_Construct_UFunction_AGFCharacter_GetMaxSpecial, "GetMaxSpecial" }, // 2869036149
		{ &Z_Construct_UFunction_AGFCharacter_GetMaxSpeed, "GetMaxSpeed" }, // 1439117176
		{ &Z_Construct_UFunction_AGFCharacter_GetMaxStamina, "GetMaxStamina" }, // 1835031758
		{ &Z_Construct_UFunction_AGFCharacter_GetSpecial, "GetSpecial" }, // 2539436236
		{ &Z_Construct_UFunction_AGFCharacter_GetSpecialPercentage, "GetSpecialPercentage" }, // 771283946
		{ &Z_Construct_UFunction_AGFCharacter_GetSpeed, "GetSpeed" }, // 1678649901
		{ &Z_Construct_UFunction_AGFCharacter_GetStamina, "GetStamina" }, // 3010013251
		{ &Z_Construct_UFunction_AGFCharacter_GetStaminaPercentage, "GetStaminaPercentage" }, // 1689759402
		{ &Z_Construct_UFunction_AGFCharacter_GetStaminaRegenRate, "GetStaminaRegenRate" }, // 2711372280
		{ &Z_Construct_UFunction_AGFCharacter_GrantAbility, "GrantAbility" }, // 1114971667
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGFCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseClasses/Characters/GFCharacter.h" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFCharacter_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGFCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGFCharacter, AbilitySystemComponent), Z_Construct_UClass_UGFAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFCharacter_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_AGFCharacter_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFCharacter_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGFCharacter_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGFCharacter, AttributeSet), Z_Construct_UClass_UGFAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFCharacter_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UClass_AGFCharacter_Statics::NewProp_AttributeSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFCharacter_Statics::NewProp_CharacterStatusBar_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGFCharacter_Statics::NewProp_CharacterStatusBar = { "CharacterStatusBar", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGFCharacter, CharacterStatusBar), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFCharacter_Statics::NewProp_CharacterStatusBar_MetaData), Z_Construct_UClass_AGFCharacter_Statics::NewProp_CharacterStatusBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFCharacter_Statics::NewProp_MotionWarpingComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGFCharacter_Statics::NewProp_MotionWarpingComponent = { "MotionWarpingComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGFCharacter, MotionWarpingComponent), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFCharacter_Statics::NewProp_MotionWarpingComponent_MetaData), Z_Construct_UClass_AGFCharacter_Statics::NewProp_MotionWarpingComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGFCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGFCharacter_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGFCharacter_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGFCharacter_Statics::NewProp_CharacterStatusBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGFCharacter_Statics::NewProp_MotionWarpingComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGFCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AGFCharacter, IAbilitySystemInterface), false },  // 3195502011
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGFCharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGFCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGFCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGFCharacter_Statics::ClassParams = {
		&AGFCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGFCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGFCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGFCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGFCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGFCharacter()
	{
		if (!Z_Registration_Info_UClass_AGFCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGFCharacter.OuterSingleton, Z_Construct_UClass_AGFCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGFCharacter.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<AGFCharacter>()
	{
		return AGFCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGFCharacter);
	AGFCharacter::~AGFCharacter() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGFCharacter, AGFCharacter::StaticClass, TEXT("AGFCharacter"), &Z_Registration_Info_UClass_AGFCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGFCharacter), 1514792619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_1133991796(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
