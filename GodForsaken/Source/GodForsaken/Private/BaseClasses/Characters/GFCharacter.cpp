// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseClasses/Characters/GFCharacter.h"

#include "BaseClasses/Components/GFCharacterMovementComponent.h"
#include "GameplayAbilitySystem/GFGameplayAbility.h"

// Sets default values
AGFCharacter::AGFCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UGFCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UGFAbilitySystemComponent>(TEXT("ASC"));

	
	
}

// Called when the game starts or when spawned
void AGFCharacter::BeginPlay()
{
	Super::BeginPlay();

	AbilitySystemComponent->InitAbilityActorInfo(this, this);
	
}

void AGFCharacter::GrantAbility(TSubclassOf<UGFGameplayAbility> AbilityClass, int32 AbilityLevel, FGameplayTag InputTag)
{
	if(GetLocalRole() == ROLE_Authority && AbilitySystemComponent && IsValid(AbilityClass))
	{
		UGFGameplayAbility* Ability = AbilityClass->GetDefaultObject<UGFGameplayAbility>();
		if(IsValid(Ability))
		{
			FGameplayAbilitySpec AbilitySpec(Ability,AbilityLevel);
			if(InputTag.IsValid())
			{
				AbilitySpec.DynamicAbilityTags.AddTag(InputTag);
			}
			AbilitySystemComponent->GiveAbility(AbilitySpec);
		}
		
	}
}

// Called every frame
void AGFCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGFCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

