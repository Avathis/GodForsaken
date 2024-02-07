// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "GameplayAbilitySystem/GFAbilitySystemComponent.h"
#include "GFCharacter.generated.h"

UCLASS()
class GODFORSAKEN_API AGFCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGFCharacter(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FDelegateHandle HealthChangedDelegateHandle;
	FDelegateHandle MaxHealthChangedDelegateHandle;
	FDelegateHandle HealthRegenRateChangedDelegateHandle;
	FDelegateHandle EnergyChangedDelegateHandle;
	FDelegateHandle MaxEnergyChangedDelegateHandle;
	FDelegateHandle EnergyRegenRateChangedDelegateHandle;
	FDelegateHandle StaminaChangedDelegateHandle;
	FDelegateHandle MaxStaminaChangedDelegateHandle;
	FDelegateHandle StaminaRegenRateChangedDelegateHandle;
	FDelegateHandle SpecialChangedDelegateHandle;
	FDelegateHandle MaxSpecialChangedDelegateHandle;
	FDelegateHandle SpeedChangedDelegateHandle;
	FDelegateHandle MaxSpeedChangedDelegateHandle;
	FDelegateHandle ArmorChangedDelegateHandle;

private:

	
	
	UFUNCTION(BlueprintCallable, Category = "Abilities")
	virtual void GrantAbility(TSubclassOf<class UGFGameplayAbility> AbilityClass, int32 AbilityLevel, FGameplayTag InputTag);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category ="Components", meta = (AllowPrivateAccess = "true"))
	UGFAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category ="Components", meta = (AllowPrivateAccess = "true"))
	const class UGFAttributeSet* AttributeSet;
	
	virtual UGFAbilitySystemComponent* GetAbilitySystemComponent() const override
	{
		return AbilitySystemComponent;
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class UWidgetComponent* CharacterStatusBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class UMotionWarpingComponent* MotionWarpingComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	class UGFCharacterWidget* Widget;
	
	//Attribute Functions

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetMaxHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetHealthRegenRate() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetEnergy() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetMaxEnergy() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetEnergyRegenRate() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetStamina() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetMaxStamina() const;
	
	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetStaminaRegenRate() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetSpecial() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetMaxSpecial() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetHealthPercentage();

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetStaminaPercentage();

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetEnergyPercentage();

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetSpecialPercentage();
	
	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetSpeed() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetMaxSpeed() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetArmor() const;

	virtual void HealthChanged(const FOnAttributeChangeData& Data);
	virtual void MaxHealthChanged(const FOnAttributeChangeData& Data);
	virtual void HealthRegenRateChanged(const FOnAttributeChangeData& Data);
	virtual void EnergyChanged(const FOnAttributeChangeData& Data);
	virtual void MaxEnergyChanged(const FOnAttributeChangeData& Data);
	virtual void EnergyRegenRateChanged(const FOnAttributeChangeData& Data);
	virtual void StaminaChanged(const FOnAttributeChangeData& Data);
	virtual void MaxStaminaChanged(const FOnAttributeChangeData& Data);
	virtual void StaminaRegenRateChanged(const FOnAttributeChangeData& Data);
	virtual void SpecialChanged(const FOnAttributeChangeData& Data);
	virtual void MaxSpecialChanged(const FOnAttributeChangeData& Data);
	virtual void SpeedChanged(const FOnAttributeChangeData& Data);
	virtual void MaxSpeedChanged(const FOnAttributeChangeData& Data);
	virtual void ArmorChanged(const FOnAttributeChangeData& Data);
};
