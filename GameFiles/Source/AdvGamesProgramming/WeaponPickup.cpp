// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponPickup.h"
#include "Math/UnrealMathUtility.h"

void AWeaponPickup::OnGenerate()
{
	APickup::OnGenerate();

	float roll = FMath::FRandRange(0, 1);

	if (roll <= 0.05f)
	{
		AWeaponPickup::Rarity = WeaponPickupRarity::LEGENDARY;
	}
	if (roll > 0.05f && roll <= 0.15f)
	{
		AWeaponPickup::Rarity = WeaponPickupRarity::MASTER;
	}
	if (roll > 0.15f && roll <= 0.3f)
	{
		AWeaponPickup::Rarity = WeaponPickupRarity::RARE;
	}
	if (roll > 0.5f)
	{
		AWeaponPickup::Rarity = WeaponPickupRarity::COMMON;
	}

	// 0: Bullet Damage
	// 1: MuzzleVelocity
	// 2: MagazineSize
	// 3: WeaponAccuracy
	TMap<int32, float> QualityRolls;
	for (int32 i = 0; i < 4; i++)
	{
		QualityRolls.Add(i, FMath::FRandRange(0, 1));
	}
	switch (AWeaponPickup::Rarity)
	{
	case WeaponPickupRarity::LEGENDARY:
		SetStatQuality(4, QualityRolls);
		break;
	case WeaponPickupRarity::MASTER:
		SetStatQuality(3, QualityRolls);
		break;
	case WeaponPickupRarity::RARE:
		SetStatQuality(1, QualityRolls);
		break;
	case WeaponPickupRarity::COMMON:
		SetStatQuality(0, QualityRolls);
		break;
	default:
		break;
	}
}

void AWeaponPickup::SetStatQuality(int32 NumberOfGood, TMap<int32, float> QualityRolls)
{
	QualityRolls.ValueSort([](const int32& A, const int32& B)
	{
		return A > B;
	});

	int32 i = 0;
	for (auto& Entry : QualityRolls)
	{
		if (i < NumberOfGood)
		{
			// Good Rolls
			switch (Entry.Key)
			{
			// Bullet Damage
			case 0:
				BulletDamage = FMath::FRandRange(15, 30);
				break;
			// Muzzle Velocity
			case 1:
				MuzzleVelocity = FMath::FRandRange(10000, 20000);
				break;
			// Magazine Size
			case 2:
				MagazineSize = FMath::FRandRange(20, 100);
				break;
			// Weapon Accuracy
			case 3:
				WeaponAccuracy = FMath::FRandRange(100, 1000);
				break;
			default:
				break;
			}
		}
		else
		{
			// Bad Rolls
			switch (Entry.Key)
			{
				// Bullet Damage
			case 0:
				BulletDamage = FMath::FRandRange(2, 15);
				break;
				// Muzzle Velocity
			case 1:
				MuzzleVelocity = FMath::FRandRange(5000, 10000);
				break;
				// Magazine Size
			case 2:
				MagazineSize = FMath::FRandRange(1, 20);
				break;
				// Weapon Accuracy
			case 3:
				WeaponAccuracy = FMath::FRandRange(20, 80);
				break;
			default:
				break;
			}
		}
		i++;
	}
}
