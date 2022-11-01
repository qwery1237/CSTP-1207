#pragma once
#include <iostream>
using namespace std;

class PhoneNumber {
public:
	int CountryCode;
	int Areacode;
	int Number;
	int Internal;

public:
	PhoneNumber(int areaCode, int number);
	PhoneNumber(int countryCode, int areaCode, int number);
	PhoneNumber(int countryCode, int areaCode, int number, int internal);
};

