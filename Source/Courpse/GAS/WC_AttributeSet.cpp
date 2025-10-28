// Fill out your copyright notice in the Description page of Project Settings.


#include "WC_AttributeSet.h"
#include "Net/UnrealNetwork.h"

UWC_AttributeSet::UWC_AttributeSet()
	: Wood(0.f)
	, MaxWood(0.f)
	, Metal(0.f)
	, Scrap(0.f)
	, MaxScrap(0.f)
	, Food(0.f)
	, MaxFood(0.f)
	, Rot(0.f)
	, MaxRot(0.f)
	, Dwellings(0.f)
	, MaxDwellings(0.f)
	, Units(0.f)
	, MaxUnits(0.f)
	, Religion(0.f)
	, Technology(0.f)
	, GameSpeed(1.f)
	, DayTime(720.0f)
	, Days(0.f)
{
}

void UWC_AttributeSet::OnRep_Wood(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWC_AttributeSet, Wood, OldValue);
}

void UWC_AttributeSet::OnRep_MaxWood(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWC_AttributeSet, MaxWood, OldValue);
}

void UWC_AttributeSet::OnRep_Metal(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWC_AttributeSet, Metal, OldValue);
}

void UWC_AttributeSet::OnRep_MaxMetal(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWC_AttributeSet, MaxMetal, OldValue);
}

void UWC_AttributeSet::OnRep_Scrap(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWC_AttributeSet, Scrap, OldValue);
}

void UWC_AttributeSet::OnRep_MaxScrap(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWC_AttributeSet, MaxScrap, OldValue);
}

void UWC_AttributeSet::OnRep_Food(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWC_AttributeSet, Food, OldValue);
}

void UWC_AttributeSet::OnRep_MaxFood(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWC_AttributeSet, MaxFood, OldValue);
}

void UWC_AttributeSet::OnRep_Rot(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWC_AttributeSet, Rot, OldValue);
}

void UWC_AttributeSet::OnRep_MaxRot(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWC_AttributeSet, MaxRot, OldValue);
}

void UWC_AttributeSet::OnRep_Dwellings(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWC_AttributeSet, Dwellings, OldValue);
}

void UWC_AttributeSet::OnRep_MaxDwellings(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWC_AttributeSet, MaxDwellings, OldValue);
}

void UWC_AttributeSet::OnRep_Units(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWC_AttributeSet, Units, OldValue);
}

void UWC_AttributeSet::OnRep_MaxUnits(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWC_AttributeSet, MaxUnits, OldValue);
}

void UWC_AttributeSet::OnRep_Religion(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWC_AttributeSet, Religion, OldValue);
}

void UWC_AttributeSet::OnRep_Technology(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWC_AttributeSet, Technology, OldValue);
}

void UWC_AttributeSet::OnRep_GameSpeed(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWC_AttributeSet, GameSpeed, OldValue);
}

void UWC_AttributeSet::OnRep_DayTime(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWC_AttributeSet, DayTime, OldValue);
}

void UWC_AttributeSet::OnRep_Days(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWC_AttributeSet, Days, OldValue);
}


// ************** ATTRIBUTES CHANGES
void UWC_AttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
	// Example: Clamp Health to be between 0 and MaxHealth
	if (Attribute == GetWoodAttribute())
	{
			Wood = FMath::Clamp(NewValue, 0.0f, GetMaxWood());

	}
	else if (Attribute == GetMaxWoodAttribute())
	{
		MaxWood = FMath::Clamp(NewValue, 0.0f, 100000.0f);
	}
	else if (Attribute == GetMetalAttribute())
	{
		Metal = FMath::Clamp(NewValue, 0.0f, GetMaxMetal());
	}
	else if (Attribute == GetMaxMetalAttribute())
	{
		MaxMetal = FMath::Clamp(NewValue, 0.0f, 100000.0f);
	}
	else if (Attribute == GetScrapAttribute())
	{
		Scrap = FMath::Clamp(NewValue, 0.0f, GetMaxScrap());
	}
	else if (Attribute == GetMaxScrapAttribute())
	{
		MaxScrap = FMath::Clamp(NewValue, 0.0f, 100000.0f);
	}
	else if (Attribute == GetFoodAttribute())
	{
		Food = FMath::Clamp(NewValue, 0.0f, GetMaxFood());
	}
	else if (Attribute == GetMaxFoodAttribute())
	{
		MaxFood = FMath::Clamp(NewValue, 0.0f, 100000.0f);
	}
	else if (Attribute == GetRotAttribute())
	{
		Rot = FMath::Clamp(NewValue, 0.0f, GetMaxRot());
	}
	else if (Attribute == GetMaxRotAttribute())
	{
		MaxRot = FMath::Clamp(NewValue, 0.0f, 100000.0f);
	}
	else if (Attribute == GetDwellingsAttribute())
	{
		Dwellings = FMath::Clamp(NewValue, 0.0f, GetMaxDwellings());
	}
	else if (Attribute == GetMaxDwellingsAttribute())
	{
		MaxDwellings = FMath::Clamp(NewValue, 0.0f, 100000.0f);
	}
	else if (Attribute == GetUnitsAttribute())
	{
		Units = FMath::Clamp(NewValue, 0.0f, GetMaxUnits());
	}
	else if (Attribute == GetMaxUnitsAttribute())
	{
		MaxUnits = FMath::Clamp(NewValue, 0.0f, 100000.0f);
	}
	else if (Attribute == GetReligionAttribute())
	{
		Religion = FMath::Clamp(NewValue, 0.0f, 100000.0f);
	}
	else if (Attribute == GetTechnologyAttribute())
	{
		Technology = FMath::Clamp(NewValue, 0.0f, 100000.0f);
	}
	else if (Attribute == GetGameSpeedAttribute())
	{
		GameSpeed = FMath::Clamp(NewValue, 0.1f, 4.0f);
	}
	else if (Attribute == GetDayTimeAttribute())
	{
		if(NewValue > 1440)
		{
			DayTime = 0;
			Days = Days.GetCurrentValue() + 1;
		} else
		{
			DayTime = FMath::Clamp(NewValue, 0.0f, 1441.0f);
		}
		
	}else if (Attribute == GetDaysAttribute())
	{
		Days = FMath::Clamp(NewValue, 0.0f, 1441.0f);
	}
	
	
}

void UWC_AttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UWC_AttributeSet, Wood, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UWC_AttributeSet, MaxWood, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UWC_AttributeSet, Metal, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UWC_AttributeSet, MaxMetal, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UWC_AttributeSet, Scrap, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UWC_AttributeSet, MaxScrap, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UWC_AttributeSet, Food, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UWC_AttributeSet, MaxFood, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UWC_AttributeSet, Rot, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UWC_AttributeSet, MaxRot, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UWC_AttributeSet, Dwellings, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UWC_AttributeSet, MaxDwellings, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UWC_AttributeSet, Units, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UWC_AttributeSet, MaxUnits, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UWC_AttributeSet, Religion, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UWC_AttributeSet, Technology, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UWC_AttributeSet, GameSpeed, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UWC_AttributeSet, DayTime, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UWC_AttributeSet, Days, COND_None, REPNOTIFY_Always);
}
