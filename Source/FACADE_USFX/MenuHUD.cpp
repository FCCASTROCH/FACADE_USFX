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
	
}

void AMenuHUD::ShowMenu()
{

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
	

	if (!Facade)
	{
		Facade = GetWorld()->SpawnActor<AFacade>(AFacade::StaticClass());


		if (Facade)
		{
			GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Green, TEXT("[GameMode] Facade creado y configurado correctamente."));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[GameMode] Error al crear el Facade."));
		}
	}

}

