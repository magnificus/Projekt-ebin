// Fill out your copyright notice in the Description page of Project Settings.

#include "lab_sim_2018.h"
#include "spookyskeleton.h"


// Sets default values
Aspookyskeleton::Aspookyskeleton()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Aspookyskeleton::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aspookyskeleton::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void Aspookyskeleton::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

