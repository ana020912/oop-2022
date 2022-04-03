#include "Mercedes.h"

Mercedes::Mercedes()
{
	averageSpeed = 70;
	fuelCapacity = 75;
	fuelConsumption = 7.5;
}

float Mercedes::getFuelCapacity()
{
	return this->fuelCapacity;
}

float Mercedes::getFuelConsumption()
{
	return this->fuelConsumption;
}

float Mercedes::getAvgSpeed()
{
	return this->averageSpeed;
}
