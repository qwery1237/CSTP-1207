#include <iostream>
void Quize4 (bool* pb, int n, bool b) {
	for (int i = 0; i < n; i++) {
		if (*(pb + i) != b) {
			*(pb + i) = b;
			std::cout << "true" << std::endl;
		}
		else {
			*(pb + i) = b;
			std::cout << "false" << std::endl;
		}
	}
}