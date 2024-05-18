// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nivel.h"
#include "NaveEnemigo.h"
#include "NivelMedio.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_USFX_API ANivelMedio : public ANivel
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	ANivelMedio();
//	class ANaveEnemigo* enemigo;
	//class AObstaculo* obstaculo;
    
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//virtual float vidaobstaculo() override;
	//virtual float GetVida();
	ANaveEnemigo* NAVE_ENEMIGA_B;

	class AObstaculo* OBSTACULOS_ESPACIALES_B;


	class APeticionObstaculo* FABRICA_OBSTACULOS_B;


	APeticionNaves* FABRICA_NAVES_B;

	virtual void Configurar_Vida_Naves(float Vida) override;

	virtual void Configurar_Velocidad_Naves(float Velocidad) override;

	virtual void Configurar_Danio_Disparo_Naves(float Danio_Disparo) override;

	virtual void Configurar_Vida_Obstaculos(float Vida) override;

	virtual void Configurar_Danio_Obstaculos(float Velocidad) override;

	virtual void Configurar_Velocidad_Obstaculos(float Danio) override;

	virtual void PocisionNaves(FString forma)override;

};
