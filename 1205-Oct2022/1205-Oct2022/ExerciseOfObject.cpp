#include "Point.h"
#include "Fraction.h"
#include <iostream>

//exercise 1

void Point::SetX(int x) {
	this->x = x;

}

void Point::SetY(int y) {
	this->y = y;
}

//exercise 2

void Point::LitmitSetX(int x) {
	if (x < -100) {
		this->x = -100;
	}
	if (x > 100 )
	{
		this->x = 100;
	}
}

void Point::LitmitSetY(int y) {
	if (y < -100) {
		this->y = -100;
	}
	if (y > 100)
	{
		this->y = 100;
	}	
}


//exercise 3
Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}

Point pointArray[10];

void Point::arrSet(int x, int y) {
	for (int i = 0; i < 10; i++) {
		if (x == 1 && y == 0) {
			pointArray[0] = Point(this->x = x, this->y = y);
			std::cout << this->y << std::endl;
			x++;

		}else {
			pointArray[i] = Point(this->x = this->x * 2, this->y = this->y + 1);
			std::cout << this->y << std::endl;

		}
	}	
}

//exercise 4
Fraction::Fraction()
{
	num = 0;
	den = 0;
}

Fraction::Fraction(int n)
{
	SetN(n);
}

Fraction::Fraction(int n, int d)
{
	Set(n, d);
}

void Fraction::SetN(int n)
{
	this->num = n;
}

Fraction::Fraction(Fraction const& src)
{
	num = src.num;
	den = src.den;
}