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
}
