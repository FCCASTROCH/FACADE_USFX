// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstaculo.generated.h"

UCLASS()
class FACADE_USFX_API AObstaculo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObstaculo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Sets default values for this actor's properties
	float VidaMaxima;
	float VidaActual;
	float distanciaObs;
	float velocidadObs;
	float danioObs;
	float vida;
	FString Barrera;
	
	FORCEINLINE FString GetBarrera() const { return Barrera; }
	FORCEINLINE float GetVidaMaxima() const { return VidaMaxima; }
	FORCEINLINE float GetVidaActual() const { return VidaActual; }
	FORCEINLINE float GetDistanciaObs() const { return distanciaObs; }
	FORCEINLINE float GetVelocidadObs() const { return velocidadObs; }
	FORCEINLINE float GetDanioObs() const { return danioObs; }
	FORCEINLINE float GetVida() const { return vida; }

	FORCEINLINE void SetBarrera(FString _Barrera) { Barrera = _Barrera; }
	FORCEINLINE void SetVidaMaxima(float _VidaMaxima) { VidaMaxima = _VidaMaxima; }
	FORCEINLINE void SetVidaActual(float _VidaActual) { VidaActual = _VidaActual; }
	FORCEINLINE void SetDistanciaObs(float _DistanciaObs) { distanciaObs = _DistanciaObs; }
	FORCEINLINE void SetVelocidadObs(float _VelocidadObs) { velocidadObs = _VelocidadObs; }
	FORCEINLINE void SetDanioObs(float _DanioObs) { danioObs = _DanioObs; }
	FORCEINLINE void SetVida(float _Vida) { vida = _Vida; }

	void DisminuirResistencia(float Cantidad);
};
