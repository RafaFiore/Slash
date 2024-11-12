#pragma once

UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	ECS_Unequipped UMETA(DisplayName = "Unequipped"),
	ECS_EquippedOneHandedWeapon UMETA(DisplayName = "EquippedOneHandedWeapon"),
	ECS_EquippedTwoHandedWeapon UMETA(DisplayName = "EquippedTwoHandedWeapon")
};

UENUM(BlueprintType)
enum class EActionState : uint8
{
	EAS_Unoccupied UMETA(DisplayName = "Unoccupied"),
	EAS_HitReaction UMETA(DisplayName = "HitReaction"),
	EAS_Attacking UMETA(DisplayName = "Attacking"),
	EAS_EquippingWeapon UMETA(DisplayName = "Equipping Weapon"),
	EAS_Dodge UMETA(DisplayName = "Dodge"),
	EAS_Dead UMETA(DisplayName = "Dead")
};


UENUM(BlueprintType)
enum class EDeathPose : uint8
{
	EDP_DeathLeft UMETA(DisplayName = "Death Left"),
	EDP_DeathRight UMETA(DisplayName = "Death Right"),
	EDP_DeathForward UMETA(DisplayName = "Death Forward"),
	EDP_DeathBackward UMETA(DisplayName = "Death Backward")
};

UENUM(BlueprintType)
enum class EEnemyState : uint8
{
	EES_Dead UMETA(DisplayName = "Dead"),
	EES_Patrolling UMETA(DisplayName = "Patrolling"),
	EES_Chasing UMETA(DisplayName = "Chasing"),
	EES_Attacking UMETA(DisplayName = "Attacking"),
	EES_Engaged UMETA(DisplayName = "Engaged"),
	EES_NoState UMETA(DisplayName = "No State")
};

UENUM(BlueprintType)
enum class ELastHit : uint8
{
	ELH_NoHit UMETA(DisplayName = "No Hit"),
	ELH_FromLeft UMETA(DisplayName = "From Left"),
	ELH_FromRight UMETA(DisplayName = "From Right"),
	ELH_FromBackward UMETA(DisplayName = "From Backward"),
	ELH_FromForward UMETA(DisplayName = "From Forward")
};