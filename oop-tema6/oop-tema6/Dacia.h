#pragma once
#include "Car.h"
class Dacia : public Car {
public:
	Dacia();
	float getFuelCapacity();
	float getFuelConsumption();
	float getAvgSpeed();
};