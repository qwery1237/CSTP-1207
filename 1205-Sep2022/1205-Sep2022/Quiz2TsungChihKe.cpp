#include <iostream>
void Week2Quiz2() {
	int numbers[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		std::cout << numbers[i] << "\n";
		sum += numbers[i];
	}
	int getArrayLength = sizeof(numbers) / sizeof(int);
	int average = sum / getArrayLength;
	std::cout << sum << "\n";
	std::cout << average << "\n";


}