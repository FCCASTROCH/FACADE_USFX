// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigo.h"
#include "ICNEnemiga.h"
#include "NaveEnemigoPrincipal.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_USFX_API ANaveEnemigoPrincipal : public ANaveEnemigo, public IICNEnemiga
{
	GENERATED_BODY()
private:
	int numNavesGeneradas; //Numero de naves generadas;
	float tiempoGeneracionNaves; //Tiempo de generacion de naves
public:
	float Timer; //Timer para el movimiento de la nave
	float TiempoTranscurrido; //Tiempo transcurrido
	bool bBarreraSpawneada; // Inicializada como falsa

	TArray< ANaveEnemigo*> NavesEnemigas; //Naves enemigas

	TArray<FString>PNaveSuicida;
	TArray<FString>PNaveLogistica;
	TArray<FString>PNaveAtaque;

	TArray<FVector> PosicionesNaves; //Naves de ataque
	FTimerHandle TimerNaves; //Timer para spawnear naves
	FTimerHandle TimerSpawnNaves; //Timer para spawnear naves
	FTimerHandle TimerEscudo; //Timer para spawnear naves
	FTimerHandle TimerInicial; //Timer para spawnear naves
	int indiceNave; //Indice de la nave
	int indicePosicion; //Indice de la posicion
	FString tipoMovimiento; //Tipo de movimiento
	FString Barrera; //Tipo de barrera


public:
	ANaveEnemigoPrincipal();

	FORCEINLINE int GetNumNavesGeneradas() const { return numNavesGeneradas; }
	FORCEINLINE float GetTiempoGeneracionNaves() const { return tiempoGeneracionNaves; }
	FORCEINLINE FString GetBarrera() const { return Barrera; }
	FORCEINLINE void SetBarrera(FString _Barrera) { Barrera = _Barrera; }
	FORCEINLINE FString GetTipoMovimiento() const { return tipoMovimiento; }
	FORCEINLINE TArray<FVector> GetPosicionesNaves() const { return PosicionesNaves; }
	FORCEINLINE TArray<ANaveEnemigo*> GetNavesEnemigas() const { return NavesEnemigas; }


	FORCEINLINE void SetNumNavesGeneradas(float _numNavesGeneradas) { numNavesGeneradas = _numNavesGeneradas; }
	FORCEINLINE void SetTiempoGeneracionNaves(float _tiempoGeneracionNaves) { tiempoGeneracionNaves = _tiempoGeneracionNaves; }
	FORCEINLINE void SetTipoMovimiento(FString _tipoMovimiento) { tipoMovimiento = _tipoMovimiento; }
	FORCEINLINE void SetPosicionesNaves(TArray<FVector> _PosicionesNaves) { PosicionesNaves = _PosicionesNaves; }
	//FORCEINLINE void SetBarrera(FString _Barrera) { Barrera = _Barrera; }

protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
	virtual void MovimientoDeNave() override;
	virtual void PocisionNaves(FString forma) override;
	//virtual void BarreraEscudo() override; //tipos de barrera
	virtual void SpawnNaves() override;
	virtual void DestruirNave() override;// puede explota la nave nodriza

	void repartirNaves();
	void posicionesIniciales(int g);
	//void AttachEscudoToNave(AEscudo* InEscudo);

	
};
