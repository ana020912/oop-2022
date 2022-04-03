#pragma once
#include "Car.h"
class Mazda : public Car {
public:
	Mazda();
	float getFuelCapacity();
	float getFuelConsumption();
	float getAvgSpeed();
};
