#pragma once
class Point
{
	//Data Members
public:
	int x;
	int y;

	//Function Members
public:
	Point();
	Point(int x, int y);
	Point(Point const& src);
	int GetX();
	int GetY();

	void Set(int x, int y);
	void SetX(int x);
	void SetY(int y);
	void LitmitSetX(int x);
	void LitmitSetY(int y);
	void arrSet(int x, int y);
	
};
void TestPointObject();
