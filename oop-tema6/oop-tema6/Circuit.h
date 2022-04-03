#pragma once
#include "Car.h"
#include "Weather.h"
class Circuit
{
	Car* cars[20];
	unsigned carsNumber;
	float length;
	Weather w;
public:
	void setLength(float length);
	void setWeather(Weather w);
	void addCar(Car *newCar);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};