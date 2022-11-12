#pragma once
#include <iostream>
#include "Vehicle.h"

class Car: public Vehicle
{
public:
	Car();
	~Car();

	virtual unsigned int GetNumberOfWheels();
};