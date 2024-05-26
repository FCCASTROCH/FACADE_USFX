// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoAsteroide.h"

AObstaculoAsteroide::AObstaculoAsteroide()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    // Carga el StaticMesh
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe_180.Shape_Pipe_180'"));

    // Crea el componente de malla est�tica
    UStaticMeshComponent* obstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("obstac"));
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
    // Obtiene la posici�n actual del actor
    FVector PosicionActual = GetActorLocation();
    float VelocidadBase = 200.0f; // Velocidad base del asteroide
    float Amplitud = 300.0f; // Amplitud de la variaci�n en la trayectoria
    float Frecuencia = 1.0f; // Frecuencia de la variaci�n en la trayectoria
    float RandomFactor = FMath::FRandRange(-100.0f, 100.0f); // Factor aleatorio para variaci�n

    // Calcula las nuevas posiciones en X e Y
    float NewX = PosicionActual.X - VelocidadBase * DeltaTime;
    float NewY = PosicionActual.Y + Amplitud * FMath::Sin(TiempoTranscurrido * Frecuencia) + RandomFactor * DeltaTime;

    // Actualiza el tiempo transcurrido
    TiempoTranscurrido += DeltaTime;

    // Actualiza la posici�n del actor
    SetActorLocation(FVector(NewX, NewY, PosicionActual.Z));

    // Verifica los l�mites de la pantalla y ajusta la posici�n si es necesario
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
