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
    class ANivel* Nivel;
    
protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Funciones para activar cada nivel de dificultad
    void ActivateFacilMode();
   // void ActivateNormalMode();
    void ActivateDificilMode();
    
    float vida;
    float velocidad;
    float danio;
private:
    float TiempoTranscurrido ;
    float TiempoEntreNiveles ; // 20 segundos
    int NivelActual ;
    float subir;

};
