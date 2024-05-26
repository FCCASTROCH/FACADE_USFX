// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoCometa.h"

AObstaculoCometa::AObstaculoCometa()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    // Carga el StaticMesh
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));

    // Crea el componente de malla est�tica
    UStaticMeshComponent* obstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("obstacul"));
    RootComponent = obstaculo;

    FRotator CurrentRotation = obstaculo->GetRelativeRotation();

    // Establece la rotaci�n absoluta del componente de malla est�tica para evitar rotaciones no deseadas
    obstaculo->SetRelativeRotation(FRotator(0.f, 0.f, 0.f));

    // Verifica si se encontr� el StaticMesh
    if (ShipMesh.Succeeded())
    {
        // Asigna el StaticMesh al componente de malla est�tica
        obstaculo->SetStaticMesh(ShipMesh.Object);

        // Modifica la escala del componente de malla est�tica
        obstaculo->SetWorldScale3D(FVector(2.0f, 3.0f, 1.0f)); // Aqu� se ajusta la escala
    }
}
void AObstaculoCometa::BeginPlay()
{
    Super::BeginPlay();
}

void AObstaculoCometa::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);
}
void AObstaculoCometa::Mover(float DeltaTime) {
    // Obtiene la posici�n actual del actor
    FVector PosicionActual = GetActorLocation();

    // Par�metros para simular el movimiento de la cometa
    float VelocidadBase = 100.0f; // Velocidad base de la cometa
    float Amplitud = 200.0f; // Amplitud de la oscilaci�n
    float Frecuencia = 0.5f; // Frecuencia de la oscilaci�n
    float RandomFactor = FMath::FRandRange(-20.0f, 20.0f); // Factor aleatorio para variaci�n
    float AlturaBase = 300.0f; // Altura base para el movimiento de la cometa

    // Calcula las nuevas posiciones en X e Y
    float NewX = PosicionActual.X - VelocidadBase * DeltaTime;
    float NewY = PosicionActual.Y + Amplitud * FMath::Sin(TiempoTranscurrido * Frecuencia) + RandomFactor;
    float NewZ = AlturaBase + Amplitud * FMath::Cos(TiempoTranscurrido * Frecuencia / 2) + RandomFactor;

    // Actualiza el tiempo transcurrido
    TiempoTranscurrido += DeltaTime;

    // Actualiza la posici�n del actor
    SetActorLocation(FVector(NewX, NewY, NewZ));

    // Verifica los l�mites de la pantalla y ajusta la posici�n si es necesario
    if (GetActorLocation().X <= -1800.0f) {
        SetActorLocation(FVector(1850.0f, NewY, NewZ));
    }
    if (GetActorLocation().Y >= 1850) {
        SetActorLocation(FVector(NewX, -1850.0f, NewZ));
    }
    if (GetActorLocation().Y <= -1850) {
        SetActorLocation(FVector(NewX, 1850.0f, NewZ));
    }
    if (GetActorLocation().Z <= 0) {
        SetActorLocation(FVector(NewX, NewY, AlturaBase));
    }
}
