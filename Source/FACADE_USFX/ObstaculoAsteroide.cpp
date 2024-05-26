// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoAsteroide.h"

AObstaculoAsteroide::AObstaculoAsteroide()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    // Carga el StaticMesh
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe_180.Shape_Pipe_180'"));

    // Crea el componente de malla estática
    UStaticMeshComponent* obstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("obstac"));
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
    TiempoTranscurrido = 5.0f;
}

void AObstaculoAsteroide::BeginPlay()
{
    Super::BeginPlay();
}

void AObstaculoAsteroide::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);
}
void AObstaculoAsteroide::Mover(float DeltaTime) {
    // Obtiene la posición actual del actor
    FVector PosicionActual = GetActorLocation();
    float VelocidadBase = 200.0f; // Velocidad base del asteroide
    float Amplitud = 300.0f; // Amplitud de la variación en la trayectoria
    float Frecuencia = 1.0f; // Frecuencia de la variación en la trayectoria
    float RandomFactor = FMath::FRandRange(-100.0f, 100.0f); // Factor aleatorio para variación

    // Calcula las nuevas posiciones en X e Y
    float NewX = PosicionActual.X - VelocidadBase * DeltaTime;
    float NewY = PosicionActual.Y + Amplitud * FMath::Sin(TiempoTranscurrido * Frecuencia) + RandomFactor * DeltaTime;

    // Actualiza el tiempo transcurrido
    TiempoTranscurrido += DeltaTime;

    // Actualiza la posición del actor
    SetActorLocation(FVector(NewX, NewY, PosicionActual.Z));

    // Verifica los límites de la pantalla y ajusta la posición si es necesario
    if (GetActorLocation().X <= -1800.0f) {
        SetActorLocation(FVector(1850.0f, NewY, PosicionActual.Z));
    }
    if (GetActorLocation().Y >= 1850) {
        SetActorLocation(FVector(NewX, -1850.0f, PosicionActual.Z));
    }
    if (GetActorLocation().Y <= -1850) {
        SetActorLocation(FVector(NewX, 1850.0f, PosicionActual.Z));
    }
}
