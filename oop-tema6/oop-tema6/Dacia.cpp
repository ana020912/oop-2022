#include "Dacia.h"
Dacia::Dacia()
{
	averageSpeed = 55;
	fuelCapacity = 61.5;
	fuelConsumption = 45;
}

float Dacia::getFuelCapacity()
{
	return this->fuelCapacity;
}

float Dacia::getFuelConsumption()
{
	return this->fuelConsumption;
}

float Dacia::getAvgSpeed()
{
	return this->averageSpeed;
}