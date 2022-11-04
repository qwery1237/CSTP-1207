#include "Fraction.h"
#include <iostream>

//Fraction::Fraction()
//{
//	num = 0;
//	den = 0;
//}
//
//Fraction::Fraction(int n)
//{
//	num = 0;
//	den = 0;
//}
//
//Fraction::Fraction(int n, int d)
//{
//	num = 0;
//	den = 0;
//}

int Fraction::GetDen()
{
	return den;
}

int Fraction::GetNum()
{
	return num;
}

void Fraction::Set(int n, int d)
{
	this->num = n;
	this->den = d;
}

int Fraction::GreatestCommonFactor(int a, int b)
{
	if (b == 0)
	{
		return a;
	}

	return GreatestCommonFactor(b, a % b);
}

int Fraction::LowestCommonDenominator(int a, int b)
{
	int max;
	max = (a > b) ? a : b;
	do 
	{
		if (max % a == 0 && max % b == 0) {
			std::cout << max << std::endl;
			return max;
		}
		else
		{
			++max;
		}

	}while(true);
	
}