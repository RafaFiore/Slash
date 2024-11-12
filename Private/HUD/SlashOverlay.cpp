#include "HUD/SlashOverlay.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void USlashOverlay::SetHealthBarPercent(float Percent)
{
	if (HealthBar)
	{
		HealthBar->SetPercent(Percent);
	}
}

void USlashOverlay::SetStaminaPercent(float Percent)
{
	if (StaminaBar)
	{
		StaminaBar->SetPercent(Percent);
	}
}

void USlashOverlay::SetGold(int32 Gold)
{
	if (GoldCount)
	{
		GoldCount->SetText(FText::FromString(FString::Printf(TEXT("%d"), Gold)));
	}
}

void USlashOverlay::SetSouls(int32 Souls)
{
	if (SoulsCount)
	{
		SoulsCount->SetText(FText::FromString(FString::Printf(TEXT("%d"), Souls)));
	}
}
