 #include "HUD/HealthBarComponent.h"
#include "HUD/HealthBar.h"
#include "Components/ProgressBar.h"

void UHealthBarComponent::SetHealthPercent(float Percent)
{
	if (HealhBarWidget == nullptr)
	{
		HealhBarWidget = Cast<UHealthBar>(GetUserWidgetObject());	
	}
	if (HealhBarWidget && HealhBarWidget->HealthBar)
	{
		HealhBarWidget->HealthBar->SetPercent(Percent);
	}
}
