// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/AbilityTasks/GFTargetingTask_AOE.h"
#include "CollisionQueryParams.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/EngineTypes.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "TargetingSystem/TargetingSubsystem.h"
#include "Types/TargetingSystemLogs.h"

#if ENABLE_DRAW_DEBUG
#include "Engine/Canvas.h"
#endif // ENABLE_DRAW_DEBUG

UGFTargetingTask_AOE::UGFTargetingTask_AOE(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	CollisionChannel = ECC_PhysicsBody;
	bIgnoreSourceActor = false;
	bIgnoreInstigatorActor = false;
}

void UGFTargetingTask_AOE::Execute(const FTargetingRequestHandle& TargetingHandle) const
{
	Super::Execute(TargetingHandle);

	SetTaskAsyncState(TargetingHandle, ETargetingTaskAsyncState::Executing);

	// @note: There isn't Async Overlap support based on Primitive Component, so even if using async targeting, it will
	// run this task in "immediate" mode.
	if (IsAsyncTargetingRequest(TargetingHandle) && (ShapeType != EGFTargetingAOEShape::SourceComponent))
	{
		ExecuteAsyncTrace(TargetingHandle);
	}
	else
	{
		ExecuteImmediateTrace(TargetingHandle);
	}
}

void UGFTargetingTask_AOE::ExecuteImmediateTrace(const FTargetingRequestHandle& TargetingHandle) const
{
	#if ENABLE_DRAW_DEBUG
	ResetDebugString(TargetingHandle);
#endif // ENABLE_DRAW_DEBUG

	UWorld* World = GetSourceContextWorld(TargetingHandle);
	if (World && TargetingHandle.IsValid())
	{
		const FVector SourceLocation = GetSourceLocation(TargetingHandle) + GetSourceForwardVector(TargetingHandle)*GetSourceOffset(TargetingHandle).X + GetSourceRightVector(TargetingHandle)*GetSourceOffset(TargetingHandle).Y;
		FQuat SourceRotation = GetSourceRotation(TargetingHandle);
		if(DefaultSourceRotation!=FQuat::Identity)
		{
			SourceRotation=SourceRotation*DefaultSourceRotation;
		}

		TArray<FOverlapResult> OverlapResults;
		if (ShapeType == EGFTargetingAOEShape::SourceComponent)
		{
			if (const UPrimitiveComponent* CollisionComponent = GetCollisionComponent(TargetingHandle))
			{
				FComponentQueryParams ComponentQueryParams(SCENE_QUERY_STAT(UGFTargetingTask_AOE_Component));
				InitCollisionParams(TargetingHandle, ComponentQueryParams);
				World->ComponentOverlapMulti(OverlapResults, CollisionComponent, CollisionComponent->GetComponentLocation(), CollisionComponent->GetComponentRotation(), ComponentQueryParams);
			}
			else
			{
				//TARGETING_LOG(Warning, TEXT("UTargetingSelectionTask_AOE::Execute - Failed to find a collision component w/ tag [%s] for a SourceComponent ShapeType."), *ComponentTag.ToString());
			}
		}
		else
		{
			FCollisionShape CollisionShape = GetCollisionShape();
			FCollisionQueryParams OverlapParams(TEXT("UTargetingSelectionTask_AOE"), SCENE_QUERY_STAT_ONLY(UTargetingSelectionTask_AOE_Shape), false);
			InitCollisionParams(TargetingHandle, OverlapParams);

			if (CollisionObjectTypes.Num() > 0)
			{
				FCollisionObjectQueryParams ObjectParams;
				for (auto Iter = CollisionObjectTypes.CreateConstIterator(); Iter; ++Iter)
				{
					const ECollisionChannel& Channel = UCollisionProfile::Get()->ConvertToCollisionChannel(false, *Iter);
					ObjectParams.AddObjectTypesToQuery(Channel);
				}

				World->OverlapMultiByObjectType(OverlapResults, SourceLocation, SourceRotation, ObjectParams, CollisionShape, OverlapParams);
			}
			else if (CollisionProfileName.Name != TEXT("NoCollision"))
			{
				World->OverlapMultiByProfile(OverlapResults, SourceLocation, SourceRotation, CollisionProfileName.Name, CollisionShape, OverlapParams);
			}
			else
			{
				World->OverlapMultiByChannel(OverlapResults, SourceLocation, SourceRotation, CollisionChannel, CollisionShape, OverlapParams);
			}

#if ENABLE_DRAW_DEBUG
			if (UTargetingSubsystem::IsTargetingDebugEnabled())
			{
				switch (ShapeType)
				{
				case EGFTargetingAOEShape::Box:
					DrawDebugBox(World, SourceLocation, CollisionShape.GetExtent(), SourceRotation, FColor::Red, false, 30.0f, 0, 2.0f);
					break;
				case EGFTargetingAOEShape::Sphere:
					DrawDebugSphere(World, SourceLocation, CollisionShape.GetSphereRadius(), 32, FColor::Red, false, 30.0f, 0, 2.0f);
					break;
				case EGFTargetingAOEShape::Capsule:
					DrawDebugCapsule(World, SourceLocation, CollisionShape.GetCapsuleHalfHeight(), CollisionShape.GetCapsuleRadius(), SourceRotation, FColor::Red, false, 30.0f, 0, 2.0f);
					break;
				case EGFTargetingAOEShape::Cylinder:
					DrawDebugBox(World, SourceLocation, CollisionShape.GetExtent(), SourceRotation, FColor::Red, false, 30.0f, 0, 1.0f);
					DrawDebugCylinder(World, -1.0f * CollisionShape.GetExtent(), CollisionShape.GetExtent(), CollisionShape.GetExtent().X, 32, FColor::Yellow, false, 30.0f, 0, 2.0f);
					break;
				}
			}
#endif // ENABLE_DRAW_DEBUG
		}

		ProcessOverlapResults(TargetingHandle, OverlapResults);
	}

	SetTaskAsyncState(TargetingHandle, ETargetingTaskAsyncState::Completed);
}

void UGFTargetingTask_AOE::ExecuteAsyncTrace(const FTargetingRequestHandle& TargetingHandle) const
{
	UWorld* World = GetSourceContextWorld(TargetingHandle);
	if (World && TargetingHandle.IsValid())
	{
		const FVector SourceLocation = GetSourceLocation(TargetingHandle) + GetSourceForwardVector(TargetingHandle)*GetSourceOffset(TargetingHandle).X + GetSourceRightVector(TargetingHandle)*GetSourceOffset(TargetingHandle).Y;
		FQuat SourceRotation = GetSourceRotation(TargetingHandle);
		if(DefaultSourceRotation!=FQuat::Identity)
		{
			SourceRotation=SourceRotation*DefaultSourceRotation;
		}

		FCollisionShape CollisionShape = GetCollisionShape();
		FCollisionQueryParams OverlapParams(TEXT("UTargetingSelectionTask_AOE"), SCENE_QUERY_STAT_ONLY(UTargetingSelectionTask_AOE_Shape), false);
		InitCollisionParams(TargetingHandle, OverlapParams);

		FOverlapDelegate Delegate = FOverlapDelegate::CreateUObject(this, &UGFTargetingTask_AOE::HandleAsyncOverlapComplete, TargetingHandle);
		if (CollisionObjectTypes.Num() > 0)
		{
			FCollisionObjectQueryParams ObjectParams;
			for (auto Iter = CollisionObjectTypes.CreateConstIterator(); Iter; ++Iter)
			{
				const ECollisionChannel& Channel = UCollisionProfile::Get()->ConvertToCollisionChannel(false, *Iter);
				ObjectParams.AddObjectTypesToQuery(Channel);
			}

			World->AsyncOverlapByObjectType(SourceLocation, SourceRotation, ObjectParams, CollisionShape, OverlapParams, &Delegate);
		}
		else if (CollisionProfileName.Name != TEXT("NoCollision"))
		{
			World->AsyncOverlapByProfile(SourceLocation, SourceRotation, CollisionProfileName.Name, CollisionShape, OverlapParams, &Delegate);
		}
		else
		{
			World->AsyncOverlapByChannel(SourceLocation, SourceRotation, CollisionChannel, CollisionShape, OverlapParams, FCollisionResponseParams::DefaultResponseParam, &Delegate);
		}
	}
	else
	{
		SetTaskAsyncState(TargetingHandle, ETargetingTaskAsyncState::Completed);
	}
}

void UGFTargetingTask_AOE::HandleAsyncOverlapComplete(const FTraceHandle& InTraceHandle, FOverlapDatum& InOverlapDatum,
	FTargetingRequestHandle TargetingHandle) const
{
	if (TargetingHandle.IsValid())
	{
#if ENABLE_DRAW_DEBUG
		ResetDebugString(TargetingHandle);

		if (UTargetingSubsystem::IsTargetingDebugEnabled())
		{
			if (UWorld* World = GetSourceContextWorld(TargetingHandle))
			{
				const FVector& SourceLocation = InOverlapDatum.Pos;
				const FQuat& SourceRotation = InOverlapDatum.Rot;
				const FCollisionShape& CollisionShape = InOverlapDatum.CollisionParams.CollisionShape;
				switch (ShapeType)
				{
				case EGFTargetingAOEShape::Box:
					DrawDebugBox(World, SourceLocation, CollisionShape.GetExtent(), SourceRotation, FColor::Red, false, 30.0f, 0, 2.0f);
					break;
				case EGFTargetingAOEShape::Sphere:
					DrawDebugSphere(World, SourceLocation, CollisionShape.GetSphereRadius(), 32, FColor::Red, false, 30.0f, 0, 2.0f);
					break;
				case EGFTargetingAOEShape::Capsule:
					DrawDebugCapsule(World, SourceLocation, CollisionShape.GetCapsuleHalfHeight(), CollisionShape.GetCapsuleRadius(), SourceRotation, FColor::Red, false, 30.0f, 0, 2.0f);
					break;
				case EGFTargetingAOEShape::Cylinder:
					DrawDebugBox(World, SourceLocation, CollisionShape.GetExtent(), SourceRotation, FColor::Red, false, 30.0f, 0, 1.0f);
					DrawDebugCylinder(World, -1.0f * CollisionShape.GetExtent(), CollisionShape.GetExtent(), CollisionShape.GetExtent().X, 32, FColor::Yellow, false, 30.0f, 0, 2.0f);
					break;
				}
			}
		}
#endif // ENABLE_DRAW_DEBUG

		ProcessOverlapResults(TargetingHandle, InOverlapDatum.OutOverlaps);
	}

	SetTaskAsyncState(TargetingHandle, ETargetingTaskAsyncState::Completed);
}

void UGFTargetingTask_AOE::ProcessOverlapResults(const FTargetingRequestHandle& TargetingHandle,
	const TArray<FOverlapResult>& Overlaps) const
{
	// process the overlaps
	if (Overlaps.Num() > 0)
	{
		FTargetingDefaultResultsSet& TargetingResults = FTargetingDefaultResultsSet::FindOrAdd(TargetingHandle);
		for (const FOverlapResult& OverlapResult : Overlaps)
		{
			if (!OverlapResult.GetActor())
			{
				continue;
			}

			// cylinders use box overlaps, so a radius check is necessary to constrain it to the bounds of a cylinder
			if (ShapeType == EGFTargetingAOEShape::Cylinder)
			{
				const float RadiusSquared = (HalfExtent.X * HalfExtent.X);
				const FVector SourceLocation = GetSourceLocation(TargetingHandle) + GetSourceForwardVector(TargetingHandle)*GetSourceOffset(TargetingHandle).X + GetSourceRightVector(TargetingHandle)*GetSourceOffset(TargetingHandle).Y;
				const float DistanceSquared = FVector::DistSquared2D(OverlapResult.GetActor()->GetActorLocation(), SourceLocation);
				if (DistanceSquared > RadiusSquared)
				{
					continue;
				}
			}

			bool bAddResult = true;
			for (const FTargetingDefaultResultData& ResultData : TargetingResults.TargetResults)
			{
				if (ResultData.HitResult.GetActor() == OverlapResult.GetActor())
				{
					bAddResult = false;
					break;
				}
			}

			if (bAddResult)
			{
				FTargetingDefaultResultData* ResultData = new(TargetingResults.TargetResults) FTargetingDefaultResultData();
				ResultData->HitResult.HitObjectHandle = FActorInstanceHandle(OverlapResult.GetActor());
				ResultData->HitResult.Component = OverlapResult.GetComponent();
				ResultData->HitResult.bBlockingHit = OverlapResult.bBlockingHit;
			}
		}

#if ENABLE_DRAW_DEBUG
		BuildDebugString(TargetingHandle, TargetingResults.TargetResults);
#endif // ENABLE_DRAW_DEBUG
	}
}

FQuat UGFTargetingTask_AOE::GetSourceRotation_Implementation(const FTargetingRequestHandle& TargetingHandle) const
{
	if (const FTargetingSourceContext* SourceContext = FTargetingSourceContext::Find(TargetingHandle))
	{
		if (SourceContext->SourceActor)
		{
			if(bUseControllerRotation)
			{
				const ACharacter* SourceCharacter = Cast<ACharacter>(SourceContext->SourceActor);
				return FQuat(FRotator(0.f,SourceCharacter->GetControlRotation().Yaw,0.f));
			}
			return FQuat(SourceContext->SourceActor->GetActorRotation());
		}
	}
	return FQuat::Identity;
}

FVector UGFTargetingTask_AOE::GetSourceForwardVector_Implementation(
	const FTargetingRequestHandle& TargetingHandle) const
{
	if (const FTargetingSourceContext* SourceContext = FTargetingSourceContext::Find(TargetingHandle))
	{
		if (SourceContext->SourceActor)
		{
			if(bUseControllerRotation)
			{
				const ACharacter* SourceCharacter = Cast<ACharacter>(SourceContext->SourceActor);
				return FRotator(0.f,SourceCharacter->GetControlRotation().Yaw,0.f).Vector();
			}
			return SourceContext->SourceActor->GetActorForwardVector();
		}
	}
	return FVector::ZeroVector;
}

FVector UGFTargetingTask_AOE::GetSourceRightVector_Implementation(const FTargetingRequestHandle& TargetingHandle) const
{
	if (const FTargetingSourceContext* SourceContext = FTargetingSourceContext::Find(TargetingHandle))
	{
		if (SourceContext->SourceActor)
		{
			return SourceContext->SourceActor->GetActorRightVector();
		}
	}
	return FVector::ZeroVector;
}

FCollisionShape UGFTargetingTask_AOE::GetCollisionShape() const
{
	switch (ShapeType)
	{
	case EGFTargetingAOEShape::Box:
		return FCollisionShape::MakeBox(HalfExtent);

	case EGFTargetingAOEShape::Cylinder:
		return FCollisionShape::MakeBox(HalfExtent);

	case EGFTargetingAOEShape::Sphere:
		return FCollisionShape::MakeSphere(Radius.GetValue());

	case EGFTargetingAOEShape::Capsule:
		return FCollisionShape::MakeCapsule(Radius.GetValue(), HalfHeight.GetValue());
	}

	return FCollisionShape();
}

const UPrimitiveComponent* UGFTargetingTask_AOE::GetCollisionComponent(
	const FTargetingRequestHandle& TargetingHandle) const
{
	if (const FTargetingSourceContext* SourceContext = FTargetingSourceContext::Find(TargetingHandle))
	{
		if (SourceContext->SourceActor)
		{
			TArray<UPrimitiveComponent*> PrimitiveComponents;
			SourceContext->SourceActor->GetComponents<UPrimitiveComponent>(PrimitiveComponents);

			for (UPrimitiveComponent* Component : PrimitiveComponents)
			{
				if (Component && Component->ComponentHasTag(ComponentTag))
				{
					return Component;
				}
			}
		}
	}

	return nullptr;
}

void UGFTargetingTask_AOE::InitCollisionParams(const FTargetingRequestHandle& TargetingHandle,
	FCollisionQueryParams& OutParams) const
{
	if (const FTargetingSourceContext* SourceContext = FTargetingSourceContext::Find(TargetingHandle))
	{
		if (bIgnoreSourceActor && SourceContext->SourceActor)
		{
			OutParams.AddIgnoredActor(SourceContext->SourceActor);
		}

		if (bIgnoreInstigatorActor && SourceContext->InstigatorActor)
		{
			OutParams.AddIgnoredActor(SourceContext->InstigatorActor);
		}
	}
}
#if WITH_EDITOR
bool UGFTargetingTask_AOE::CanEditChange(const FProperty* InProperty) const
{
	bool bCanEdit = Super::CanEditChange(InProperty);

	if (bCanEdit && InProperty)
	{
		if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UGFTargetingTask_AOE, CollisionChannel))
		{
			return (CollisionProfileName.Name == TEXT("NoCollision") && CollisionObjectTypes.Num() <= 0);
		}

		if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UGFTargetingTask_AOE, CollisionProfileName))
		{
			return (CollisionObjectTypes.Num() <= 0);
		}

		if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UGFTargetingTask_AOE, HalfExtent))
		{
			return (ShapeType == EGFTargetingAOEShape::Box || ShapeType == EGFTargetingAOEShape::Cylinder);
		}

		if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UGFTargetingTask_AOE, Radius))
		{
			return (ShapeType == EGFTargetingAOEShape::Sphere || ShapeType == EGFTargetingAOEShape::Capsule);
		}

		if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UGFTargetingTask_AOE, HalfHeight))
		{
			return (ShapeType == EGFTargetingAOEShape::Capsule);
		}

		if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UGFTargetingTask_AOE, ComponentTag))
		{
			return (ShapeType == EGFTargetingAOEShape::SourceComponent);
		}
	}

	return true;
}
#endif
void UGFTargetingTask_AOE::DrawDebug(UTargetingSubsystem* TargetingSubsystem, FTargetingDebugInfo& Info,
	const FTargetingRequestHandle& TargetingHandle, float XOffset, float YOffset, int32 MinTextRowsToAdvance) const
{
#if WITH_EDITORONLY_DATA
	if (UTargetingSubsystem::IsTargetingDebugEnabled())
	{
		FTargetingDebugData& DebugData = FTargetingDebugData::FindOrAdd(TargetingHandle);
		FString& ScratchPadString = DebugData.DebugScratchPadStrings.FindOrAdd(GetNameSafe(this));
		if (!ScratchPadString.IsEmpty())
		{
			if (Info.Canvas)
			{
				Info.Canvas->SetDrawColor(FColor::Yellow);
			}

			FString TaskString = FString::Printf(TEXT("Results : %s"), *ScratchPadString);
			TargetingSubsystem->DebugLine(Info, TaskString, XOffset, YOffset, MinTextRowsToAdvance);
		}
	}
#endif // WITH_EDITORONLY_DATA
}

void UGFTargetingTask_AOE::BuildDebugString(const FTargetingRequestHandle& TargetingHandle,
	const TArray<FTargetingDefaultResultData>& TargetResults) const
{
#if WITH_EDITORONLY_DATA
	if (UTargetingSubsystem::IsTargetingDebugEnabled())
	{
		FTargetingDebugData& DebugData = FTargetingDebugData::FindOrAdd(TargetingHandle);
		FString& ScratchPadString = DebugData.DebugScratchPadStrings.FindOrAdd(GetNameSafe(this));

		for (const FTargetingDefaultResultData& TargetData : TargetResults)
		{
			if (const AActor* Target = TargetData.HitResult.GetActor())
			{
				if (ScratchPadString.IsEmpty())
				{
					ScratchPadString = FString::Printf(TEXT("%s"), *GetNameSafe(Target));
				}
				else
				{
					ScratchPadString += FString::Printf(TEXT(", %s"), *GetNameSafe(Target));
				}
			}
		}
	}
#endif // WITH_EDITORONLY_DATA
}

void UGFTargetingTask_AOE::ResetDebugString(const FTargetingRequestHandle& TargetingHandle) const
{
#if WITH_EDITORONLY_DATA
	FTargetingDebugData& DebugData = FTargetingDebugData::FindOrAdd(TargetingHandle);
	FString& ScratchPadString = DebugData.DebugScratchPadStrings.FindOrAdd(GetNameSafe(this));
	ScratchPadString.Reset();
#endif
}


FVector UGFTargetingTask_AOE::GetSourceOffset_Implementation(const FTargetingRequestHandle& TargetingHandle) const
{
	return DefaultSourceOffset;
}

FVector UGFTargetingTask_AOE::GetSourceLocation_Implementation(const FTargetingRequestHandle& TargetingHandle) const
{
	if (const FTargetingSourceContext* SourceContext = FTargetingSourceContext::Find(TargetingHandle))
	{
		if (SourceContext->SourceActor)
		{
			return SourceContext->SourceActor->GetActorLocation();
		}
		
		return SourceContext->SourceLocation;
	}

	return FVector::ZeroVector;
}
