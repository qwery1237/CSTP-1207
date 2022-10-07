#include <iostream>
using namespace std;

enum class Color {
	Red,
	Green,
	Blue,
};

enum OldColor {
	Red,
	Green,
	Blue
};

enum class Trafficlight {
	Red,
	Yellow,
	Green
};


void TestColorEnum() {

	OldColor olsColoe = Red;

	Color currentColor = Color::Red;

	if (currentColor == Color::Red) {
		cout << "currentColor is RED" << endl;
	}

	int RedColor = 0;
	int BlueColor = 1;
	int GreenColor = 2;

	int currentBasicColor = 0;

	if (currentBasicColor == RedColor) {
		cout << "currentBasicColor is RED" << endl;
	}

}