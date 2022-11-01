#pragma once
class Fraction
{
private:
	int num; // Numerator 
	int den; // denominator

public:
	Fraction();
	Fraction(int n);
	Fraction(int n, int d);
	Fraction(Fraction const& src);
	void Set(int n, int d);
	void SetN(int n);
	int GetNum();
	int GetDen();
	

private:
	int GreatestCommonFactor(int a, int b);
	int LowestCommonDenominator(int a, int b);
};
