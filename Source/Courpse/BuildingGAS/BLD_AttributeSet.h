// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "BLD_AttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class COURPSE_API UBLD_AttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:

	UBLD_AttributeSet();

	UPROPERTY (BlueprintReadOnly, category = "Resources", ReplicatedUsing = OnRep_Resource)
	FGameplayAttributeData Resource;
	ATTRIBUTE_ACCESSORS(UBLD_AttributeSet, Resource);

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:

	UFUNCTION()
	virtual void OnRep_Resource(const FGameplayAttributeData& OldValue);
	
};
