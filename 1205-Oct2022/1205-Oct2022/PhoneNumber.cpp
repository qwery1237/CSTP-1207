#include "PhoneNumber.h"
#include <iostream>
using namespace std;

PhoneNumber::PhoneNumber(int areaCode, int number) {
	if (areaCode <= 0 || areaCode > 999)
	{
		cout << "error initializing PhoneNumber. AreaCode: " << areaCode << endl;

	}

	Areacode = areaCode;
	Number = number;
	CountryCode = 0;
		Internal = 0;
}
