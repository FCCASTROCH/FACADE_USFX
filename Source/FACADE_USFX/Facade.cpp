// Fill out your copyright notice in the Description page of Project Settings.


#include "Facade.h"
#include "Nivel.h"
#include "NivelFacil.h"
#include "NivelMedio.h"
#include "NivelDificil.h"
#include "NaveEnemigo1.h"
#include "NaveEnemigo2.h"
#include "NaveEnemigo3.h"
#include "Engine/World.h"
// Sets default values
AFacade::AFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//VidaFacil = 10.0f;
	//VidaNormal = 20.0f;
	//VidaDificil = 30.0f;
	//VelocidadFacil = 200.0f;
	//VelocidadNormal = 300.0f;
	//VelocidadDificil = 400.0f;
    vida = 10.0f;
    velocidad = 200.0f;
    danio = 10.0f;
    subir = 1.0f;
    TiempoTranscurrido = 0.0f;
    TiempoEntreNiveles = 20.0f; // 20 segundos
    NivelActual = 0; // 0 = Fácil, 1 = Normal, 2 = Difícil
    //ActivateFacilMode();
}
// Called when the game starts or when spawned
void AFacade::BeginPlay()
{
    Super::BeginPlay();
    ActivateDificilMode();
}

// Called every frame
void AFacade::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    TiempoTranscurrido += DeltaTime;

    if (TiempoTranscurrido >= TiempoEntreNiveles)
    {
        TiempoTranscurrido = 0.0f; // Reinicia el temporizador
        NivelActual = (NivelActual + 1) % 2; // Cambia al siguiente nivel (0, 1, 2, 0, 1, 2, ...)
        subir = subir + 1;

        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Vida: %f"), NivelActual));
        
        if (NivelActual == 1 || NivelActual==0) {

            Nivel = GetWorld()->SpawnActor<ANivelMedio>(ANivelMedio::StaticClass());
            Nivel->Configurar_Vida_Naves(vida*subir);
            Nivel->Configurar_Velocidad_Naves(velocidad+subir*20);
            Nivel->Configurar_Danio_Disparo_Naves(10);
            Nivel->Configurar_Vida_Obstaculos(10);
            Nivel->Configurar_Danio_Obstaculos(10);
            Nivel->Configurar_Velocidad_Obstaculos(10);

            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("modo Normal activado"));

        }
        if (NivelActual == 2) {
            ActivateDificilMode();
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("modo Dificil activado"));

        }
    }
}

void AFacade::ActivateFacilMode()
{
    Nivel = GetWorld()->SpawnActor<ANivelFacil>(ANivelFacil::StaticClass());
   // Configurar directamente cada aspecto de las naves y obstáculos
    Nivel->Configurar_Vida_Naves(vida);
    Nivel->Configurar_Velocidad_Naves(velocidad);
    Nivel->Configurar_Danio_Disparo_Naves(10.0f);
    Nivel->Configurar_Vida_Obstaculos(vida);
    Nivel->Configurar_Danio_Obstaculos(10);
    Nivel->Configurar_Velocidad_Obstaculos(velocidad*2);
}


void AFacade::ActivateDificilMode()
{

    Nivel = GetWorld()->SpawnActor<ANivelDificil>(ANivelDificil::StaticClass());
    Nivel->Configurar_Vida_Naves(vida*10);
    Nivel->Configurar_Velocidad_Naves(velocidad*3);
    Nivel->Configurar_Danio_Disparo_Naves(10);
    Nivel->Configurar_Vida_Obstaculos(1);
    Nivel->Configurar_Danio_Obstaculos(19);
    Nivel->Configurar_Velocidad_Obstaculos(20);

}


