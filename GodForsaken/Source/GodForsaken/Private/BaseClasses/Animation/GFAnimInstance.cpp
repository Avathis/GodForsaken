// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseClasses/Animation/GFAnimInstance.h"

#include "BaseClasses/Characters/GFPlayableCharacter.h"

void UGFAnimInstance::NativeInitializeAnimation()
{
	APawn* OwnerPawn = TryGetPawnOwner();

	if(OwnerPawn)
	{
		MainCharacter = CastChecked<AGFPlayableCharacter>(OwnerPawn);

		if(MainCharacter)
		{
			
		}
	}
	
}
