// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBNEnemiga.h"
#include "Director.generated.h"

UCLASS()
class FACADE_USFX_API ADirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirector();

	IIBNEnemiga* ConstruyendoND;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void construirNaveNodriza();
	void Construyendo(AActor* constructor);

	class ANaveEnemigoPrincipal* obtenerNave();

};
