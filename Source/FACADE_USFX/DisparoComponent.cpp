// Fill out your copyright notice in the Description page of Project Settings.


#include "DisparoComponent.h"
#include "FACADE_USFXProjectile.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "FACADE_USFXPawn.h"
// Sets default values for this component's properties
UDisparoComponent::UDisparoComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	bCanFire = true;
	FireRate = 2.f; // Ajusta según sea necesario
	GunOffset = FVector(120.0f, 0.0f, 0.0f); // Ajusta según sea necesario

	// ...
}


// Called when the game starts
void UDisparoComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UDisparoComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UDisparoComponent::ArmasDisparoNormal()
{
    // Si es posible disparar
    if (bCanFire)
    {
        // Obtiene la rotación y la ubicación del propietario del componente
        FRotator FireRotation = GetOwner()->GetActorRotation() + FRotator(0.0f, 0.0f, 0.0f);
        FVector SpawnLocation = GetOwner()->GetActorLocation() + FireRotation.RotateVector(GunOffset);

        UWorld* const World = GetWorld();
        if (World)
        {
            // Spawn del proyectil
            // (Asume que 'ProjectileClass' es la clase del proyectil que deseas disparar)
            AFACADE_USFXProjectile* Proyectil = World->SpawnActor<AFACADE_USFXProjectile>(SpawnLocation, FireRotation);
            if (Proyectil)
            {
                Proyectil->SetOriginActor(GetOwner());

            }
            // Configuración del temporizador para controlar la velocidad de disparo
            bCanFire = false;
            if (GetOwner()->IsA(AFACADE_USFXPawn::StaticClass()))
                FireRate = 0.2;
            World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &UDisparoComponent::ShotTimerExpired, FireRate);
        }
    }
}
// Función para el temporizador de disparo expirado
void UDisparoComponent::ShotTimerExpired()
{
    bCanFire = true;
}

// Llama a esta función para iniciar el temporizador de disparo
void UDisparoComponent::StartFireTimer()
{
    if (!bCanFire)
    {
        return; // No hagas nada si no puedes disparar aún
    }

    // Configura un temporizador que dispara cada cierto tiempo
    //GetWorld()->GetTimerManager().SetTimer(TimerHandle_FireTimer, this, &UActorComponentDisparo::DispararProyectil, FireRate, true);
}