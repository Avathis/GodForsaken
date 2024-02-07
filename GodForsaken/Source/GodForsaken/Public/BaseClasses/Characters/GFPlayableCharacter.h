// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseClasses/Characters/GFCharacter.h"
#include "InputActionValue.h"
#include "InputAction.h"
#include "GFPlayableCharacter.generated.h"

/**
 * 
 */
UCLASS()
class GODFORSAKEN_API AGFPlayableCharacter : public AGFCharacter
{
	GENERATED_BODY()

public:
	AGFPlayableCharacter(const FObjectInitializer& ObjectInitializer);

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	class UGFInputConfig* InputConfig;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controller")
	class AGFPlayerController* PlayerController;

	UFUNCTION(BlueprintImplementableEvent)
	void InitializeAbilities();

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UGFSpringArmComponent* SpringArmComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* CineCamera;
	
protected:
	void BindASCInput();
	bool ASCInputBound = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputMappingContext* DefaultMappingContext;

	void Input_AbilityInputTagPressed(FGameplayTag InputTag);
	void Input_AbilityInputTagReleased(FGameplayTag InputTag);
	void Input_AbilityInputTagTriggered(const FInputActionInstance& InputActionInstance);

	void Input_Confirm(const FInputActionInstance& InputActionInstance);
	void Input_Cancel(const FInputActionInstance& InputActionInstance);

	void Move(const FInputActionValue& Value);

	void Look(const FInputActionValue& Value);

	virtual void HealthChanged(const FOnAttributeChangeData& Data) override;
	virtual void MaxHealthChanged(const FOnAttributeChangeData& Data) override;
	virtual void HealthRegenRateChanged(const FOnAttributeChangeData& Data) override;
	virtual void EnergyChanged(const FOnAttributeChangeData& Data) override;
	virtual void MaxEnergyChanged(const FOnAttributeChangeData& Data) override;
	virtual void EnergyRegenRateChanged(const FOnAttributeChangeData& Data) override;
	virtual void StaminaChanged(const FOnAttributeChangeData& Data) override;
	virtual void MaxStaminaChanged(const FOnAttributeChangeData& Data) override;
	virtual void StaminaRegenRateChanged(const FOnAttributeChangeData& Data) override;
	virtual void SpecialChanged(const FOnAttributeChangeData& Data) override;
	virtual void MaxSpecialChanged(const FOnAttributeChangeData& Data) override;
	virtual void SpeedChanged(const FOnAttributeChangeData& Data) override;
	virtual void MaxSpeedChanged(const FOnAttributeChangeData& Data) override;
	virtual void ArmorChanged(const FOnAttributeChangeData& Data) override;
	
};
