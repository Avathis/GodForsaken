// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GFAbilityFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class GODFORSAKEN_API UGFAbilityFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category = "EffectContextSection")
	static float GetSourceLevel(const FGameplayEffectContextHandle& EffectContext);
	UFUNCTION(BlueprintPure, Category = "EffectContextSection")
	static float GetEffectStrength(const FGameplayEffectContextHandle& EffectContext);
	UFUNCTION(BlueprintPure, Category = "EffectContextSection")
	static FName GetSourceSocket(const FGameplayEffectContextHandle& EffectContext);
	UFUNCTION(BlueprintPure, Category = "EffectContextSection")
	static int32 GetSourceIndex(const FGameplayEffectContextHandle& EffectContext);

	UFUNCTION(blueprintCallable, Category = "EffectContextSection")
	static struct FGameplayEffectSpecHandle SetSourceLevel(float InSourceLevel, FGameplayEffectSpecHandle EffectSpec);
	UFUNCTION(blueprintCallable, Category = "EffectContextSection")
	static struct FGameplayEffectSpecHandle SetEffectStrength(float InEffectStrength, FGameplayEffectSpecHandle EffectSpec);
	UFUNCTION(blueprintCallable, Category = "EffectContextSection")
	static struct FGameplayEffectSpecHandle SetSourceSocket(FName InSourceSocket, FGameplayEffectSpecHandle EffectSpec);
	UFUNCTION(blueprintCallable, Category = "EffectContextSection")
	static struct FGameplayEffectSpecHandle SetSourceIndex(int32 InSourceIndex,FGameplayEffectSpecHandle EffectSpec);

	UFUNCTION(blueprintCallable, Category = "EffectContextSection")
	static struct FGameplayEffectContextHandle SetEffectContextSourceLevel(float InSourceLevel, FGameplayEffectContextHandle EffectSpec);
	UFUNCTION(blueprintCallable, Category = "EffectContextSection")
	static struct FGameplayEffectContextHandle SetEffectContextEffectStrength(float InEffectStrength, FGameplayEffectContextHandle EffectSpec);
	UFUNCTION(blueprintCallable, Category = "EffectContextSection")
	static struct FGameplayEffectContextHandle SetEffectContextSourceSocket(FName InSourceSocket, FGameplayEffectContextHandle EffectSpec);
	UFUNCTION(blueprintCallable, Category = "EffectContextSection")
	static struct FGameplayEffectContextHandle SetEffectContextSourceIndex(int32 InSourceIndex,FGameplayEffectContextHandle EffectSpec);
	
};
