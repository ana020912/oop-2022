#include "Ford.h"



Ford::Ford()
{
	averageSpeed = 73;
	fuelCapacity = 80;
	fuelConsumption = 74.3;
}

float Ford::getFuelCapacity()
{
	return this->fuelCapacity;
}

float Ford::getFuelConsumption()
{
	return this->fuelConsumption;
}

float Ford::getAvgSpeed()
{
	return this->averageSpeed;
}
