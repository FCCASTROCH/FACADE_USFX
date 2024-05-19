// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PeticionObstaculo.h"
#include "PeticionObstaculoInertes.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_USFX_API APeticionObstaculoInertes : public APeticionObstaculo
{
	GENERATED_BODY()
public:
	//APeticionObstaculoInertes();
	virtual AObstaculo* CrearObstaculo(FString NombreObstaculo) override;
	
};
