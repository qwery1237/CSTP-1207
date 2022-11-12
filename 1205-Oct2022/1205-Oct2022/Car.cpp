#include "Car.h"

Car::Car()
{
	m_numberOfWheels = 4;
}

Car::~Car()
{
	cout << "Car destructor" << endl;
}

unsigned int Car::GetNumberOfWheels()
{
	return 4;
}