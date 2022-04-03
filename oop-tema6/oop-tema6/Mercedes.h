#pragma once
#include "Car.h"
class Mercedes : public Car {
public:
	Mercedes();
	float getFuelCapacity();
	float getFuelConsumption();
	float getAvgSpeed();
};