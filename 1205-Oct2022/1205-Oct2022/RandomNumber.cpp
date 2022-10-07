#include <iostream>

using namespace std;

void ExamineBasicRandomNumbers() {
	// set the random number generation based on current time
	srand(time(NULL));
	// get a random number between 0 and 100
	unsigned int number = rand() % 100;

	cout << "random number was: " << number << endl;


}