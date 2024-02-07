// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GFAttributeSet.generated.h"

/**
 * 
 */
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)


UCLASS()
class GODFORSAKEN_API UGFAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UGFAttributeSet();

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Health")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UGFAttributeSet, Health);

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Health")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UGFAttributeSet, MaxHealth);

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Health")
	FGameplayAttributeData HealthRegenRate;
	ATTRIBUTE_ACCESSORS(UGFAttributeSet, HealthRegenRate);

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Energy")
	FGameplayAttributeData Energy;
	ATTRIBUTE_ACCESSORS(UGFAttributeSet, Energy);
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Energy")
	FGameplayAttributeData MaxEnergy;
	ATTRIBUTE_ACCESSORS(UGFAttributeSet,  MaxEnergy);

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Energy")
	FGameplayAttributeData EnergyRegenRate;
	ATTRIBUTE_ACCESSORS(UGFAttributeSet,  EnergyRegenRate);
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Endurance")
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(UGFAttributeSet, Stamina);
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Endurance")
	FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSORS(UGFAttributeSet, MaxStamina);

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Endurance")
	FGameplayAttributeData StaminaRegenRate;
	ATTRIBUTE_ACCESSORS(UGFAttributeSet, StaminaRegenRate);

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Special")
	FGameplayAttributeData Special;
	ATTRIBUTE_ACCESSORS(UGFAttributeSet, Special);
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Endurance")
	FGameplayAttributeData MaxSpecial;
	ATTRIBUTE_ACCESSORS(UGFAttributeSet, MaxSpecial);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Speed")
	FGameplayAttributeData Speed;
	ATTRIBUTE_ACCESSORS(UGFAttributeSet, Speed);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Speed")
	FGameplayAttributeData MaxSpeed;
	ATTRIBUTE_ACCESSORS(UGFAttributeSet, MaxSpeed);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Constitution")
	FGameplayAttributeData Armor;
	ATTRIBUTE_ACCESSORS(UGFAttributeSet, Armor);

	
};
