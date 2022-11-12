#include <iostream>

void Print(int* pi, int n) {

	for (int i = 0; i < n; i++) {
		std::cout << *(pi + i)  << std::endl;
	}

}

int CalculateAverage(int* pi, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += *(pi + i);
	}
	
	int average = sum / n;
	return average;
}

