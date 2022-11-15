#pragma once
#include <iostream>
#include "Vehicle.h"

class Car: public Vehicle
{
public:
	Car();
	Car(string brand);
	~Car();

	virtual unsigned int GetNumberOfWheels();
};