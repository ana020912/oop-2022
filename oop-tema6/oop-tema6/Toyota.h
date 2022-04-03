#pragma once
#include "Car.h"
class Toyota : public Car {
public:
	Toyota();
	float getFuelCapacity();
	float getFuelConsumption();
	float getAvgSpeed();
};