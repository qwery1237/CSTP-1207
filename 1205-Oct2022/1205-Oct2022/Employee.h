#pragma once
#include <iostream>
#include "Address.h"
#include "PhoneNumber.h"

using namespace std;

class Employee
{
private:
	int ID;
	string FirstName;
	string LastName;
	string Department;
	Address* ContactAddress;
	Address* HomeAddress;
	PhoneNumber* HomeNumber;
	PhoneNumber* CellNumber;

public:
	Employee();
};