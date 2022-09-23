#include <iostream>
void Quize4 (bool* pb, int n, bool b) {
	for (int i = 0; i < 4; i++) {
		if (pb[i]== b) {
			std::cout << "true" << std::endl;
		}
		else {
			std::cout << "flase" << std::endl;
		}
	}
}