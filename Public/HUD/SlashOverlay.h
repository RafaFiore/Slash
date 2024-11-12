#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SlashOverlay.generated.h"

UCLASS()
class SLASH_API USlashOverlay : public UUserWidget
{
	GENERATED_BODY()
private:

	UPROPERTY(meta = (BindWidget))
	class UProgressBar* HealthBar;

	UPROPERTY(meta = (BindWidget))
	class UProgressBar* StaminaBar;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* GoldCount;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* SoulsCount;

public:
	void SetHealthBarPercent(float Percent);
	void SetStaminaPercent(float Percent);
	void SetGold(int32 Gold);
	void SetSouls(int32 Souls);
};
