#pragma once
#include "Weather.h"

class Car 
{
protected:
	float fuelCapacity;
	float fuelConsumption;
	float averageSpeed;
public:
	virtual float getFuelCapacity() = 0;
	virtual float getFuelConsumption() = 0;
	virtual float getAvgSpeed() = 0;
	virtual void setWeather(Weather w) = 0;
};