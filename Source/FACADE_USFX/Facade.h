// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Nivel.h"
#include "PeticionNavesEnemigas.h"
#include "NaveEnemigo.h"
#include "Facade.generated.h"

UCLASS()
class FACADE_USFX_API AFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacade();
public:

    class ANivelFacil* NivelFacil;

    class ANivelMedio* NivelNormal;

    class ANivelDificil* NivelDificil;

   

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Funciones para activar cada nivel de dificultad
    void ActivateFacilMode();
    void ActivateNormalMode();
    void ActivateDificilMode();

    // Parámetros de dificultad fácil
    float VidaFacil;
    float VelocidadFacil;
    float DanioDisparoFacil = 10.0f;
    float VidaObstaculosFacil = 50.0f;
    float DanioObstaculosFacil = 5.0f;
    float VelocidadObstaculosFacil = 100.0f;

    // Parámetros de dificultad normal
    float VidaNormal;
    float VelocidadNormal;
    float DanioDisparoNormal = 20.0f;
    float VidaObstaculosNormal = 100.0f;
    float DanioObstaculosNormal = 10.0f;
    float VelocidadObstaculosNormal = 150.0f;

    // Parámetros de dificultad difícil
    float VidaDificil ;
    float VelocidadDificil ;
    float DanioDisparoDificil = 30.0f;
    float VidaObstaculosDificil = 150.0f;
    float DanioObstaculosDificil = 15.0f;
    float VelocidadObstaculosDificil = 200.0f;

};
