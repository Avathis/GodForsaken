// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodForsaken/Public/GameplayAbilitySystem/GFGameplayCueSourceObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFGameplayCueSourceObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFGameplayCueSourceObject();
	GODFORSAKEN_API UClass* Z_Construct_UClass_UGFGameplayCueSourceObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodForsaken();
// End Cross Module References
	void UGFGameplayCueSourceObject::StaticRegisterNativesUGFGameplayCueSourceObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFGameplayCueSourceObject);
	UClass* Z_Construct_UClass_UGFGameplayCueSourceObject_NoRegister()
	{
		return UGFGameplayCueSourceObject::StaticClass();
	}
	struct Z_Construct_UClass_UGFGameplayCueSourceObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFGameplayCueSourceObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GodForsaken,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayCueSourceObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFGameplayCueSourceObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/GFGameplayCueSourceObject.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayCueSourceObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFGameplayCueSourceObject_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "PlacementInfo" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySystem/GFGameplayCueSourceObject.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGFGameplayCueSourceObject_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFGameplayCueSourceObject, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayCueSourceObject_Statics::NewProp_SocketName_MetaData), Z_Construct_UClass_UGFGameplayCueSourceObject_Statics::NewProp_SocketName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGFGameplayCueSourceObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFGameplayCueSourceObject_Statics::NewProp_SocketName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFGameplayCueSourceObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFGameplayCueSourceObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFGameplayCueSourceObject_Statics::ClassParams = {
		&UGFGameplayCueSourceObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGFGameplayCueSourceObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayCueSourceObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayCueSourceObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFGameplayCueSourceObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFGameplayCueSourceObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGFGameplayCueSourceObject()
	{
		if (!Z_Registration_Info_UClass_UGFGameplayCueSourceObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFGameplayCueSourceObject.OuterSingleton, Z_Construct_UClass_UGFGameplayCueSourceObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFGameplayCueSourceObject.OuterSingleton;
	}
	template<> GODFORSAKEN_API UClass* StaticClass<UGFGameplayCueSourceObject>()
	{
		return UGFGameplayCueSourceObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFGameplayCueSourceObject);
	UGFGameplayCueSourceObject::~UGFGameplayCueSourceObject() {}
	struct Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayCueSourceObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayCueSourceObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFGameplayCueSourceObject, UGFGameplayCueSourceObject::StaticClass, TEXT("UGFGameplayCueSourceObject"), &Z_Registration_Info_UClass_UGFGameplayCueSourceObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFGameplayCueSourceObject), 2354738379U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayCueSourceObject_h_3909003746(TEXT("/Script/GodForsaken"),
		Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayCueSourceObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_GodForsaken_GodForsaken_Source_GodForsaken_Public_GameplayAbilitySystem_GFGameplayCueSourceObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
