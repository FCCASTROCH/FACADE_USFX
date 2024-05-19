// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PeticionNaves.h"
#include "PeticionNavesEnemigas.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_USFX_API APeticionNavesEnemigas : public APeticionNaves
{
	GENERATED_BODY()
public:
	//virtual ANaveEnemigo* CrearNaves(FString NombreNave, FVector Poscision, FRotator Rotacion) override;
	//virtual ANaveEnemigo* CrearNaves(FString NombreNave, FVector Poscision, FRotator Rotacion) override;
	virtual ANaveEnemigo* CrearNaveEnemiga(FString NombreNave) override;

};
