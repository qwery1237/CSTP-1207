#pragma once
#include <iostream>
#include "EngineType.h"

using namespace std;

class Vehicle
{
protected:
	unsigned int m_numberOfWheels;
	EngineType m_engineType;
	string m_brand;

public:
	Vehicle();
	Vehicle(string brand);
	~Vehicle();
	// a virtural method which can be overriden in derived classes 


	virtual unsigned int GetNumberOfWheels();
	string GetBrand();
	void SetBrand(string brand);

};