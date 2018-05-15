// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "TheSignal.h"
#include "GameFramework/HUD.h"
#include "TheSignalHUD.generated.h"

UCLASS()
class ATheSignalHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATheSignalHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

