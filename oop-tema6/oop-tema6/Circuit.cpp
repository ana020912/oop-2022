#include "Circuit.h"

void Circuit::setLength(float length)
{
	this->length = length;
}

void Circuit::setWeather(Weather w)
{
	this->w = w;
	for (unsigned i = 0; i < carsNumber; ++i) {
		cars[i]->setWeather(w);
	}
}

void Circuit::addCar(Car *newCar)
{
	newCar->setWeather(this->w);
	cars[carsNumber++] = newCar;
}

void Circuit::Race()
{

}

void Circuit::ShowFinalRanks()
{

}

void Circuit::ShowWhoDidNotFinish()
{

}
