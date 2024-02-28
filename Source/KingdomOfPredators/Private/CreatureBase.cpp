// Fill out your copyright notice in the Description page of Project Settings.


#include "CreatureBase.h"

// Sets default values for this component's properties
UCreatureBase::UCreatureBase()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCreatureBase::BeginPlay()
{
	Super::BeginPlay();

	// print hello world to console
	
	
}


// Called every frame
void UCreatureBase::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// print "hello world" to output log
	UE_LOG(LogTemp, Warning, TEXT("Hello World"));
}

