// Fill out your copyright notice in the Description page of Project Settings.


#include "BLD_AttributeSet.h"
#include "Net/UnrealNetwork.h"

UBLD_AttributeSet::UBLD_AttributeSet() : Resource(0.f)
{
}

void UBLD_AttributeSet::OnRep_Resource(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBLD_AttributeSet, Resource, OldValue);
}

void UBLD_AttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
	// Example: Clamp Health to be between 0 and MaxHealth
	if (Attribute == GetResourceAttribute())
	{
		Resource = FMath::Clamp(NewValue, 0.0f, 10000.0f);

	}
}

void UBLD_AttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UBLD_AttributeSet, Resource, COND_None, REPNOTIFY_Always);
}