// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GAME2013.h"
#include "GAME2013.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAME2013() {}
	void AGAME2013GameMode::StaticRegisterNativesAGAME2013GameMode()
	{
	}
	IMPLEMENT_CLASS(AGAME2013GameMode, 1728309805);
	void UMyAnimInstance::StaticRegisterNativesUMyAnimInstance()
	{
	}
	IMPLEMENT_CLASS(UMyAnimInstance, 2362919451);
	void AMyProjectile::StaticRegisterNativesAMyProjectile()
	{
	}
	IMPLEMENT_CLASS(AMyProjectile, 3632064948);
	void AWeapon::StaticRegisterNativesAWeapon()
	{
	}
	IMPLEMENT_CLASS(AWeapon, 133139824);
	void AMyCharacter::StaticRegisterNativesAMyCharacter()
	{
	}
	IMPLEMENT_CLASS(AMyCharacter, 1847977211);
	void AMyPickUp::StaticRegisterNativesAMyPickUp()
	{
		FNativeFunctionRegistrar::RegisterFunction(AMyPickUp::StaticClass(),"OnBeginOverlap",(Native)&AMyPickUp::execOnBeginOverlap);
	}
	IMPLEMENT_CLASS(AMyPickUp, 357747353);
	void AMyPlayerState::StaticRegisterNativesAMyPlayerState()
	{
	}
	IMPLEMENT_CLASS(AMyPlayerState, 1388039577);
	void ANormalHitWeapon::StaticRegisterNativesANormalHitWeapon()
	{
	}
	IMPLEMENT_CLASS(ANormalHitWeapon, 490103632);
	void AWeaponMelee::StaticRegisterNativesAWeaponMelee()
	{
		FNativeFunctionRegistrar::RegisterFunction(AWeaponMelee::StaticClass(),"OnBeginOverlap",(Native)&AWeaponMelee::execOnBeginOverlap);
	}
	IMPLEMENT_CLASS(AWeaponMelee, 385692386);
	void AWeaponMeleeBlunt::StaticRegisterNativesAWeaponMeleeBlunt()
	{
	}
	IMPLEMENT_CLASS(AWeaponMeleeBlunt, 2713624952);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();
	ENGINE_API class UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_APlayerState();
	ENGINE_API class UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();

	GAME2013_API class UClass* Z_Construct_UClass_AGAME2013GameMode_NoRegister();
	GAME2013_API class UClass* Z_Construct_UClass_AGAME2013GameMode();
	GAME2013_API class UClass* Z_Construct_UClass_UMyAnimInstance_NoRegister();
	GAME2013_API class UClass* Z_Construct_UClass_UMyAnimInstance();
	GAME2013_API class UClass* Z_Construct_UClass_AMyProjectile_NoRegister();
	GAME2013_API class UClass* Z_Construct_UClass_AMyProjectile();
	GAME2013_API class UClass* Z_Construct_UClass_AWeapon_NoRegister();
	GAME2013_API class UClass* Z_Construct_UClass_AWeapon();
	GAME2013_API class UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	GAME2013_API class UClass* Z_Construct_UClass_AMyCharacter();
	GAME2013_API class UFunction* Z_Construct_UFunction_AMyPickUp_OnBeginOverlap();
	GAME2013_API class UClass* Z_Construct_UClass_AMyPickUp_NoRegister();
	GAME2013_API class UClass* Z_Construct_UClass_AMyPickUp();
	GAME2013_API class UClass* Z_Construct_UClass_AMyPlayerState_NoRegister();
	GAME2013_API class UClass* Z_Construct_UClass_AMyPlayerState();
	GAME2013_API class UClass* Z_Construct_UClass_ANormalHitWeapon_NoRegister();
	GAME2013_API class UClass* Z_Construct_UClass_ANormalHitWeapon();
	GAME2013_API class UFunction* Z_Construct_UFunction_AWeaponMelee_OnBeginOverlap();
	GAME2013_API class UClass* Z_Construct_UClass_AWeaponMelee_NoRegister();
	GAME2013_API class UClass* Z_Construct_UClass_AWeaponMelee();
	GAME2013_API class UClass* Z_Construct_UClass_AWeaponMeleeBlunt_NoRegister();
	GAME2013_API class UClass* Z_Construct_UClass_AWeaponMeleeBlunt();
	GAME2013_API class UPackage* Z_Construct_UPackage_GAME2013();
	UClass* Z_Construct_UClass_AGAME2013GameMode_NoRegister()
	{
		return AGAME2013GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AGAME2013GameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage_GAME2013();
			OuterClass = AGAME2013GameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GAME2013GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("GAME2013GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGAME2013GameMode(Z_Construct_UClass_AGAME2013GameMode, TEXT("AGAME2013GameMode"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGAME2013GameMode);
	UClass* Z_Construct_UClass_UMyAnimInstance_NoRegister()
	{
		return UMyAnimInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UMyAnimInstance()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UAnimInstance();
			Z_Construct_UPackage_GAME2013();
			OuterClass = UMyAnimInstance::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900088;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Speed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Speed"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(Speed, UMyAnimInstance), 0x0000080000020015);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("AnimInstance"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyAnimInstance.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyAnimInstance.h"));
				MetaData->SetValue(NewProp_Speed, TEXT("Category"), TEXT("MyAnimInstance"));
				MetaData->SetValue(NewProp_Speed, TEXT("ModuleRelativePath"), TEXT("MyAnimInstance.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyAnimInstance(Z_Construct_UClass_UMyAnimInstance, TEXT("UMyAnimInstance"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAnimInstance);
	UClass* Z_Construct_UClass_AMyProjectile_NoRegister()
	{
		return AMyProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage_GAME2013();
			OuterClass = AMyProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Mesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mesh"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(Mesh, AMyProjectile), 0x00000800000a0009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_Collider = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Collider"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(Collider, AMyProjectile), 0x00000800000a0009, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_MovementComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MovementComponent"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(MovementComponent, AMyProjectile), 0x00000800000a0009, Z_Construct_UClass_UProjectileMovementComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyProjectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyProjectile.h"));
				MetaData->SetValue(NewProp_Mesh, TEXT("Category"), TEXT("MyProjectile"));
				MetaData->SetValue(NewProp_Mesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh, TEXT("ModuleRelativePath"), TEXT("MyProjectile.h"));
				MetaData->SetValue(NewProp_Collider, TEXT("Category"), TEXT("MyProjectile"));
				MetaData->SetValue(NewProp_Collider, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Collider, TEXT("ModuleRelativePath"), TEXT("MyProjectile.h"));
				MetaData->SetValue(NewProp_MovementComponent, TEXT("Category"), TEXT("MyProjectile"));
				MetaData->SetValue(NewProp_MovementComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MovementComponent, TEXT("ModuleRelativePath"), TEXT("MyProjectile.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectile(Z_Construct_UClass_AMyProjectile, TEXT("AMyProjectile"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectile);
	UClass* Z_Construct_UClass_AWeapon_NoRegister()
	{
		return AWeapon::StaticClass();
	}
	UClass* Z_Construct_UClass_AWeapon()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage_GAME2013();
			OuterClass = AWeapon::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900081;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_AttackSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AttackSpeed"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(AttackSpeed, AWeapon), 0x0000080000010001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Weapon.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Weapon.h"));
				MetaData->SetValue(NewProp_AttackSpeed, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_AttackSpeed, TEXT("ModuleRelativePath"), TEXT("Weapon.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon(Z_Construct_UClass_AWeapon, TEXT("AWeapon"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
	UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
	{
		return AMyCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage_GAME2013();
			OuterClass = AMyCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ProjectileClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileClass"), RF_Public|RF_Transient|RF_Native) UClassProperty(CPP_PROPERTY_BASE(ProjectileClass, AMyCharacter), 0x0004080000000001, Z_Construct_UClass_AMyProjectile_NoRegister());
				UProperty* NewProp_RotationSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RotationSpeed"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(RotationSpeed, AMyCharacter), 0x0000080000000001);
				UProperty* NewProp_Camera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Camera"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(Camera, AMyCharacter), 0x00000000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, AMyCharacter), 0x00000000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyCharacter.h"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("Category"), TEXT("MyCharacter"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ModuleRelativePath"), TEXT("MyCharacter.h"));
				MetaData->SetValue(NewProp_RotationSpeed, TEXT("Category"), TEXT("MyCharacter"));
				MetaData->SetValue(NewProp_RotationSpeed, TEXT("ModuleRelativePath"), TEXT("MyCharacter.h"));
				MetaData->SetValue(NewProp_Camera, TEXT("Category"), TEXT("MyCharacter"));
				MetaData->SetValue(NewProp_Camera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Camera, TEXT("ModuleRelativePath"), TEXT("MyCharacter.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("MyCharacter"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("MyCharacter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCharacter(Z_Construct_UClass_AMyCharacter, TEXT("AMyCharacter"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
	UFunction* Z_Construct_UFunction_AMyPickUp_OnBeginOverlap()
	{
		struct MyPickUp_eventOnBeginOverlap_Parms
		{
			AActor* OtherActor;
		};
		UObject* Outer=Z_Construct_UClass_AMyPickUp();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnBeginOverlap"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00080400, 65535, sizeof(MyPickUp_eventOnBeginOverlap_Parms));
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, MyPickUp_eventOnBeginOverlap_Parms), 0x0000000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyPickUp.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyPickUp_NoRegister()
	{
		return AMyPickUp::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyPickUp()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage_GAME2013();
			OuterClass = AMyPickUp::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900081;

				OuterClass->LinkChild(Z_Construct_UFunction_AMyPickUp_OnBeginOverlap());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Mesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mesh"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(Mesh, AMyPickUp), 0x00000800000a001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_Collider = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Collider"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(Collider, AMyPickUp), 0x00000800000a001d, Z_Construct_UClass_USphereComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_AMyPickUp_OnBeginOverlap()); // 2410713747
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyPickUp.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyPickUp.h"));
				MetaData->SetValue(NewProp_Mesh, TEXT("Category"), TEXT("MyPickUp"));
				MetaData->SetValue(NewProp_Mesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh, TEXT("ModuleRelativePath"), TEXT("MyPickUp.h"));
				MetaData->SetValue(NewProp_Collider, TEXT("Category"), TEXT("MyPickUp"));
				MetaData->SetValue(NewProp_Collider, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Collider, TEXT("ModuleRelativePath"), TEXT("MyPickUp.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPickUp(Z_Construct_UClass_AMyPickUp, TEXT("AMyPickUp"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPickUp);
	UClass* Z_Construct_UClass_AMyPlayerState_NoRegister()
	{
		return AMyPlayerState::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyPlayerState()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerState();
			Z_Construct_UPackage_GAME2013();
			OuterClass = AMyPlayerState::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900280;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyPlayerState.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyPlayerState.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPlayerState(Z_Construct_UClass_AMyPlayerState, TEXT("AMyPlayerState"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerState);
	UClass* Z_Construct_UClass_ANormalHitWeapon_NoRegister()
	{
		return ANormalHitWeapon::StaticClass();
	}
	UClass* Z_Construct_UClass_ANormalHitWeapon()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AWeapon();
			Z_Construct_UPackage_GAME2013();
			OuterClass = ANormalHitWeapon::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ANormalHitWeapon.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ANormalHitWeapon.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANormalHitWeapon(Z_Construct_UClass_ANormalHitWeapon, TEXT("ANormalHitWeapon"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANormalHitWeapon);
	UFunction* Z_Construct_UFunction_AWeaponMelee_OnBeginOverlap()
	{
		struct WeaponMelee_eventOnBeginOverlap_Parms
		{
			AActor* OtherActor;
		};
		UObject* Outer=Z_Construct_UClass_AWeaponMelee();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnBeginOverlap"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00080400, 65535, sizeof(WeaponMelee_eventOnBeginOverlap_Parms));
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, WeaponMelee_eventOnBeginOverlap_Parms), 0x0000000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WeaponMelee.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeaponMelee_NoRegister()
	{
		return AWeaponMelee::StaticClass();
	}
	UClass* Z_Construct_UClass_AWeaponMelee()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AWeapon();
			Z_Construct_UPackage_GAME2013();
			OuterClass = AWeaponMelee::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900081;

				OuterClass->LinkChild(Z_Construct_UFunction_AWeaponMelee_OnBeginOverlap());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_DamageDealt = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DamageDealt"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(DamageDealt, AWeaponMelee), 0x0000080000010001);
				UProperty* NewProp_Collider = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Collider"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(Collider, AWeaponMelee), 0x00000800000a0009, Z_Construct_UClass_UCapsuleComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_AWeaponMelee_OnBeginOverlap()); // 2115044240
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WeaponMelee.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("WeaponMelee.h"));
				MetaData->SetValue(NewProp_DamageDealt, TEXT("Category"), TEXT("WeaponMelee"));
				MetaData->SetValue(NewProp_DamageDealt, TEXT("ModuleRelativePath"), TEXT("WeaponMelee.h"));
				MetaData->SetValue(NewProp_Collider, TEXT("Category"), TEXT("WeaponMelee"));
				MetaData->SetValue(NewProp_Collider, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Collider, TEXT("ModuleRelativePath"), TEXT("WeaponMelee.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponMelee(Z_Construct_UClass_AWeaponMelee, TEXT("AWeaponMelee"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponMelee);
	UClass* Z_Construct_UClass_AWeaponMeleeBlunt_NoRegister()
	{
		return AWeaponMeleeBlunt::StaticClass();
	}
	UClass* Z_Construct_UClass_AWeaponMeleeBlunt()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AWeaponMelee();
			Z_Construct_UPackage_GAME2013();
			OuterClass = AWeaponMeleeBlunt::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Mesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mesh"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(Mesh, AWeaponMeleeBlunt), 0x00000800000a0009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WeaponMeleeBlunt.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("WeaponMeleeBlunt.h"));
				MetaData->SetValue(NewProp_Mesh, TEXT("Category"), TEXT("WeaponMeleeBlunt"));
				MetaData->SetValue(NewProp_Mesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh, TEXT("ModuleRelativePath"), TEXT("WeaponMeleeBlunt.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponMeleeBlunt(Z_Construct_UClass_AWeaponMeleeBlunt, TEXT("AWeaponMeleeBlunt"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponMeleeBlunt);
	UPackage* Z_Construct_UPackage_GAME2013()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/GAME2013")), false, false));
			ReturnPackage->PackageFlags |= PKG_CompiledIn | 0x00000000;
			FGuid Guid;
			Guid.A = 0x56AF67E4;
			Guid.B = 0x10DE054B;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
