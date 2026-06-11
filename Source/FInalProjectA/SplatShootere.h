// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShooterProjectile.h"
#include "SplatShootere.generated.h"

class USphereComponent;
class UProjectileMovementComponent;


UCLASS(config=Game)
class FINALPROJECTA_API ASplatShootere : public AShooterProjectile
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
	USphereComponent* CollisionComp;

	// Projectile movement component.
	/*UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))*/

	UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* ballMesh;

	UPROPERTY(EditAnywhere)
	UMaterial* baseMat;
	
public:	
	// Sets default values for this actor's properties
	ASplatShootere();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	// Returns CollisionComp subobject
	USphereComponent* GetCollisionComp() const { return CollisionComp; }

	// Returns ProjectileMovement subobject
	UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; };

};
