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
    velocidad = 1;
   // VidaMaxima = 100.f; // Puedes ajustar el valor inicial de la vida máxima
    VidaMaxima; // Inicializamos la vida actual con la vida máxima al comenzar
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
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Vida: %f"), VidaMaxima));


    if (bShoulDispara){
        if (tipoArma == "Normal")
        {
            DisparoComponent->ArmasDisparoNormal();
        }
    
    }
}

void ANaveEnemigo::DestruirNave()
{
}

void ANaveEnemigo::Destruirse()
{
    Destroy();
}
void ANaveEnemigo::FireProjectile()
{
    // Verificar si estamos presionando el stick de fuego en alguna dirección
    const FRotator FireRotation = GetActorRotation(); // Obtener la rotación actual del actor
    const FVector SpawnLocation = GetActorLocation() + FVector(100.0f, 0.0f, 0.0f); // Ubicación de spawneo desplazada del actor

    UWorld* const World = GetWorld();
    if (World != nullptr)
    {
        // Spawnear el proyectil
        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this; // Establecer el propietario del proyectil
        SpawnParams.Instigator = GetInstigator(); // Establecer el instigador del proyectil

        AProyectilEnemigo* Proyectil = World->SpawnActor<AProyectilEnemigo>(EnemyProjectileClass, SpawnLocation, FireRotation, SpawnParams);
        if (Proyectil)
        {
            // Configurar la velocidad y dirección del proyectil
           // Proyectil->FireInDirection(FireRotation.Vector());
        }
    }
}


void ANaveEnemigo::AtaquePlanta()
{

    FireShot(FVector(0.0f, 1.0f, 0.0f));

}


void ANaveEnemigo::FireShot(FVector FireDirection)
{
    // If it's ok to fire again
    if (bCanFire == true)
    {
        // If we are pressing fire stick in a direction
        if (FireDirection.SizeSquared() > 0.0f)
        {
            const FRotator FireRotation = FireDirection.Rotation();
            // Spawn projectile at an offset from this pawn
            const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

            UWorld* const World = GetWorld();
            if (World != nullptr)
            {
                // spawn the projectile
                World->SpawnActor<AProyectilEnemigo>(SpawnLocation, FireRotation);

            }

            //bCanFire = false;
            //World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &APlanta_Ataque::ShotTimerExpired, FireRate);

        }
    }
}

void ANaveEnemigo::ShotTimerExpired()
{
    bCanFire = true;
}





