#include <iostream>
using namespace std;

void Assignment6() {
	
	int gameCounter = 0;
	int winCounter = 0;
	int lostCounter = 0;
	do
	{
		int enterNum = 0;
		cout << "Please Enter a number from 0 and 49: ";
				
		if (cin >> enterNum) 
		{
			cout << "Please enter a number";
			
			cout << "Your number is " << enterNum << endl;
			unsigned int ranNum = rand() % 49;
			if (enterNum == ranNum) {
				cout << "Congratulations, you won the game" << endl;
				winCounter++;
				gameCounter++;
			}
			else
			{
				cout << "sorry, you did not win, please try again" << endl;
				lostCounter++;
				gameCounter++;
			}			
		}
		else 
		{
			cin.clear();
			cin.ignore(123, '\n');
			cout << "You lost once chance. It's not a number, Please enter again \n";
			gameCounter++;
			lostCounter++;
		}

		char playAgain;
		if (gameCounter == 20) {
			cout << "Game Over, you lost. Do you want to play again? Please enter 'Y' or 'N'";
			cin >> playAgain; 
			if (tolower(playAgain) == 'y') {
				gameCounter = 0;
			}
			else
			{
				cout << "you won " << winCounter << " time," << "lost " << lostCounter << " time" << endl;
			}
		}
	
	} while (gameCounter <20);

}