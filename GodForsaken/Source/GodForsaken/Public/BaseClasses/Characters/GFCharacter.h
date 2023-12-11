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

	UPROPERTY()
	UGFAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	class UGFAttributeSet* AttributeSet;

private:
	virtual void GrantAbility(TSubclassOf<class UGFGameplayAbility> AbilityClass, int32 AbilityLevel, FGameplayTag InputTag);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual UGFAbilitySystemComponent* GetAbilitySystemComponent() const override
	{
		return AbilitySystemComponent;
	}

};
