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
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
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
			{ "GrantAbility", &AGFCharacter::execGrantAbility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGFCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGFCharacter, AbilitySystemComponent), Z_Construct_UClass_UGFAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFCharacter_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_AGFCharacter_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGFCharacter_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseClasses/Characters/GFCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGFCharacter_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGFCharacter, AttributeSet), Z_Construct_UClass_UGFAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGFCharacter_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UClass_AGFCharacter_Statics::NewProp_AttributeSet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGFCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGFCharacter_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGFCharacter_Statics::NewProp_AttributeSet,
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
		{ Z_Construct_UClass_AGFCharacter, AGFCharacter::StaticClass, TEXT("AGFCharacter"), &Z_Registration_Info_UClass_AGFCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGFCharacter), 2500185130U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_1614741286(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_BaseClasses_Characters_GFCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
