#include <iostream>

void BasicSwitchCase() {
	int n = 3;
	if (n == 1) {
		//
	}
	else if (n == 2) {

	}
	else if (n == 3) {

	}
	else if (n == 4) {

	}
	else {
		std::cout << "Error - n has to be between 1 and 4." << std::endl;
	}

	switch (n) {
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		std::cout << "Error - n has to be between 1 and 4." << std::endl;
		break;
	}

	char c = 's';

	switch (c) {
	case'a':
	case'e':
	case'i':
	case'o':
	case'u':
		std::cout << "Char c is a vowel";
		break;
	default:
		std::cout << "char c is not a vowel";

	}
}