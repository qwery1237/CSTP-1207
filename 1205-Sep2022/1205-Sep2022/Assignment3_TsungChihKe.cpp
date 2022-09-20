#include <iostream>

void Assignment3(int* ptr , int n) {

	for (int i = 0; i < n; i++) {
		std::cout << ptr[i]  << std::endl;
	}

}

void CalculateAverage(int* pi, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += pi[i];
	}
	
	int average = sum / n;

	std::cout << "The array average of all elements is: " << average << std::endl;
}

