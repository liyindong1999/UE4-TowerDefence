// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/GameUI/Core/RuleOfTheHUD.h"
#include "UObject/ConstructorHelpers.h"
#include "UI/GameUI/UMG/UI_MainScreen.h"

ARuleOfTheHUD::ARuleOfTheHUD()
{
	static ConstructorHelpers::FClassFinder<UUI_MainScreen> GameMain_BPClass(TEXT("/Game/UI/Game/MainScreen_BP"));
	MainScreenClass = GameMain_BPClass.Class;
}

void ARuleOfTheHUD::BeginPlay()
{
	Super::BeginPlay();

	MainScreen = CreateWidget<UUI_MainScreen>(GetWorld(), MainScreenClass);
	MainScreen->AddToViewport();
}
