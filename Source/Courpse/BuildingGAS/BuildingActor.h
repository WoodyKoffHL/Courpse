// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BLD_AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "BuildingActor.generated.h"

UCLASS()
class COURPSE_API ABuildingActor : public AActor, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuildingActor();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GAS", meta = (AllowPrivateAccess = "true"))
	const class UBLD_AttributeSet* BasicAttributeSet;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GAS", meta = (AllowPrivateAccess = "true"))
	class UAbilitySystemComponent* CppAbilitySystemComponent;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override 
	{ 
		return CppAbilitySystemComponent; 
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GAS", meta = (AllowPrivateAccess = "true"))
	const class UBLD_AttributeSet* AttributeSet;

	void InitializeAttributs();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
