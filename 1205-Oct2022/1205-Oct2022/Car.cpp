#include "Car.h"
#include "Vehicle.h"

Car::Car()
{
	m_numberOfWheels = 4;
	cout << "Car constructor" << " Num of wheels: " << m_numberOfWheels << endl;
}

Car::Car(string brand) : Vehicle(brand)
{
	cout << "Car constructor(brand) " << " brand: " << brand << endl;
}

Car::~Car()
{
	cout << "Car destructor" << endl;
}

// Car implementation of the virtual function
unsigned int Car::GetNumberOfWheels()
{
	return 4;
}