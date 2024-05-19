// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Nivel.generated.h"

UCLASS()
class FACADE_USFX_API ANivel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANivel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	//temporizadores
	float TiempoDesdeUltimaNave;
	float TiempoDesdeUltimoObstaculo;
	float IntervaloNave;
	float IntervaloObstaculo;	
	int32 NivelActual;
	float TiempoNivel;
	
	// Métodos virtuales puros para configurar las naves
	virtual void Configurar_Vida_Naves(float Vida) PURE_VIRTUAL(AP_F_Nivel_Dificultad_CA::Configurar_Vida_Naves, );

	virtual void Configurar_Velocidad_Naves(float Velocidad) PURE_VIRTUAL(AP_F_Nivel_Dificultad_CA::Configurar_Velocidad_Naves, );

	virtual void Configurar_Danio_Disparo_Naves(float Danio_Disparo) PURE_VIRTUAL(AP_F_Nivel_Dificultad_CA::Configurar_Danio_Disparo_Naves, );



	// Métodos virtuales puros para configurar los obstáculos
	virtual void Configurar_Vida_Obstaculos(float Vida) PURE_VIRTUAL(AP_F_Nivel_Dificultad_CA::Configurar_Vida_Obstaculos, );

	virtual void Configurar_Danio_Obstaculos(float Velocidad) PURE_VIRTUAL(AP_F_Nivel_Dificultad_CA::Configurar_Danio_Obstaculos, );

	virtual void Configurar_Velocidad_Obstaculos(float Danio) PURE_VIRTUAL(AP_F_Nivel_Dificultad_CA::Configurar_Velocidad_Obstaculos, );


	virtual void Posiciones(FString forma) PURE_VIRTUAL(AP_F_Nivel_Dificultad_CA::Posiciones, );
	virtual void SpawnNaves() PURE_VIRTUAL(AP_F_Nivel_Dificultad_CA::SpawnNaves, );

};
