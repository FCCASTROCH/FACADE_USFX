// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuHUD.h"
#include "MainMenuWidget.h"
#include "Widgets/SWeakWidget.h"
#include "Engine/Engine.h"
#include "GameFramework/HUD.h"
#include "GameFramework/PlayerController.h"
#include "Engine/Texture2D.h"
#include "Facade.h"
#include "FACADE_USFXGameMode.h"
#include "Kismet/GameplayStatics.h"
void AMenuHUD::BeginPlay()
{
	Super::BeginPlay();
	ShowMenu();
	InitializeFacadeReference();
}

void AMenuHUD::ShowMenu()
{

	//if (GEngine && GEngine->GameViewport)
	//{
	//	MenuWidget = SNew(MainMenuWidget).OwningHUD(this);
	//	GEngine->GameViewport->AddViewportWidgetContent(SAssignNew(MenuWidgetContainer, SWeakWidget).PossiblyNullContent(MenuWidget.ToSharedRef()));
	//	if (PlayerOwner)
	//	{
	//		PlayerOwner->bShowMouseCursor = true;
	//		PlayerOwner->SetInputMode(FInputModeUIOnly());
	//	}

	//}
	if (GEngine && GEngine->GameViewport)
	{
		MenuWidget = SNew(MainMenuWidget).OwningHUD(this);
		GEngine->GameViewport->AddViewportWidgetContent(SAssignNew(MenuWidgetContainer, SWeakWidget).PossiblyNullContent(MenuWidget.ToSharedRef()));
		if (PlayerOwner)
		{
			PlayerOwner->bShowMouseCursor = true;
			PlayerOwner->SetInputMode(FInputModeUIOnly());
		}
	}
}

// Funcion para eleminar la interfaz una vez que se presiono un determindado boton
void AMenuHUD::RemoveMenu()
{
	/*if (GEngine && GEngine->GameViewport && MenuWidget.IsValid())
	{
		GEngine->GameViewport->RemoveViewportWidgetContent(MenuWidgetContainer.ToSharedRef());
		if (PlayerOwner)
		{
			PlayerOwner->bShowMouseCursor = false;
			FInputModeGameOnly InputMode;
			PlayerOwner->SetInputMode(InputMode);
		}
	}*/
	if (GEngine && GEngine->GameViewport && MenuWidget.IsValid())
	{
		GEngine->GameViewport->RemoveViewportWidgetContent(MenuWidgetContainer.ToSharedRef());
		if (PlayerOwner)
		{
			PlayerOwner->bShowMouseCursor = false;
			PlayerOwner->SetInputMode(FInputModeGameOnly());
		}
	}
}

void AMenuHUD::StartGameplayFacil()
{
	RemoveMenu();
	if (auto* GM = Cast<AFACADE_USFXGameMode>(GetWorld()->GetAuthGameMode()))
	{
		GM->ChangeDifficulty(1);  // 1 for Easy
	}
}

void AMenuHUD::StartGameplayNormal()
{
	RemoveMenu();
	if (auto* GM = Cast<AFACADE_USFXGameMode>(GetWorld()->GetAuthGameMode()))
	{
		GM->ChangeDifficulty(2);  // 2 for Normal
	}
}

void AMenuHUD::StartGameplayDificil()
{
	RemoveMenu();
	if (auto* GM = Cast<AFACADE_USFXGameMode>(GetWorld()->GetAuthGameMode()))
	{
		GM->ChangeDifficulty(3);  // 3 for Hard
	}
}

void AMenuHUD::InitializeFacadeReference()
{
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFacade::StaticClass(), FoundActors);

	if (FoundActors.Num() > 0)
	{
		Facade = Cast<AFacade>(FoundActors[0]);
		if (Facade)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("[HUD] Facade inicializado correctamente."));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[HUD] Error al castear Facade."));
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("[HUD] Facade no encontrado, reintentando..."));
		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMenuHUD::InitializeFacadeReference, 1.0f, false);
	}
}

