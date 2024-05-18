// Fill out your copyright notice in the Description page of Project Settings.


#include "Facade.h"
#include "Nivel.h"
#include "NivelFacil.h"
#include "NivelMedio.h"
#include "NivelDificil.h"
#include "NaveEnemigo1.h"
#include "NaveEnemigo2.h"
#include "NaveEnemigo3.h"

// Sets default values
AFacade::AFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	VidaFacil = 10.0f;
	VidaNormal = 20.0f;
	VidaDificil = 30.0f;
}
// Called when the game starts or when spawned
void AFacade::BeginPlay()
{
    Super::BeginPlay();
    // Inicializar o buscar instancias de las clases de dificultad
    /*NivelFacil = GetWorld()->SpawnActor<ANivelFacil>();
    NivelNormal = GetWorld()->SpawnActor<ANivelMedio>();
    NivelDificil = GetWorld()->SpawnActor<ANivelDificil>();*/

}

// Called every frame
void AFacade::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void AFacade::ActivateFacilMode()
{
    // Asegurarse de que las instancias de otros niveles estén desactivadas o destruidas
    if (NivelNormal)
    {
        NivelNormal->Destroy();
        NivelNormal = nullptr;
    }
    if (NivelDificil)
    {
        NivelDificil->Destroy();
        NivelDificil = nullptr;
    }

    // Asegurarse de que la instancia del nivel fácil está activa
    if (!NivelFacil)
    {
        NivelFacil = GetWorld()->SpawnActor<ANivelFacil>();
		//Espawnear nave en la posicion 0,0,0
		//Nave = GetWorld()->SpawnActor<ANaveEnemigo1>(FVector(0, 0, 244), FRotator(0, 0, 0));

		//Nave = GetWorld()->SpawnActor<ANaveEnemigo1>();


    }

    // Configurar directamente cada aspecto de las naves y obstáculos
    NivelFacil->SpawnNaves();
    NivelFacil->PocisionNaves("Redondo");
    NivelFacil->Configurar_Vida_Naves(VidaFacil);
    NivelFacil->Configurar_Velocidad_Naves(VelocidadFacil);
    NivelFacil->Configurar_Danio_Disparo_Naves(DanioDisparoFacil);
    NivelFacil->Configurar_Vida_Obstaculos(VidaObstaculosFacil);
    NivelFacil->Configurar_Danio_Obstaculos(DanioObstaculosFacil);
    NivelFacil->Configurar_Velocidad_Obstaculos(VelocidadObstaculosFacil);
}

void AFacade::ActivateNormalMode()
{
    // Destruir instancias de otros niveles
    if (NivelFacil)
    {
        NivelFacil->Destroy();
        NivelFacil = nullptr;
    }
    if (NivelDificil)
    {
        NivelDificil->Destroy();
        NivelDificil = nullptr;
    }

    // Asegurarse de que la instancia del nivel normal está activa
    if (!NivelNormal)
    {
        NivelNormal = GetWorld()->SpawnActor<ANivelMedio>();
    }
    NivelNormal->Configurar_Vida_Naves(VidaNormal);
    NivelNormal->Configurar_Velocidad_Naves(VelocidadNormal);
    NivelNormal->Configurar_Danio_Disparo_Naves(DanioDisparoNormal);
    NivelNormal->Configurar_Vida_Obstaculos(VidaObstaculosNormal);
    NivelNormal->Configurar_Danio_Obstaculos(DanioObstaculosNormal);
    NivelNormal->Configurar_Velocidad_Obstaculos(VelocidadObstaculosNormal);

}


void AFacade::ActivateDificilMode()
{
    // Destruir instancias de otros niveles
    if (NivelFacil)
    {
        NivelFacil->Destroy();
        NivelFacil = nullptr;
    }
    if (NivelNormal)
    {
        NivelNormal->Destroy();
        NivelNormal = nullptr;
    }
    // Asegurarse de que la instancia del nivel difícil está activa
    if (!NivelDificil)
    {
        NivelDificil = GetWorld()->SpawnActor<ANivelDificil>();
    }
    NivelDificil->Configurar_Vida_Naves(VidaDificil);
    NivelDificil->Configurar_Velocidad_Naves(VelocidadDificil);
    NivelDificil->Configurar_Danio_Disparo_Naves(DanioDisparoDificil);
    NivelDificil->Configurar_Vida_Obstaculos(VidaObstaculosDificil);
    NivelDificil->Configurar_Danio_Obstaculos(DanioObstaculosDificil);
    NivelDificil->Configurar_Velocidad_Obstaculos(VelocidadObstaculosDificil);
}