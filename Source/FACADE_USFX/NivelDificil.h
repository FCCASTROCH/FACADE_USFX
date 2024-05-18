// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nivel.h"
#include "NivelDificil.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_USFX_API ANivelDificil : public ANivel
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	ANivelDificil();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//Ejecuta la tarea del miembro. Es virtual puro, por lo que no necesita una implementación en esta clase
//	virtual void iniciarJuego() override;
	//Devuelve el titulo de la tripulacion. Es virtual puro, por lo que no necesita una implementación en esta clase
	//virtual FString ComenzarJuego() override;
	//virtual float vidaobstaculo() override;
	class ANaveEnemigo* NAVE_ENEMIGA_C;

	class AObstaculo* OBSTACULOS_ESPACIALES_C;

	class APeticionObstaculo* FABRICA_OBSTACULOS_C;

	class APeticionNaves* FABRICA_NAVES_C;

	// Implementación de métodos virtuales puros
	virtual void Configurar_Vida_Naves(float Vida) override;

	virtual void Configurar_Velocidad_Naves(float Velocidad) override;

	virtual void Configurar_Danio_Disparo_Naves(float Danio_Disparo) override;

	virtual void Configurar_Vida_Obstaculos(float Vida) override;

	virtual void Configurar_Danio_Obstaculos(float Velocidad) override;

	virtual void Configurar_Velocidad_Obstaculos(float Danio) override;

	virtual void PocisionNaves(FString forma)override;
};
