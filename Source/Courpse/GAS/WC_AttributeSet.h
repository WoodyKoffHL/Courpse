// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "WC_AttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class COURPSE_API UWC_AttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UWC_AttributeSet();

	// ********* WOOD ***********
	UPROPERTY (BlueprintReadOnly, category = "Resources", ReplicatedUsing = OnRep_Wood)
	FGameplayAttributeData Wood;
	ATTRIBUTE_ACCESSORS(UWC_AttributeSet, Wood);
	
	UPROPERTY(BlueprintReadOnly, category = "Resources", ReplicatedUsing = OnRep_MaxWood)
	FGameplayAttributeData MaxWood;
	ATTRIBUTE_ACCESSORS(UWC_AttributeSet, MaxWood);

	// ********* METAL ***********
	UPROPERTY (BlueprintReadOnly, category = "Resources", ReplicatedUsing = OnRep_Metal)
	FGameplayAttributeData Metal;
	ATTRIBUTE_ACCESSORS(UWC_AttributeSet, Metal);
	
	UPROPERTY(BlueprintReadOnly, category = "Resources", ReplicatedUsing = OnRep_MaxMetal)
	FGameplayAttributeData MaxMetal;
	ATTRIBUTE_ACCESSORS(UWC_AttributeSet, MaxMetal);

	// ********* SCRAP ***********
	UPROPERTY (BlueprintReadOnly, category = "Resources", ReplicatedUsing = OnRep_Scrap)
	FGameplayAttributeData Scrap;
	ATTRIBUTE_ACCESSORS(UWC_AttributeSet, Scrap);
	
	UPROPERTY(BlueprintReadOnly, category = "Resources", ReplicatedUsing = OnRep_MaxScrap)
	FGameplayAttributeData MaxScrap;
	ATTRIBUTE_ACCESSORS(UWC_AttributeSet, MaxScrap);

	// ********* Food ***********
	UPROPERTY (BlueprintReadOnly, category = "Resources", ReplicatedUsing = OnRep_Food)
	FGameplayAttributeData Food;
	ATTRIBUTE_ACCESSORS(UWC_AttributeSet, Food);
	
	UPROPERTY(BlueprintReadOnly, category = "Resources", ReplicatedUsing = OnRep_MaxFood)
	FGameplayAttributeData MaxFood;
	ATTRIBUTE_ACCESSORS(UWC_AttributeSet, MaxFood);

	// ********* Rot ***********
	UPROPERTY (BlueprintReadOnly, category = "Resources", ReplicatedUsing = OnRep_Rot)
	FGameplayAttributeData Rot;
	ATTRIBUTE_ACCESSORS(UWC_AttributeSet, Rot);
	
	UPROPERTY(BlueprintReadOnly, category = "Resources", ReplicatedUsing = OnRep_MaxRot)
	FGameplayAttributeData MaxRot;
	ATTRIBUTE_ACCESSORS(UWC_AttributeSet, MaxRot);

	// ********* Dwellings ***********
	UPROPERTY (BlueprintReadOnly, category = "Resources", ReplicatedUsing = OnRep_Dwellings)
	FGameplayAttributeData Dwellings;
	ATTRIBUTE_ACCESSORS(UWC_AttributeSet, Dwellings);
	
	UPROPERTY(BlueprintReadOnly, category = "Resources", ReplicatedUsing = OnRep_MaxDwellings)
	FGameplayAttributeData MaxDwellings;
	ATTRIBUTE_ACCESSORS(UWC_AttributeSet, MaxDwellings);

	// ********* Units ***********
	UPROPERTY (BlueprintReadOnly, category = "Resources", ReplicatedUsing = OnRep_Units)
	FGameplayAttributeData Units;
	ATTRIBUTE_ACCESSORS(UWC_AttributeSet, Units);
	
	UPROPERTY(BlueprintReadOnly, category = "Resources", ReplicatedUsing = OnRep_MaxUnits)
	FGameplayAttributeData MaxUnits;
	ATTRIBUTE_ACCESSORS(UWC_AttributeSet, MaxUnits);

	// ********* Religion ***********
	UPROPERTY (BlueprintReadOnly, category = "Resources", ReplicatedUsing = OnRep_Religion)
	FGameplayAttributeData Religion;
	ATTRIBUTE_ACCESSORS(UWC_AttributeSet, Religion);
	
	// ********* Technology ***********
	UPROPERTY (BlueprintReadOnly, category = "Resources", ReplicatedUsing = OnRep_Technology)
	FGameplayAttributeData Technology;
	ATTRIBUTE_ACCESSORS(UWC_AttributeSet, Technology);

	// ********* GameSpeed ***********
	UPROPERTY (BlueprintReadOnly, category = "Resources", ReplicatedUsing = OnRep_GameSpeed)
	FGameplayAttributeData GameSpeed;
	ATTRIBUTE_ACCESSORS(UWC_AttributeSet, GameSpeed);
	

	

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:

	// ********* WOOD ***********
	UFUNCTION()
	virtual void OnRep_Wood(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_MaxWood(const FGameplayAttributeData& OldValue);

	// ********* METAL ***********
	UFUNCTION()
	virtual void OnRep_Metal(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_MaxMetal(const FGameplayAttributeData& OldValue);

	// ********* SCRAP ***********
	UFUNCTION()
	virtual void OnRep_Scrap(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_MaxScrap(const FGameplayAttributeData& OldValue);

	// ********* FOOD ***********
	UFUNCTION()
	virtual void OnRep_Food(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_MaxFood(const FGameplayAttributeData& OldValue);

	// ********* Rot ***********
	UFUNCTION()
	virtual void OnRep_Rot(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_MaxRot(const FGameplayAttributeData& OldValue);

	// ********* Dwellings ***********
	UFUNCTION()
	virtual void OnRep_Dwellings(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_MaxDwellings(const FGameplayAttributeData& OldValue);

	// ********* UNITS ***********
	UFUNCTION()
	virtual void OnRep_Units(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_MaxUnits(const FGameplayAttributeData& OldValue);

	// ********* Religion ***********
	UFUNCTION()
	virtual void OnRep_Religion(const FGameplayAttributeData& OldValue);

	// ********* Technology ***********
	UFUNCTION()
	virtual void OnRep_Technology(const FGameplayAttributeData& OldValue);

	// ********* GameSpeed ***********
	UFUNCTION()
	virtual void OnRep_GameSpeed(const FGameplayAttributeData& OldValue);
	
};
