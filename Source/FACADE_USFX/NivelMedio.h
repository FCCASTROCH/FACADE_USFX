// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nivel.h"
#include "NaveEnemigo.h"
#include "Obstaculo.h"
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

	TArray<FString>PNaveLogistica;
	TArray<FString>ObstaculoF;//obstaculos
	TArray<FString>ObstaculoE;//obstaculos

	TArray<FVector> PosicionesNaves; //Naves de ataque

	ANaveEnemigo* NAVE_ENEMIGA_B;
	AObstaculo* OBSTACULOS_ESPACIALES_B;

	TArray<ANaveEnemigo*> NAVE_ENEMIGA_BC; //Naves enemigas
	TArray<AObstaculo*> OBSTACULOS_ESPACIALES_BC; //Obstaculos


	//APeticionNavesEnemigas* FABRICA_NAVES_B;

	virtual void Configurar_Vida_Naves(float Vida) override;

	virtual void Configurar_Velocidad_Naves(float Velocidad) override;

	virtual void Configurar_Danio_Disparo_Naves(float Danio_Disparo) override;

	virtual void Configurar_Vida_Obstaculos(float Vida) override;

	virtual void Configurar_Danio_Obstaculos(float Velocidad) override;

	virtual void Configurar_Velocidad_Obstaculos(float Danio) override;

	
	void Posiciones(FString forma) override;
	void SpawnNaves() override;
	void SpawnObstaculo();
};
