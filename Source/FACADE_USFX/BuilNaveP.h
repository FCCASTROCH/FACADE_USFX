// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBNEnemiga.h"
#include "BuilNaveP.generated.h"

UCLASS()
class FACADE_USFX_API ABuilNaveP : public AActor, public IIBNEnemiga
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilNaveP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	ANaveEnemigoPrincipal* naveNodriza;

	virtual void ConstruirMovimientoDeNave() override;
	virtual void ConstruirPocisionNaves() override;
	//virtual void ConstruirBarreraEscudo() override; //tipos de barrera
	virtual void ConstruirSpawnNaves() override;

	virtual class ANaveEnemigoPrincipal* getNaveNodriza() override;

};
