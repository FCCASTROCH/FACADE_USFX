// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nivel.h"
#include "NaveEnemigo.h"
#include "PeticionNavesEnemigas.h"
#include "NivelFacil.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_USFX_API ANivelFacil : public ANivel
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	ANivelFacil();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	ANaveEnemigo* NAVE_ENEMIGA_A;
	TArray<ANaveEnemigo*> NAVE_ENEMIGA_AC; //Naves enemigas
	TArray<FString>Naves;
	TArray<FVector> PosicionesNaves; //Naves de ataque

	void Posiciones(FString forma) override;
	//TArray<ANaveEnemigo*> navesEnemigas;
	void SpawnNaves() override;

	class AObstaculo* OBSTACULOS_ESPACIALES_A;

	TArray<FString>PNaveLogistica;
	
	// Implementación de métodos virtuales puros
	virtual void Configurar_Vida_Naves(float Vida) override;

	virtual void Configurar_Velocidad_Naves(float Velocidad) override;

	virtual void Configurar_Danio_Disparo_Naves(float Danio_Disparo) override;

	virtual void Configurar_Vida_Obstaculos(float Vida) override;

	virtual void Configurar_Danio_Obstaculos(float Velocidad) override;

	virtual void Configurar_Velocidad_Obstaculos(float Danio) override;
};

