// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Publicador.h"
#include "ISuscriptor.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UISuscriptor : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class FACADE_USFX_API IISuscriptor
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//metodo que se va a implementar en las clases que hereden de esta interfaz

	//virtual void Actualizar() = 0;
	virtual void Actualizar(float AverageHealth) = 0;
};
