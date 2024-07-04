// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculo.h"

// Sets default values
AObstaculo::AObstaculo()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    // Carga el StaticMesh
    //static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));

    //// Crea el componente de malla est�tica
    //UStaticMeshComponent* obstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("obstaculo"));
    //RootComponent = obstaculo;

    //FRotator CurrentRotation = obstaculo->GetRelativeRotation();

    //// Establece la rotaci�n absoluta del componente de malla est�tica para evitar rotaciones no deseadas
    //obstaculo->SetRelativeRotation(FRotator(0.f, 0.f, 0.f));

    //// Verifica si se encontr� el StaticMesh
    //if (ShipMesh.Succeeded())
    //{
    //    // Asigna el StaticMesh al componente de malla est�tica
    //    obstaculo->SetStaticMesh(ShipMesh.Object);

    //    // Modifica la escala del componente de malla est�tica
    //    obstaculo->SetWorldScale3D(FVector(2.0f, 3.0f, 1.0f)); // Aqu� se ajusta la escala
    //}
    
    vida;
    VidaMaxima = 150.f; // Puedes ajustar el valor inicial de la vida m�xima
    VidaActual ; // Inicializamos la vida actual con la vida m�xima al comenzar
    distanciaObs = 0;
}

// Called when the game starts or when spawned
void AObstaculo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObstaculo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AObstaculo::DisminuirResistencia(float Cantidad)
{
    // Disminuir la vida actual
      vida -= Cantidad;

    // Verificar si la vida actual es menor o igual a cero
    if (vida <= 0.0f)
    {
        // Destruir la nave enemiga si su vida es igual o menor a cero
        Destroy();
    }
}

