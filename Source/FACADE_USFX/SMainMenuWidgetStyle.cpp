// Fill out your copyright notice in the Description page of Project Settings.


#include "SMainMenuWidgetStyle.h"

FSMainMenuStyle::FSMainMenuStyle()
{
}

FSMainMenuStyle::~FSMainMenuStyle()
{
}

const FName FSMainMenuStyle::TypeName(TEXT("FSMainMenuStyle"));

const FSMainMenuStyle& FSMainMenuStyle::GetDefault()
{
	static FSMainMenuStyle Default;
	return Default;
}

void FSMainMenuStyle::GetResources(TArray<const FSlateBrush*>& OutBrushes) const
{
	// Add any brush resources here so that Slate can correctly atlas and reference them
}

