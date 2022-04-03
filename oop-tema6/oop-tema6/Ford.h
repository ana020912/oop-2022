#pragma once
#include "Car.h"
class Ford : public Car {
public:
	Ford();
	float getFuelCapacity();
	float getFuelConsumption();
	float getAvgSpeed();
};