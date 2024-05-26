// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoExplosivo.h"

AObstaculoExplosivo::AObstaculoExplosivo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    // Carga el StaticMesh
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));

    // Crea el componente de malla est�tica
    UStaticMeshComponent* obstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("obs"));
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

void AObstaculoExplosivo::BeginPlay()
{
    Super::BeginPlay();
}

void AObstaculoExplosivo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void AObstaculoExplosivo::Mover(float DeltaTime) {
    // Obtiene la posici�n actual del actor
    FVector PosicionActual = GetActorLocation();

    // Par�metros de movimiento zigzag
    float Amplitud = 300.0f; // Amplitud del zigzag (desplazamiento en Y)
    float Frecuencia = 2.0f; // Frecuencia del zigzag (ciclos por segundo)
    float VelocidadX = 200.0f; // Velocidad de avance en el eje X

    // Actualiza el tiempo transcurrido
    TiempoTranscurrido += DeltaTime;

    // Calcula la nueva posici�n en X (avance continuo)
    float NewX = PosicionActual.X - VelocidadX * DeltaTime;

    // Calcula la nueva posici�n en Y (zigzag usando la funci�n seno)
    float NewY = Amplitud * FMath::Sin(Frecuencia * TiempoTranscurrido);

    // Actualiza la posici�n del actor
    SetActorLocation(FVector(NewX, NewY, PosicionActual.Z));

    // Maneja el rebote del actor al alcanzar los l�mites de la pantalla
    if (GetActorLocation().X <= -1800.0f) {
        SetActorLocation(FVector(1850.0f, NewY, PosicionActual.Z));
    }
    if (GetActorLocation().Y >= 1850.0f) {
        SetActorLocation(FVector(NewX, -1850.0f, PosicionActual.Z));
    }
    if (GetActorLocation().Y <= -1850.0f) {
        SetActorLocation(FVector(NewX, 1850.0f, PosicionActual.Z));
    }
}

