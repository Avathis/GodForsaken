// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/GameplayAbilitySystem/GFAbilityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFAbilityTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityActorInfo();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFCharacter_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_AGFPlayerController_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFAbilitySystemComponent_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFAbilityTypes();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFAbilityTypes_NoRegister();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFCharacterMovementComponent_NoRegister();
	GODFORSAKEN_API UScriptStruct* Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo();
	GODFORSAKEN_API UScriptStruct* Z_Construct_UScriptStruct_FGFGameplayEffectContext();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References

static_assert(std::is_polymorphic<FGFGameplayAbilityActorInfo>() == std::is_polymorphic<FGameplayAbilityActorInfo>(), "USTRUCT FGFGameplayAbilityActorInfo cannot be polymorphic unless super FGameplayAbilityActorInfo is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GFGameplayAbilityActorInfo;
class UScriptStruct* FGFGameplayAbilityActorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GFGameplayAbilityActorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GFGameplayAbilityActorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo, (UObject*)Z_Construct_UPackage__Script_GodForsaken(), TEXT("GFGameplayAbilityActorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GFGameplayAbilityActorInfo.OuterSingleton;
}
template<> GODFORSAKEN_API UScriptStruct* StaticStruct<FGFGameplayAbilityActorInfo>()
{
	return FGFGameplayAbilityActorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GFAbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_GFAbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GFCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_GFCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GFPlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_GFPlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CharacterMovementComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGFGameplayAbilityActorInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewProp_GFAbilitySystemComponent_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewProp_GFAbilitySystemComponent = { "GFAbilitySystemComponent", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGFGameplayAbilityActorInfo, GFAbilitySystemComponent), Z_Construct_UClass_UGFAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewProp_GFAbilitySystemComponent_MetaData), Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewProp_GFAbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewProp_GFCharacter_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewProp_GFCharacter = { "GFCharacter", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGFGameplayAbilityActorInfo, GFCharacter), Z_Construct_UClass_AGFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewProp_GFCharacter_MetaData), Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewProp_GFCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewProp_GFPlayerController_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewProp_GFPlayerController = { "GFPlayerController", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGFGameplayAbilityActorInfo, GFPlayerController), Z_Construct_UClass_AGFPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewProp_GFPlayerController_MetaData), Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewProp_GFPlayerController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewProp_CharacterMovementComponent_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewProp_CharacterMovementComponent = { "CharacterMovementComponent", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGFGameplayAbilityActorInfo, CharacterMovementComponent), Z_Construct_UClass_UGFCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewProp_CharacterMovementComponent_MetaData), Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewProp_CharacterMovementComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewProp_GFAbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewProp_GFCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewProp_GFPlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewProp_CharacterMovementComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
		Z_Construct_UScriptStruct_FGameplayAbilityActorInfo,
		&NewStructOps,
		"GFGameplayAbilityActorInfo",
		Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::PropPointers),
		sizeof(FGFGameplayAbilityActorInfo),
		alignof(FGFGameplayAbilityActorInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GFGameplayAbilityActorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GFGameplayAbilityActorInfo.InnerSingleton, Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GFGameplayAbilityActorInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGFGameplayEffectContext>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FGFGameplayEffectContext cannot be polymorphic unless super FGameplayEffectContext is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GFGameplayEffectContext;
class UScriptStruct* FGFGameplayEffectContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GFGameplayEffectContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GFGameplayEffectContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGFGameplayEffectContext, (UObject*)Z_Construct_UPackage__Script_GodForsaken(), TEXT("GFGameplayEffectContext"));
	}
	return Z_Registration_Info_UScriptStruct_GFGameplayEffectContext.OuterSingleton;
}
template<> GODFORSAKEN_API UScriptStruct* StaticStruct<FGFGameplayEffectContext>()
{
	return FGFGameplayEffectContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGFGameplayEffectContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewProp_SourceLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewProp_SourceLevel = { "SourceLevel", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGFGameplayEffectContext, SourceLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewProp_SourceLevel_MetaData), Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewProp_SourceLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewProp_EffectStrength_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewProp_EffectStrength = { "EffectStrength", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGFGameplayEffectContext, EffectStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewProp_EffectStrength_MetaData), Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewProp_EffectStrength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewProp_SourceSocket_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewProp_SourceSocket = { "SourceSocket", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGFGameplayEffectContext, SourceSocket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewProp_SourceSocket_MetaData), Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewProp_SourceSocket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewProp_SourceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGFGameplayEffectContext, SourceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewProp_SourceIndex_MetaData), Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewProp_SourceIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewProp_SourceLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewProp_EffectStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewProp_SourceSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewProp_SourceIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
		Z_Construct_UScriptStruct_FGameplayEffectContext,
		&NewStructOps,
		"GFGameplayEffectContext",
		Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::PropPointers),
		sizeof(FGFGameplayEffectContext),
		alignof(FGFGameplayEffectContext),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGFGameplayEffectContext()
	{
		if (!Z_Registration_Info_UScriptStruct_GFGameplayEffectContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GFGameplayEffectContext.InnerSingleton, Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GFGameplayEffectContext.InnerSingleton;
	}
	void UGFAbilityTypes::StaticRegisterNativesUGFAbilityTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFAbilityTypes);
	UClass* Z_Construct_UClass_UGFAbilityTypes_NoRegister()
	{
		return UGFAbilityTypes::StaticClass();
	}
	struct Z_Construct_UClass_UGFAbilityTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFAbilityTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAbilityTypes_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFAbilityTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayAbilitySystem/GFAbilityTypes.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFAbilityTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFAbilityTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFAbilityTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFAbilityTypes_Statics::ClassParams = {
		&UGFAbilityTypes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFAbilityTypes_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFAbilityTypes_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGFAbilityTypes()
	{
		if (!Z_Registration_Info_UClass_UGFAbilityTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFAbilityTypes.OuterSingleton, Z_Construct_UClass_UGFAbilityTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFAbilityTypes.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFAbilityTypes>()
	{
		return UGFAbilityTypes::StaticClass();
	}
	UGFAbilityTypes::UGFAbilityTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFAbilityTypes);
	UGFAbilityTypes::~UGFAbilityTypes() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFAbilityTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFAbilityTypes_h_Statics::ScriptStructInfo[] = {
		{ FGFGameplayAbilityActorInfo::StaticStruct, Z_Construct_UScriptStruct_FGFGameplayAbilityActorInfo_Statics::NewStructOps, TEXT("GFGameplayAbilityActorInfo"), &Z_Registration_Info_UScriptStruct_GFGameplayAbilityActorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGFGameplayAbilityActorInfo), 1109359432U) },
		{ FGFGameplayEffectContext::StaticStruct, Z_Construct_UScriptStruct_FGFGameplayEffectContext_Statics::NewStructOps, TEXT("GFGameplayEffectContext"), &Z_Registration_Info_UScriptStruct_GFGameplayEffectContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGFGameplayEffectContext), 776502345U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFAbilityTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFAbilityTypes, UGFAbilityTypes::StaticClass, TEXT("UGFAbilityTypes"), &Z_Registration_Info_UClass_UGFAbilityTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFAbilityTypes), 1006444523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFAbilityTypes_h_4125089206(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFAbilityTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFAbilityTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFAbilityTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFAbilityTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
