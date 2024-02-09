// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/GFAbilityFunctionLibrary.h"

#include "GameplayEffect.h"
#include "GameplayAbilitySystem/GFAbilityTypes.h"

float UGFAbilityFunctionLibrary::GetSourceLevel(const FGameplayEffectContextHandle& EffectContext)
{
	const FGFGameplayEffectContext* GFEffectContext = static_cast<const FGFGameplayEffectContext*>(EffectContext.Get());
	if (GFEffectContext)
	{
		return GFEffectContext->GetSourceLevel();
	}
	return false;
}

float UGFAbilityFunctionLibrary::GetEffectStrength(const FGameplayEffectContextHandle& EffectContext)
{
	const FGFGameplayEffectContext* GFEffectContext = static_cast<const FGFGameplayEffectContext*>(EffectContext.Get());
	if (GFEffectContext)
	{
		return GFEffectContext->GetEffectStrength();
	}
	return false;
}

FName UGFAbilityFunctionLibrary::GetSourceSocket(const FGameplayEffectContextHandle& EffectContext)
{
	const FGFGameplayEffectContext* GFEffectContext = static_cast<const FGFGameplayEffectContext*>(EffectContext.Get());
	if (GFEffectContext)
	{
		return GFEffectContext->GetSourceSocket();
	}
	return FName(NAME_None);
}

int32 UGFAbilityFunctionLibrary::GetSourceIndex(const FGameplayEffectContextHandle& EffectContext)
{
	const FGFGameplayEffectContext* GFEffectContext = static_cast<const FGFGameplayEffectContext*>(EffectContext.Get());
	if (GFEffectContext)
	{
		return GFEffectContext->GetSourceIndex();
	}
	return false;
}

FGameplayEffectSpecHandle UGFAbilityFunctionLibrary::SetSourceLevel(float InSourceLevel, FGameplayEffectSpecHandle EffectSpec)
{
	if (EffectSpec.Data) 
	{
		FGFGameplayEffectContext* GBEffectContext = static_cast<FGFGameplayEffectContext*>(EffectSpec.Data->GetContext().Get());
		if (GBEffectContext)
		{
			GBEffectContext->SetSourceLevel(InSourceLevel);
		}
	}
	return EffectSpec;
}

FGameplayEffectSpecHandle UGFAbilityFunctionLibrary::SetEffectStrength(float InEffectStrength, FGameplayEffectSpecHandle EffectSpec)
{
	if (EffectSpec.Data) 
	{
		FGFGameplayEffectContext* GBEffectContext = static_cast<FGFGameplayEffectContext*>(EffectSpec.Data->GetContext().Get());
		if (GBEffectContext)
		{
			GBEffectContext->SetEffectStrength(InEffectStrength);
		}
	}
	return EffectSpec;
}

FGameplayEffectSpecHandle UGFAbilityFunctionLibrary::SetSourceSocket(FName InSourceSocket, FGameplayEffectSpecHandle EffectSpec)
{
	if (EffectSpec.Data) 
	{
		FGFGameplayEffectContext* GBEffectContext = static_cast<FGFGameplayEffectContext*>(EffectSpec.Data->GetContext().Get());
		if (GBEffectContext)
		{
			GBEffectContext->SetSourceSocket(InSourceSocket);
		}
	}
	return EffectSpec;
}

FGameplayEffectSpecHandle UGFAbilityFunctionLibrary::SetSourceIndex(int32 InSourceIndex, FGameplayEffectSpecHandle EffectSpec)
{
	if (EffectSpec.Data) 
	{
		FGFGameplayEffectContext* GBEffectContext = static_cast<FGFGameplayEffectContext*>(EffectSpec.Data->GetContext().Get());
		if (GBEffectContext)
		{
			GBEffectContext->SetSourceIndex(InSourceIndex);
		}
	}
	return EffectSpec;
}


FGameplayEffectContextHandle UGFAbilityFunctionLibrary::SetEffectContextSourceLevel(float InSourceLevel,
	FGameplayEffectContextHandle EffectSpec)
{
	if(EffectSpec.Get())
	{
		FGFGameplayEffectContext* GBEffectContext = static_cast<FGFGameplayEffectContext*>(EffectSpec.Get());
		if(GBEffectContext)
		{
			GBEffectContext->SetSourceLevel(InSourceLevel);
		}
	}
	return EffectSpec;
}

FGameplayEffectContextHandle UGFAbilityFunctionLibrary::SetEffectContextEffectStrength(float InEffectStrength,
	FGameplayEffectContextHandle EffectSpec)
{
	if(EffectSpec.Get())
	{
		FGFGameplayEffectContext* GBEffectContext = static_cast<FGFGameplayEffectContext*>(EffectSpec.Get());
		if(GBEffectContext)
		{
			GBEffectContext->SetEffectStrength(InEffectStrength);
		}
	}
	return EffectSpec;
}

FGameplayEffectContextHandle UGFAbilityFunctionLibrary::SetEffectContextSourceSocket(FName InSourceSocket,
	FGameplayEffectContextHandle EffectSpec)
{
	if(EffectSpec.Get())
	{
		FGFGameplayEffectContext* GBEffectContext = static_cast<FGFGameplayEffectContext*>(EffectSpec.Get());
		if(GBEffectContext)
		{
			GBEffectContext->SetSourceSocket(InSourceSocket);
		}
	}
	return EffectSpec;
}

FGameplayEffectContextHandle UGFAbilityFunctionLibrary::SetEffectContextSourceIndex(int32 InSourceIndex,
	FGameplayEffectContextHandle EffectSpec)
{
	if(EffectSpec.Get())
	{
		FGFGameplayEffectContext* GBEffectContext = static_cast<FGFGameplayEffectContext*>(EffectSpec.Get());
		if(GBEffectContext)
		{
			GBEffectContext->SetSourceIndex(InSourceIndex);
		}
	}
	return EffectSpec;
}
