#include "Vehicle.h"
#include <string>
using namespace std;

Vehicle::Vehicle() : m_numberOfWheels(0)
{
	cout << "Vehicle constructor" << " Num of wheels: " << m_numberOfWheels << endl;
}

Vehicle::Vehicle(string brand)
{
	m_brand = brand;
}

unsigned int Vehicle::GetNumberOfWheels()
{
	return m_numberOfWheels;
}

Vehicle::~Vehicle()
{
	cout << "Vehicle destructor" << endl;
}

string Vehicle::GetBrand() {
	return m_brand;
}

void Vehicle::SetBrand(string brand) {
	m_brand = brand;
}