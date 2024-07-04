// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigo.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
#include "FACADE_USFXPawn.h"
#include "ProyectilEnemigo.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "FACADE_USFXProjectile.h"
#include "DisparoComponent.h"
#include "PeticionNavesEnemigas.h"
#include "BarreraProtectora.h"
#include "ISuscriptor.h"
//#include "HealthComponent.h"
// Sets default values
ANaveEnemigo::ANaveEnemigo()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    NaveEnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
    //mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
    NaveEnemigoMesh->SetupAttachment(RootComponent);
    RootComponent = NaveEnemigoMesh;

    movimiento = false;
    distanciaObs = 0;
    //velocidad = 1;
   // VidaMaxima = 100.f; // Puedes ajustar el valor inicial de la vida máxima
    VidaMaxima; // Inicializamos la vida actual con la vida máxima al comenzar
    VidaActual = 100.0f;
    Velocidad;
    Life = 0.f;

    Tiempo_M = 0.f;

    Distancia_D_CB = 200.f;

    Tiempo_Disparo_Generar = 5.0f;
}

void ANaveEnemigo::DisminuirVida(float Cantidad)
{
    // Disminuir la vida actual
    VidaMaxima -= Cantidad;

    // Verificar si la vida actual es menor o igual a cero
    if (VidaMaxima <= 0.f)
    {
        // Destruir la nave enemiga si su vida es igual o menor a cero
        Destroy();
    }
}

// Called when the game starts or when spawned
void ANaveEnemigo::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void ANaveEnemigo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
     Disparo_Nave(DeltaTime);
    // Llama a la función de movimiento pasando DeltaTime directamente
    //Movimiento_Nave(DeltaTime);

	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Vida: %f"), VidaMaxima));
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Velocidad: %f"), Velocidad));
}


void ANaveEnemigo::Destruirse()
{
    Destroy();
}
void ANaveEnemigo::Disparo_Nave(float DeltaTime)
{
    Tiempo_Disparo += DeltaTime;
    if (Tiempo_Disparo >= Tiempo_Disparo_Generar)
    {
        Tiempo_Disparo = 0.0f;

        // Configura la dirección hacia el eje X negativo
        FVector Direction = FVector(-1.0f, 0.0f, 0.0f);  // Dirección negativa en X
        FVector SpawnLocation = GetActorLocation() + (Direction * Distancia_D_CB);  // Calcula la nueva ubicación de generación basada en la distancia configurada

        FRotator FireRotation = Direction.Rotation();  // Asegura que la rotación del proyectil coincida con la dirección

        UWorld* const World = GetWorld();
        if (World)
        {
            AProyectilEnemigo* Proyectil = World->SpawnActor<AProyectilEnemigo>(AProyectilEnemigo::StaticClass(), SpawnLocation, FireRotation);
            if (Proyectil)
            {
                Proyectil->Set_Danio(Danio_Disparo);
                //diagonal para nave terrestre
				//Proyectil->FireInDiagonal();
            }
        }
    }
}


void ANaveEnemigo::DestruirNave()
{
	if (!BarreraProtectora)
	{

		UE_LOG(LogTemp, Error, TEXT("Lluvia de obstaculo no existe")); return;
	}
	
	Destroy();
//	BarreraProtectora->DeSubscribirse(this);
}

void ANaveEnemigo::Actualizar(float AverageHealth)
{
	//bMovimiento = false;
	//bMoverse = true;
	//bShoulDispara = true;
}

void ANaveEnemigo::SetBarrera(ABarreraProtectora* Barrera)
{
	BarreraProtectora = Barrera;
  //  BarreraProtectora->Subscribirse(this);
}

void ANaveEnemigo::Subscribirse(AActor* Subscriptor)
{
    Subscriptores.Add(Subscriptor);
}

void ANaveEnemigo::Desubscribirse(AActor* Subscriptor)
{
    Subscriptores.Remove(Subscriptor);
}

void ANaveEnemigo::NotificarSubscriptores()
{
    float VidaPromedio = ObtenerVidaPromedio();
    for (AActor* Subscriptor : Subscriptores)
    {
        IISuscriptor* Suscriptor = Cast<IISuscriptor>(Subscriptor);
        if (Suscriptor)
        {
            Suscriptor->Actualizar(VidaPromedio);
        }
    }
}

void ANaveEnemigo::AgregarNaveEnemiga(AActor* NaveEnemiga)
{
    NavesEnemigas.Add(NaveEnemiga);
}

void ANaveEnemigo::RemoverNaveEnemiga(AActor* NaveEnemiga)
{
    NavesEnemigas.Remove(NaveEnemiga);
}

float ANaveEnemigo::ObtenerVidaPromedio()
{
    if (NavesEnemigas.Num() == 0)
    {
        return 0.0f;
    }

    float VidaTotal = 0.0f;
    for (AActor* NaveEnemiga : NavesEnemigas)
    {
        VidaTotal += VidaMaxima;
    }

    return VidaTotal / NavesEnemigas.Num();
}

void ANaveEnemigo::VerificarVidaPromedio()
{
    if (ObtenerVidaPromedio() < 50.0f)
    {
        NotificarSubscriptores();
    }
}





