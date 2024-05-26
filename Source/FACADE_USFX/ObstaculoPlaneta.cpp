// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoPlaneta.h"
AObstaculoPlaneta::AObstaculoPlaneta()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    // Carga el StaticMesh
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));

    // Crea el componente de malla estática
    UStaticMeshComponent* obstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("obstacu"));
    RootComponent = obstaculo;

    FRotator CurrentRotation = obstaculo->GetRelativeRotation();

    // Establece la rotación absoluta del componente de malla estática para evitar rotaciones no deseadas
    obstaculo->SetRelativeRotation(FRotator(0.f, 0.f, 0.f));

    // Verifica si se encontró el StaticMesh
    if (ShipMesh.Succeeded())
    {
        // Asigna el StaticMesh al componente de malla estática
        obstaculo->SetStaticMesh(ShipMesh.Object);

        // Modifica la escala del componente de malla estática
        obstaculo->SetWorldScale3D(FVector(2.0f, 3.0f, 1.0f)); // Aquí se ajusta la escala
    }
}

void AObstaculoPlaneta::BeginPlay()
{
    Super::BeginPlay();
}

void AObstaculoPlaneta::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);

}

void AObstaculoPlaneta::Mover(float DeltaTime) {
    // Parámetros de órbita
    FVector CentroOrbita = FVector(0.0f, 0.0f, 214.0f); // Centro de la órbita
    float RadioOrbita = 1000.0f; // Radio de la órbita
    float VelocidadAngular = 0.5f; // Velocidad angular de la órbita (radianes por segundo)

    // Actualiza el tiempo transcurrido
    TiempoTranscurrido += DeltaTime;

    // Calcula la nueva posición del planeta en órbita
    float NewX = CentroOrbita.X + RadioOrbita * FMath::Cos(VelocidadAngular * TiempoTranscurrido);
    float NewY = CentroOrbita.Y + RadioOrbita * FMath::Sin(VelocidadAngular * TiempoTranscurrido);
    float NewZ = GetActorLocation().Z; // Mantén la misma altura (Z)

    // Actualiza la posición del actor
    SetActorLocation(FVector(NewX, NewY, NewZ));
}

