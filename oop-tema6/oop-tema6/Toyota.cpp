#include "Toyota.h"
Toyota::Toyota()
{
    averageSpeed = 62;
    fuelCapacity = 65;
    fuelConsumption = 50;
}

float Toyota::getFuelCapacity()
{
    return this->fuelCapacity;
}

float Toyota::getFuelConsumption()
{
    return this->fuelConsumption;
}

float Toyota::getAvgSpeed()
{
    return this->averageSpeed;
}
