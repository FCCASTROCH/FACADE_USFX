// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProyectilEnemigo.h"
#include "DisparoComponent.h"
#include "NaveEnemigo.generated.h"

UCLASS()
class FACADE_USFX_API ANaveEnemigo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* NaveEnemigoMesh;

	float VidaMaxima;
	float VidaActual;
	virtual void DisminuirVida(float Cantidad);
protected:
	float Velocidad;
	float resistencia; //Numero de disparos que puede recibir antes de ser destruido
	FString nombre;
	float danoProducido; //Potencia de cada proyectil que dispara la nave
	float tiempoDisparo; //Tiempo que debe transcurrir entre cada disparo
	FVector posicion;
	int trayectoria; //Cada valor numerico representa a una funcion que la nave debe asumir para moverse
	int capacidadPasajeros; //Numero de naves que puede transportar
	int capacidadMunicion; //Numero de disparos que puede realizar antes de recargar
	int tipoNave; //Cada valor numerico representa a un tipo de nave enemiga
	float experiencia;
	float energia;

	float peso;
	float volumen;

public:
	FORCEINLINE float GetVelocidad() const { return Velocidad; }
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE float GetDanoProducido() const { return danoProducido; }
	FORCEINLINE float GetTiempoDisparo() const { return tiempoDisparo; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }
	FORCEINLINE int GetTrayectoria() const { return trayectoria; }
	FORCEINLINE int GetCapacidadPasajeros() const { return capacidadPasajeros; }
	FORCEINLINE int GetCapacidadMunicion() const { return capacidadMunicion; }
	FORCEINLINE int GetTipoNave() const { return tipoNave; }
	FORCEINLINE float GetExperiencia() const { return experiencia; }
	FORCEINLINE float GetEnergia() const { return energia; }
	FORCEINLINE float GetPeso() const { return peso; }
	FORCEINLINE float GetVolumen() const { return volumen; }
	FORCEINLINE float GetVidaMaxima() const { return VidaMaxima; }

	FORCEINLINE void SetVelocidad(float _velocidad) { Velocidad = _velocidad; }
	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetDanoProducido(float _danoProducido) { danoProducido = _danoProducido; }
	FORCEINLINE void SetTiempoDisparo(float _tiempoDisparo) { tiempoDisparo = _tiempoDisparo; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }
	FORCEINLINE void SetTrayectoria(int _trayectoria) { trayectoria = _trayectoria; }
	FORCEINLINE void SetCapacidadPasajeros(int _capacidadPasajeros) { capacidadPasajeros = _capacidadPasajeros; }
	FORCEINLINE void SetCapacidadMunicion(int _capacidadMunicion) { capacidadMunicion = _capacidadMunicion; }
	FORCEINLINE void SetTipoNave(int _tipoNave) { tipoNave = _tipoNave; }
	FORCEINLINE void SetExperiencia(float _experiencia) { experiencia = _experiencia; }
	FORCEINLINE void SetEnergia(float _energia) { energia = _energia; }
	FORCEINLINE void SetPeso(float _peso) { peso = _peso; }
	FORCEINLINE void SetVolumen(float _volumen) { volumen = _volumen; }

	FORCEINLINE void SetVidaMaxima(float _VidaMaxima) { VidaMaxima = _VidaMaxima; }

public:
	bool movimiento;
	float distanciaObs;

	virtual void Destruirse();
protected:
	//Metodo virtual puro
	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
	TSubclassOf<AProyectilEnemigo> EnemyProjectileClass;
	void FireProjectile();
	virtual void Mover(float DeltaTime) PURE_VIRTUAL(ANaveEnemigo::Mover,);
	virtual void Disparar() PURE_VIRTUAL(ANaveEnemigo::Disparar, );
	//metodos para el ataque de las naves enemigas
	void AtaquePlanta();


protected:

	FTimerHandle ManejoTiempo;

public:
	//Si tiene permitido disparar
	uint32 bCanFire : 1;

protected:

	void FireShot(FVector FireDirection);
	//void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);

	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	FVector GunOffset;
	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float FireRate;

	void ShotTimerExpired();

	float TiempoTranscurrido;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;

	int CantidadDisparos;
	int contador;

	bool bShoulDispara;
	FString tipoArma;
	// Called every frame
//	virtual void Tick(float DeltaTime) override;
	void DestruirNave();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Disparo", meta = (AllowPrivateAccess = "true"))
	UDisparoComponent* DisparoComponent; // Declara el componente DisparoComponent
	float Timer;

};

