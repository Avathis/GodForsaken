// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/GameplayAbilitySystem/GFGameplayAbility.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayTagContainer.h"
#include "GodForsaken/Public/GameplayAbilitySystem/GFAbilityTypes.h"
#include "ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFGameplayAbility() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFCharacter_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFPlayerController_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFAbilitySystemComponent_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFCharacterMovementComponent_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFGameplayAbility();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFGameplayAbility_NoRegister();
	GODFORSAKEN_API UEnum* Z_Construct_UEnum_GodForsaken_AbilityUpgrades();
	GODFORSAKEN_API UEnum* Z_Construct_UEnum_GodForsaken_EGFAbilityActivationGroup();
	GODFORSAKEN_API UEnum* Z_Construct_UEnum_GodForsaken_EGFAbilityActivationPolicy();
	GODFORSAKEN_API UScriptStruct* Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGFAbilityActivationPolicy;
	static UEnum* EGFAbilityActivationPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGFAbilityActivationPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGFAbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GodForsaken_EGFAbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_GodForsaken(), TEXT("EGFAbilityActivationPolicy"));
		}
		return Z_Registration_Info_UEnum_EGFAbilityActivationPolicy.OuterSingleton;
	}
	template<> GODFORSAKEN_API UEnum* StaticEnum<EGFAbilityActivationPolicy>()
	{
		return EGFAbilityActivationPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_GodForsaken_EGFAbilityActivationPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GodForsaken_EGFAbilityActivationPolicy_Statics::Enumerators[] = {
		{ "EGFAbilityActivationPolicy::OnInputTriggered", (int64)EGFAbilityActivationPolicy::OnInputTriggered },
		{ "EGFAbilityActivationPolicy::WhileInputActive", (int64)EGFAbilityActivationPolicy::WhileInputActive },
		{ "EGFAbilityActivationPolicy::OnSpawn", (int64)EGFAbilityActivationPolicy::OnSpawn },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GodForsaken_EGFAbilityActivationPolicy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayAbility.h" },
		{ "OnInputTriggered.Name", "EGFAbilityActivationPolicy::OnInputTriggered" },
		{ "OnSpawn.Name", "EGFAbilityActivationPolicy::OnSpawn" },
		{ "WhileInputActive.Name", "EGFAbilityActivationPolicy::WhileInputActive" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GodForsaken_EGFAbilityActivationPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GodForsaken,
		nullptr,
		"EGFAbilityActivationPolicy",
		"EGFAbilityActivationPolicy",
		Z_Construct_UEnum_GodForsaken_EGFAbilityActivationPolicy_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GodForsaken_EGFAbilityActivationPolicy_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GodForsaken_EGFAbilityActivationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GodForsaken_EGFAbilityActivationPolicy_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GodForsaken_EGFAbilityActivationPolicy()
	{
		if (!Z_Registration_Info_UEnum_EGFAbilityActivationPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGFAbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_GodForsaken_EGFAbilityActivationPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGFAbilityActivationPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGFAbilityActivationGroup;
	static UEnum* EGFAbilityActivationGroup_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGFAbilityActivationGroup.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGFAbilityActivationGroup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GodForsaken_EGFAbilityActivationGroup, (UObject*)Z_Construct_UPackage__Script_GodForsaken(), TEXT("EGFAbilityActivationGroup"));
		}
		return Z_Registration_Info_UEnum_EGFAbilityActivationGroup.OuterSingleton;
	}
	template<> GODFORSAKEN_API UEnum* StaticEnum<EGFAbilityActivationGroup>()
	{
		return EGFAbilityActivationGroup_StaticEnum();
	}
	struct Z_Construct_UEnum_GodForsaken_EGFAbilityActivationGroup_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GodForsaken_EGFAbilityActivationGroup_Statics::Enumerators[] = {
		{ "EGFAbilityActivationGroup::Independent", (int64)EGFAbilityActivationGroup::Independent },
		{ "EGFAbilityActivationGroup::Exclusive_Replaceable", (int64)EGFAbilityActivationGroup::Exclusive_Replaceable },
		{ "EGFAbilityActivationGroup::Exclusive_Blocking", (int64)EGFAbilityActivationGroup::Exclusive_Blocking },
		{ "EGFAbilityActivationGroup::MAX", (int64)EGFAbilityActivationGroup::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GodForsaken_EGFAbilityActivationGroup_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Exclusive_Blocking.Name", "EGFAbilityActivationGroup::Exclusive_Blocking" },
		{ "Exclusive_Replaceable.Name", "EGFAbilityActivationGroup::Exclusive_Replaceable" },
		{ "Independent.Name", "EGFAbilityActivationGroup::Independent" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EGFAbilityActivationGroup::MAX" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GodForsaken_EGFAbilityActivationGroup_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GodForsaken,
		nullptr,
		"EGFAbilityActivationGroup",
		"EGFAbilityActivationGroup",
		Z_Construct_UEnum_GodForsaken_EGFAbilityActivationGroup_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GodForsaken_EGFAbilityActivationGroup_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GodForsaken_EGFAbilityActivationGroup_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GodForsaken_EGFAbilityActivationGroup_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GodForsaken_EGFAbilityActivationGroup()
	{
		if (!Z_Registration_Info_UEnum_EGFAbilityActivationGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGFAbilityActivationGroup.InnerSingleton, Z_Construct_UEnum_GodForsaken_EGFAbilityActivationGroup_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGFAbilityActivationGroup.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AbilityUpgrades;
	static UEnum* AbilityUpgrades_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AbilityUpgrades.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AbilityUpgrades.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GodForsaken_AbilityUpgrades, (UObject*)Z_Construct_UPackage__Script_GodForsaken(), TEXT("AbilityUpgrades"));
		}
		return Z_Registration_Info_UEnum_AbilityUpgrades.OuterSingleton;
	}
	template<> GODFORSAKEN_API UEnum* StaticEnum<AbilityUpgrades>()
	{
		return AbilityUpgrades_StaticEnum();
	}
	struct Z_Construct_UEnum_GodForsaken_AbilityUpgrades_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GodForsaken_AbilityUpgrades_Statics::Enumerators[] = {
		{ "AbilityUpgrades::Normal", (int64)AbilityUpgrades::Normal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GodForsaken_AbilityUpgrades_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayAbility.h" },
		{ "Normal.Name", "AbilityUpgrades::Normal" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GodForsaken_AbilityUpgrades_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GodForsaken,
		nullptr,
		"AbilityUpgrades",
		"AbilityUpgrades",
		Z_Construct_UEnum_GodForsaken_AbilityUpgrades_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GodForsaken_AbilityUpgrades_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GodForsaken_AbilityUpgrades_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GodForsaken_AbilityUpgrades_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GodForsaken_AbilityUpgrades()
	{
		if (!Z_Registration_Info_UEnum_AbilityUpgrades.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AbilityUpgrades.InnerSingleton, Z_Construct_UEnum_GodForsaken_AbilityUpgrades_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AbilityUpgrades.InnerSingleton;
	}
	DEFINE_FUNCTION(UGFGameplayAbility::execGetGFCharacterMovementComponentFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGFCharacterMovementComponent**)Z_Param__Result=P_THIS->GetGFCharacterMovementComponentFromActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFGameplayAbility::execGetGFPlayerControllerFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGFPlayerController**)Z_Param__Result=P_THIS->GetGFPlayerControllerFromActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFGameplayAbility::execGetGFAbilitySystemComponentFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGFAbilitySystemComponent**)Z_Param__Result=P_THIS->GetGFAbilitySystemComponentFromActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFGameplayAbility::execGetGFCharacterFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGFCharacter**)Z_Param__Result=P_THIS->GetGFCharacterFromActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFGameplayAbility::execK2_GetGFActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGFGameplayAbilityActorInfo*)Z_Param__Result=P_THIS->K2_GetGFActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFGameplayAbility::execGetGrantedByEffectHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FActiveGameplayEffectHandle*)Z_Param__Result=P_THIS->GetGrantedByEffectHandle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFGameplayAbility::execGetGFCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGFCharacter**)Z_Param__Result=P_THIS->GetGFCharacter();
		P_NATIVE_END;
	}
	void UGFGameplayAbility::StaticRegisterNativesUGFGameplayAbility()
	{
		UClass* Class = UGFGameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGFAbilitySystemComponentFromActorInfo", &UGFGameplayAbility::execGetGFAbilitySystemComponentFromActorInfo },
			{ "GetGFCharacter", &UGFGameplayAbility::execGetGFCharacter },
			{ "GetGFCharacterFromActorInfo", &UGFGameplayAbility::execGetGFCharacterFromActorInfo },
			{ "GetGFCharacterMovementComponentFromActorInfo", &UGFGameplayAbility::execGetGFCharacterMovementComponentFromActorInfo },
			{ "GetGFPlayerControllerFromActorInfo", &UGFGameplayAbility::execGetGFPlayerControllerFromActorInfo },
			{ "GetGrantedByEffectHandle", &UGFGameplayAbility::execGetGrantedByEffectHandle },
			{ "K2_GetGFActorInfo", &UGFGameplayAbility::execK2_GetGFActorInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGFGameplayAbility_GetGFAbilitySystemComponentFromActorInfo_Statics
	{
		struct GFGameplayAbility_eventGetGFAbilitySystemComponentFromActorInfo_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFGameplayAbility_GetGFAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGFGameplayAbility_GetGFAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFGameplayAbility_eventGetGFAbilitySystemComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UGFAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_GetGFAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGFGameplayAbility_GetGFAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFGameplayAbility_GetGFAbilitySystemComponentFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFGameplayAbility_GetGFAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFGameplayAbility_GetGFAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFGameplayAbility_GetGFAbilitySystemComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFGameplayAbility, nullptr, "GetGFAbilitySystemComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UGFGameplayAbility_GetGFAbilitySystemComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_GetGFAbilitySystemComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGFGameplayAbility_GetGFAbilitySystemComponentFromActorInfo_Statics::GFGameplayAbility_eventGetGFAbilitySystemComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_GetGFAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFGameplayAbility_GetGFAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_GetGFAbilitySystemComponentFromActorInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGFGameplayAbility_GetGFAbilitySystemComponentFromActorInfo_Statics::GFGameplayAbility_eventGetGFAbilitySystemComponentFromActorInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFGameplayAbility_GetGFAbilitySystemComponentFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFGameplayAbility_GetGFAbilitySystemComponentFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacter_Statics
	{
		struct GFGameplayAbility_eventGetGFCharacter_Parms
		{
			AGFCharacter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFGameplayAbility_eventGetGFCharacter_Parms, ReturnValue), Z_Construct_UClass_AGFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFGameplayAbility, nullptr, "GetGFCharacter", nullptr, nullptr, Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacter_Statics::GFGameplayAbility_eventGetGFCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacter_Statics::GFGameplayAbility_eventGetGFCharacter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterFromActorInfo_Statics
	{
		struct GFGameplayAbility_eventGetGFCharacterFromActorInfo_Parms
		{
			AGFCharacter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFGameplayAbility_eventGetGFCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AGFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFGameplayAbility, nullptr, "GetGFCharacterFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterFromActorInfo_Statics::GFGameplayAbility_eventGetGFCharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterFromActorInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterFromActorInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterFromActorInfo_Statics::GFGameplayAbility_eventGetGFCharacterFromActorInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterMovementComponentFromActorInfo_Statics
	{
		struct GFGameplayAbility_eventGetGFCharacterMovementComponentFromActorInfo_Parms
		{
			UGFCharacterMovementComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterMovementComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterMovementComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFGameplayAbility_eventGetGFCharacterMovementComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UGFCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterMovementComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterMovementComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterMovementComponentFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterMovementComponentFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterMovementComponentFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterMovementComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFGameplayAbility, nullptr, "GetGFCharacterMovementComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterMovementComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterMovementComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterMovementComponentFromActorInfo_Statics::GFGameplayAbility_eventGetGFCharacterMovementComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterMovementComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterMovementComponentFromActorInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterMovementComponentFromActorInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterMovementComponentFromActorInfo_Statics::GFGameplayAbility_eventGetGFCharacterMovementComponentFromActorInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterMovementComponentFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterMovementComponentFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFGameplayAbility_GetGFPlayerControllerFromActorInfo_Statics
	{
		struct GFGameplayAbility_eventGetGFPlayerControllerFromActorInfo_Parms
		{
			AGFPlayerController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGFGameplayAbility_GetGFPlayerControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFGameplayAbility_eventGetGFPlayerControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AGFPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFGameplayAbility_GetGFPlayerControllerFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFGameplayAbility_GetGFPlayerControllerFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFGameplayAbility_GetGFPlayerControllerFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFGameplayAbility_GetGFPlayerControllerFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFGameplayAbility, nullptr, "GetGFPlayerControllerFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UGFGameplayAbility_GetGFPlayerControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_GetGFPlayerControllerFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGFGameplayAbility_GetGFPlayerControllerFromActorInfo_Statics::GFGameplayAbility_eventGetGFPlayerControllerFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_GetGFPlayerControllerFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFGameplayAbility_GetGFPlayerControllerFromActorInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_GetGFPlayerControllerFromActorInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGFGameplayAbility_GetGFPlayerControllerFromActorInfo_Statics::GFGameplayAbility_eventGetGFPlayerControllerFromActorInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFGameplayAbility_GetGFPlayerControllerFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFGameplayAbility_GetGFPlayerControllerFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFGameplayAbility_GetGrantedByEffectHandle_Statics
	{
		struct GFGameplayAbility_eventGetGrantedByEffectHandle_Parms
		{
			FActiveGameplayEffectHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFGameplayAbility_GetGrantedByEffectHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFGameplayAbility_eventGetGrantedByEffectHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 179499981
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFGameplayAbility_GetGrantedByEffectHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFGameplayAbility_GetGrantedByEffectHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFGameplayAbility_GetGrantedByEffectHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFGameplayAbility_GetGrantedByEffectHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFGameplayAbility, nullptr, "GetGrantedByEffectHandle", nullptr, nullptr, Z_Construct_UFunction_UGFGameplayAbility_GetGrantedByEffectHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_GetGrantedByEffectHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGFGameplayAbility_GetGrantedByEffectHandle_Statics::GFGameplayAbility_eventGetGrantedByEffectHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_GetGrantedByEffectHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFGameplayAbility_GetGrantedByEffectHandle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_GetGrantedByEffectHandle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGFGameplayAbility_GetGrantedByEffectHandle_Statics::GFGameplayAbility_eventGetGrantedByEffectHandle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFGameplayAbility_GetGrantedByEffectHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFGameplayAbility_GetGrantedByEffectHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFGameplayAbility_K2_GetGFActorInfo_Statics
	{
		struct GFGameplayAbility_eventK2_GetGFActorInfo_Parms
		{
			FGFGameplayAbilityActorInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFGameplayAbility_K2_GetGFActorInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGFGameplayAbility_K2_GetGFActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFGameplayAbility_eventK2_GetGFActorInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_K2_GetGFActorInfo_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGFGameplayAbility_K2_GetGFActorInfo_Statics::NewProp_ReturnValue_MetaData) }; // 1109359432
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFGameplayAbility_K2_GetGFActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFGameplayAbility_K2_GetGFActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFGameplayAbility_K2_GetGFActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFGameplayAbility_K2_GetGFActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFGameplayAbility, nullptr, "K2_GetGFActorInfo", nullptr, nullptr, Z_Construct_UFunction_UGFGameplayAbility_K2_GetGFActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_K2_GetGFActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGFGameplayAbility_K2_GetGFActorInfo_Statics::GFGameplayAbility_eventK2_GetGFActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_K2_GetGFActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFGameplayAbility_K2_GetGFActorInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFGameplayAbility_K2_GetGFActorInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGFGameplayAbility_K2_GetGFActorInfo_Statics::GFGameplayAbility_eventK2_GetGFActorInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGFGameplayAbility_K2_GetGFActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFGameplayAbility_K2_GetGFActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFGameplayAbility);
	UClass* Z_Construct_UClass_UGFGameplayAbility_NoRegister()
	{
		return UGFGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UGFGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActivateAbilityOnGranted_MetaData[];
#endif
		static void NewProp_bActivateAbilityOnGranted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivateAbilityOnGranted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TempCooldownTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TempCooldownTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cost;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationPolicy;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationGroup_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationGroup_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayAbility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGFGameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGFGameplayAbility_GetGFAbilitySystemComponentFromActorInfo, "GetGFAbilitySystemComponentFromActorInfo" }, // 421432269
		{ &Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacter, "GetGFCharacter" }, // 1818468529
		{ &Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterFromActorInfo, "GetGFCharacterFromActorInfo" }, // 1315817559
		{ &Z_Construct_UFunction_UGFGameplayAbility_GetGFCharacterMovementComponentFromActorInfo, "GetGFCharacterMovementComponentFromActorInfo" }, // 905867519
		{ &Z_Construct_UFunction_UGFGameplayAbility_GetGFPlayerControllerFromActorInfo, "GetGFPlayerControllerFromActorInfo" }, // 3749258292
		{ &Z_Construct_UFunction_UGFGameplayAbility_GetGrantedByEffectHandle, "GetGrantedByEffectHandle" }, // 2149120499
		{ &Z_Construct_UFunction_UGFGameplayAbility_K2_GetGFActorInfo, "K2_GetGFActorInfo" }, // 2256482383
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayAbility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayAbilitySystem/GFGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayAbility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_bActivateAbilityOnGranted_MetaData[] = {
		{ "Category", "Ability Data" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayAbility.h" },
	};
#endif
	void Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_bActivateAbilityOnGranted_SetBit(void* Obj)
	{
		((UGFGameplayAbility*)Obj)->bActivateAbilityOnGranted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_bActivateAbilityOnGranted = { "bActivateAbilityOnGranted", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGFGameplayAbility), &Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_bActivateAbilityOnGranted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_bActivateAbilityOnGranted_MetaData), Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_bActivateAbilityOnGranted_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_CooldownDuration_MetaData[] = {
		{ "Category", "Cooldown" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFGameplayAbility, CooldownDuration), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_CooldownDuration_MetaData), Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_CooldownDuration_MetaData) }; // 4070660376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_CooldownTags_MetaData[] = {
		{ "Category", "Cooldown" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_CooldownTags = { "CooldownTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFGameplayAbility, CooldownTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_CooldownTags_MetaData), Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_CooldownTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_TempCooldownTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_TempCooldownTags = { "TempCooldownTags", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFGameplayAbility, TempCooldownTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_TempCooldownTags_MetaData), Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_TempCooldownTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_Cost_MetaData[] = {
		{ "Category", "Cost" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFGameplayAbility, Cost), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_Cost_MetaData), Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_Cost_MetaData) }; // 4070660376
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_ActivationPolicy_MetaData[] = {
		{ "Category", "GFGameplayAbility" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_ActivationPolicy = { "ActivationPolicy", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFGameplayAbility, ActivationPolicy), Z_Construct_UEnum_GodForsaken_EGFAbilityActivationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_ActivationPolicy_MetaData), Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_ActivationPolicy_MetaData) }; // 2016101551
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_ActivationGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_ActivationGroup_MetaData[] = {
		{ "Category", "GFGameplayAbility" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_ActivationGroup = { "ActivationGroup", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFGameplayAbility, ActivationGroup), Z_Construct_UEnum_GodForsaken_EGFAbilityActivationGroup, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_ActivationGroup_MetaData), Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_ActivationGroup_MetaData) }; // 1276996666
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGFGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_bActivateAbilityOnGranted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_CooldownDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_CooldownTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_TempCooldownTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_Cost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_ActivationPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_ActivationGroup_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFGameplayAbility_Statics::NewProp_ActivationGroup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFGameplayAbility_Statics::ClassParams = {
		&UGFGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGFGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFGameplayAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGFGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UGFGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFGameplayAbility.OuterSingleton, Z_Construct_UClass_UGFGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFGameplayAbility.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFGameplayAbility>()
	{
		return UGFGameplayAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFGameplayAbility);
	UGFGameplayAbility::~UGFGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_Statics::EnumInfo[] = {
		{ EGFAbilityActivationPolicy_StaticEnum, TEXT("EGFAbilityActivationPolicy"), &Z_Registration_Info_UEnum_EGFAbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2016101551U) },
		{ EGFAbilityActivationGroup_StaticEnum, TEXT("EGFAbilityActivationGroup"), &Z_Registration_Info_UEnum_EGFAbilityActivationGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1276996666U) },
		{ AbilityUpgrades_StaticEnum, TEXT("AbilityUpgrades"), &Z_Registration_Info_UEnum_AbilityUpgrades, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3530863915U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFGameplayAbility, UGFGameplayAbility::StaticClass, TEXT("UGFGameplayAbility"), &Z_Registration_Info_UClass_UGFGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFGameplayAbility), 2767651782U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_34853832(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayAbility_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
