#include <iostream>
void Week2Quiz2() {
	int numbers[10];
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		std::cout << "Please enter your numbers: " << "\n";
		std::cin >> numbers[i];
		sum += numbers[i];
	}
	for (int i = 0; i < 10; i++) {
		std::cout << numbers[i] << "\n";
	}
	int getArrayLength = sizeof(numbers) / sizeof(int);
	int average = sum / getArrayLength;
	std::cout << "The Total of numbers is " << sum << "\n";
	std::cout << "The average of numbers is " << average << "\n";


}