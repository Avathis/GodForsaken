// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseClasses/Animation/GFAnimInstance.h"

#include "AbilitySystemGlobals.h"
#include "BaseClasses/Characters/GFPlayableCharacter.h"
#include "BaseClasses/Components/GFCharacterMovementComponent.h"

UGFAnimInstance::UGFAnimInstance(const FObjectInitializer& ObjectInitializer)
{
}

void UGFAnimInstance::InitializeWithAbilitySystem(UAbilitySystemComponent* ASC)
{
	check(ASC);

	GameplayTagPropertyMap.Initialize(this, ASC);
}

void UGFAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	const AGFCharacter* Character = Cast<AGFCharacter>(GetOwningActor());
	if (!Character)
	{
		return;
	}

	UGFCharacterMovementComponent* CharMoveComp = CastChecked<UGFCharacterMovementComponent>(Character->GetCharacterMovement());
	//const FLyraCharacterGroundInfo& GroundInfo = CharMoveComp->GetGroundInfo();
	//GroundDistance = GroundInfo.GroundDistance;
}

void UGFAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	if (AActor* OwningActor = GetOwningActor())
	{
		if (UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(OwningActor))
		{
			InitializeWithAbilitySystem(ASC);
		}
	}
	
	APawn* OwnerPawn = TryGetPawnOwner();

	if(OwnerPawn)
	{
		MainCharacter = CastChecked<AGFPlayableCharacter>(OwnerPawn);

		if(MainCharacter)
		{
			
		}
	}
	
}
