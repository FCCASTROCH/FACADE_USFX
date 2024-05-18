// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DisparoComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FACADE_USFX_API UDisparoComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDisparoComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	//Dispara un proyectil
	void ArmasDisparoNormal();
	void StartFireTimer();
	// Timer para controlar la velocidad de disparo
	FTimerHandle TimerHandle_ShotTimerExpired;

	// 
	FTimerHandle TimerHandle_FireTimer;

	// Controla si es posible disparar
	bool bCanFire;

	// Función para el temporizador de disparo expirado
	void ShotTimerExpired();

	// Velocidad de disparo (tiempo entre disparos)
	float FireRate;

	// Offset para la posición de generación del proyectil
	FVector GunOffset;
		
};
