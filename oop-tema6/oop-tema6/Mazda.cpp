#include "Mazda.h"

Mazda::Mazda()
{
	averageSpeed = 70;
	fuelCapacity = 50;
	fuelConsumption = 6;
}

float Mazda::getFuelCapacity()
{
	return this->fuelCapacity;
}

float Mazda::getFuelConsumption()
{
	return this->fuelConsumption;
}

float Mazda::getAvgSpeed()
{
	return this->averageSpeed;
}
