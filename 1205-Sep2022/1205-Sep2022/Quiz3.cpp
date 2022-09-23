#include <iostream>
void Quize3(bool* pb, int n) {
	for (int i = 0; i < 4; i++) {
		    //pb[i]
		if (*(pb + i)) {
			std::cout << "true" << std::endl;
		}
		else {
			std::cout << "flase" << std::endl;
		}
	}
}


