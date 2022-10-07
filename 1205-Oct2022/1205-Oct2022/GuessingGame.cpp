#include <iostream>
using namespace std;

void GuessingCame() {
	int guessNum = 0;

	cout << "Please Enter a number from 0 and 9: ";
	cin >> guessNum;

	srand(time(NULL));
	// get a random number between 0 and 100
	unsigned int myNum = rand() % 9;

	if (guessNum == myNum) {
		cout << "Congratulations, you won the game" << endl;
	}
	else {
		cout << "Sorry, you lost the game" << endl;
	}

}