// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoPrincipal.h"
ANaveEnemigoPrincipal::ANaveEnemigoPrincipal()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim_90_In.Shape_Trim_90_In'"));
    NaveEnemigoMesh->SetStaticMesh(ShipMesh.Object);//malla
    Timer = 0.0f; //Inicializa el timer en 0 
    TiempoTranscurrido = 0.0f;
    indicePosicion = 0;
    indiceNave = 0;
    tipoMovimiento = "";
    Barrera = "";
    Velocidad = 600;
    //SetVelocidad(600);
}

void ANaveEnemigoPrincipal::Mover(float DeltaTime)
{
    // Obtiene la posición actual del actor
    FVector PosicionActual = GetActorLocation();
    float NewY; //Declara la nueva posición en Y
    float PendienteActual = -100; //Declara la pendiente actual
    //float Velocidad = 200.0f; //Declara la velocidad de la nave 
    float NewX; //Declara la nueva posición en X    

    // Si han pasado más de 5 segundos, cambia la pendiente
    if (Timer <= 1.0f && Timer >= 0)
    {
        NewY = PosicionActual.Y + PendienteActual * DeltaTime;
        // Reinicia el temporizador
        NewX = PosicionActual.X - Velocidad * DeltaTime;

    }
    else
    {
        NewY = PosicionActual.Y - PendienteActual * DeltaTime;
        NewX = PosicionActual.X;
    }
    TiempoTranscurrido += PI / 2 * DeltaTime;
    Timer = FMath::Sin(TiempoTranscurrido); //Alternando para que sea positivo y negativo
    // Actualiza la posición del actor
    SetActorLocation(FVector(NewX, NewY, PosicionActual.Z));

    if (GetActorLocation().X <= -1800.0f)
    {

        SetActorLocation(FVector(1850.0f, NewY, PosicionActual.Z));


    }
    if (GetActorLocation().Y >= 1850)
    {
        SetActorLocation(FVector(NewX, -1850.0f, PosicionActual.Z));
    }

    if (GetActorLocation().Y <= -1850)
    {
        SetActorLocation(FVector(NewX, 1850.0f, PosicionActual.Z));
    }
}

void ANaveEnemigoPrincipal::Disparar()
{
}

void ANaveEnemigoPrincipal::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);


}

void ANaveEnemigoPrincipal::BeginPlay()
{
    Super::BeginPlay();

    GetWorld()->GetTimerManager().SetTimer(TimerSpawnNaves, this, &ANaveEnemigoPrincipal::repartirNaves, 2.5f, false);

}

void ANaveEnemigoPrincipal::MovimientoDeNave()
{
    if (tipoMovimiento == "Movimiento 1")
    {
        const float ReturnSpeed = GetVelocidad(); // Velocidad de retorno ajustable según sea necesario
        const float DeltaTime = GetWorld()->GetDeltaSeconds();
        if (GetActorLocation().Y >= 0.f && GetActorLocation().X <= 1500)
        {
            const FVector ReturnMovement = FVector(0, -1, 0) * ReturnSpeed * DeltaTime;
            SetActorLocationAndRotation(GetActorLocation() + ReturnMovement, FRotator(0, -90, 0));
            GetWorldTimerManager().SetTimerForNextTick([this]() {MovimientoDeNave(); });
        }
        else if (GetActorLocation().Y <= 0.f && GetActorLocation().X <= 1500.f)
        {
            const FVector ReturnMovement = FVector(1, 0, 0.13) * ReturnSpeed * DeltaTime;
            SetActorLocationAndRotation(GetActorLocation() + ReturnMovement, FRotator(0, 0, 0));
            if (GetActorLocation().X >= 1500.0f)
            {

                GetWorld()->GetTimerManager().SetTimer(TimerNaves, this, &ANaveEnemigoPrincipal::DestruirNave, 2.0f, false);
            }
            GetWorldTimerManager().SetTimerForNextTick([this]() {MovimientoDeNave(); });

        }
    }
    else if (tipoMovimiento == "Movimiento 2") {

        const float ReturnSpeed = GetVelocidad(); // Velocidad de retorno ajustable según sea necesario
        const float DeltaTime = GetWorld()->GetDeltaSeconds();
        if (GetActorLocation().Y <= 0.f && GetActorLocation().X <= 1500)
        {
            const FVector ReturnMovement = FVector(0, 1, 0) * ReturnSpeed * DeltaTime;
            SetActorLocationAndRotation(GetActorLocation() + ReturnMovement, FRotator(0, -90, 0));
            GetWorldTimerManager().SetTimerForNextTick([this]() {MovimientoDeNave(); });
        }
        else if (GetActorLocation().Y >= 0.f && GetActorLocation().X <= 1500.f)
        {
            const FVector ReturnMovement = FVector(1, 0, 0.13) * ReturnSpeed * DeltaTime;
            SetActorLocationAndRotation(GetActorLocation() + ReturnMovement, FRotator(0, 0, 0));
            if (GetActorLocation().X >= 1500.0f)
            {
                GetWorld()->GetTimerManager().SetTimer(TimerNaves, this, &ANaveEnemigoPrincipal::DestruirNave, 4.0f, false);
            }
            GetWorldTimerManager().SetTimerForNextTick([this]() {MovimientoDeNave(); });

        }
    }
}

void ANaveEnemigoPrincipal::PocisionNaves(FString forma)
{
    FVector UbicacionDeInicio = FVector(1850.0f, -1540.7f, 216.0f);
    FVector UbicacionDeInici = FVector(1750.0f, -1040.7f, 216.0f);
    FVector Centro = FVector(950.0f, -140.7f, 256.0f);
    float Radio = 600.0f;

    if (forma == "Cuadrado")
    {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                FVector PosicionNaveActual = FVector(UbicacionDeInici.X - j * 600.0f, UbicacionDeInici.Y + i * 600.0f, UbicacionDeInici.Z + 200.0f);
                PosicionesNaves.Add(PosicionNaveActual);
            }
        }
    }
    else if (forma == "Triangulo") {

        for (int i = 0; i < 6; i++) {
            FVector PosicionNaveActualX = FVector(UbicacionDeInicio.X, UbicacionDeInicio.Y + i * 600.0f, UbicacionDeInicio.Z);

            for (int j = 0; j < 4; j++) {
                FVector PosicionNaveActualY = FVector(PosicionNaveActualX.X - j * 528.5f, PosicionNaveActualX.Y, PosicionNaveActualX.Z);
                if ((i == 0 || i == 5) && j == 0)
                    PosicionesNaves.Add(PosicionNaveActualY);
                if ((i == 1 || i == 3) && (j == 0 || j == 1))
                    PosicionesNaves.Add(PosicionNaveActualY);
                if (i == 2 || i == 4)
                    PosicionesNaves.Add(PosicionNaveActualY);
            }
        }

    }
    else if (forma == "Redondo") {
        for (int i = 0; i < 12; i++) {
            float Angle = 2 * PI * i / 12;
            float X = Centro.X + Radio * FMath::Cos(Angle);
            float Y = Centro.Y + Radio * FMath::Sin(Angle);
            FVector PosicionNave = FVector(X, Y, Centro.Z);
            PosicionesNaves.Add(PosicionNave);
        }

    }
}







void ANaveEnemigoPrincipal::SpawnNaves()
{
    //APeticionNaves* PNavesSuicidas = GetWorld()->SpawnActor<APeticionNavesSuicidas>(APeticionNavesSuicidas::StaticClass());
    //APeticionNaves* PNavesLogistica = GetWorld()->SpawnActor<APeticionNavesLogisticas>(APeticionNavesLogisticas::StaticClass());
    //APeticionNaves* PNavesAtaques = GetWorld()->SpawnActor<APeticionNavesAtaque>(APeticionNavesAtaque::StaticClass());
    ////Aniadir los nombres al TArray
    //PNaveSuicida.Add("NaveKamikaseAgil");
    //PNaveSuicida.Add("NaveCazaExplosiva");

    //PNaveLogistica.Add("NaveEspiaSigiloso");
    //PNaveLogistica.Add("NaveEpiaIncognito");

    //PNaveAtaque.Add("NavecazaAsesina");
    //PNaveAtaque.Add("NaveNodrizaDisparadora");


    //UWorld* const World = GetWorld();
    //if (World != nullptr)
    //{

    //    for (int i = 0; i < PosicionesNaves.Num(); i++) {

    //        int32 CategoriaNave = FMath::RandRange(0, 2);
    //        if (CategoriaNave == 0)
    //        {
    //            int32 RandomIndex = FMath::RandRange(0, PNaveAtaque.Num() - 1);//Genera un numero aleatorio entre 0 y el tamaño del TArray - 1
    //            // Spawnea la nave aleatoria
    //            ANaveEnemigo* NaveEnemigaAtaque = PNavesAtaques->OrdenarNaveEnemiga(PNaveAtaque[RandomIndex]);

    //            NavesEnemigas.Add(NaveEnemigaAtaque);

    //        }
    //        else if (CategoriaNave == 1)
    //        {
    //            int32 RandomIndex = FMath::RandRange(0, PNaveLogistica.Num() - 1);//Genera un numero aleatorio entre 0 y el tamaño del TArray - 1
    //            // Spawnea la nave aleatoria
    //            ANaveEnemigo* NaveEnemigaApoyo = PNavesLogistica->OrdenarNaveEnemiga(PNaveLogistica[RandomIndex]);
    //            NavesEnemigas.Add(NaveEnemigaApoyo);

    //        }
    //        else if (CategoriaNave == 2)
    //        {
    //            int32 RandomIndex = FMath::RandRange(0, PNaveSuicida.Num() - 1);//Genera un numero aleatorio entre 0 y el tamaño del TArray - 1
    //            // Spawnea la nave aleatoria
    //            ANaveEnemigo* NaveEnemigaInformante = PNavesSuicidas->OrdenarNaveEnemiga(PNaveSuicida[RandomIndex]);
    //            NavesEnemigas.Add(NaveEnemigaInformante);

    //        }
    //    }
    //}
}

void ANaveEnemigoPrincipal::DestruirNave()
{
    const float Amplitud = 5.0f;
    const float Frecuencia = 4.0f;
    const float ReturnSpeed = GetVelocidad();
    const float DeltaTime = GetWorld()->GetDeltaSeconds();
    if (tipoMovimiento == "Movimiento 1")
    {
        if (GetActorLocation().Y >= 1000)
        {
            Destroy();
        }
        else
        {
            Timer += DeltaTime;
            const FVector ReturnMovement = FVector(0, 1, 0) * ReturnSpeed * DeltaTime;
            SetActorLocationAndRotation(GetActorLocation() + ReturnMovement, FRotator(0, 90, 0));


            GetWorldTimerManager().SetTimerForNextTick([this]() {DestruirNave(); });
        }
    }

}

void ANaveEnemigoPrincipal::repartirNaves()
{
    for (int i = 0; i < NavesEnemigas.Num(); i++)
    {
        NavesEnemigas[i]->SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y, 600.0f));
        posicionesIniciales(i);
    }
}

void ANaveEnemigoPrincipal::posicionesIniciales(int g)
{
    int parametroG = g;
    FVector ReturnDirection = PosicionesNaves[g] - NavesEnemigas[g]->GetActorLocation();
    ReturnDirection.Normalize();

    // Calcula la rotación necesaria para que la nave apunte hacia la posición inicial
    FRotator TargetRotation = ReturnDirection.Rotation();

    // Interpola gradualmente la rotación actual de la nave hacia la rotación objetivo
    const float RotationInterpSpeed = 5.0f;
    FRotator NewRotation = FMath::RInterpTo(NavesEnemigas[g]->GetActorRotation(), TargetRotation, GetWorld()->GetDeltaSeconds(), RotationInterpSpeed);

    // Aplica la nueva rotación a la nave
    NavesEnemigas[g]->SetActorRotation(NewRotation);

    // Mueve la nave en la dirección de regreso a la posición inicial
    const float ReturnSpeed = 800.0f;
    const float DeltaTime = GetWorld()->GetDeltaSeconds();
    const FVector ReturnMovement = ReturnDirection * ReturnSpeed * DeltaTime;

    // Comprueba si la nave está lo suficientemente cerca de la posición inicial
    const float ReturnDistanceThreshold = 60.0f; // Umbral de distancia ajustable según sea necesario
    if (FVector::DistSquared(NavesEnemigas[g]->GetActorLocation(), PosicionesNaves[g]) <= FMath::Square(ReturnDistanceThreshold))
    {
        // La nave está lo suficientemente cerca de la posición inicial, así que establece su posición y rotación exactamente en la posición inicial
        NavesEnemigas[g]->SetActorLocationAndRotation(PosicionesNaves[g], FRotator(0, 180, 0));
    }
    else
    {
        // La nave todavía no está lo suficientemente cerca de la posición inicial, así que sigue moviéndola hacia allí
        NavesEnemigas[g]->SetActorLocation(NavesEnemigas[g]->GetActorLocation() + ReturnMovement);

        // Llama a esta función nuevamente en el siguiente fotograma
        GetWorldTimerManager().SetTimerForNextTick([=]() { posicionesIniciales(parametroG); });
    }
}
