#include <iostream>
#include "GameManager.h"
#include "Player.h"

using namespace std;

void GameManagement::WelcomePlayer(const string& name)
{
	cout << "Welcome back " << name << " !" << endl;
}

bool GameManagement::RunGame()
{
	GameManagement::GivePlayerOptions();
	string playerInput;
	GameManagement::GetPlayerInput(playerInput);

	bool shouldRunGame = EvaluatePlayerInput(playerInput) != PlayerOptions::Quit;
	cout << shouldRunGame << endl;
	// Check to see if the player wants to end it - hint: return
	if (shouldRunGame != true)
	{
		return shouldRunGame;
	}else 
	{
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

		} while (gameCounter < 20);
	}
	// Run your game here


	// when the game ends
	return shouldRunGame;
}

void GameManagement::GivePlayerOptions()
{
	cout << "Please enter your options: NewGame or Quit" << endl;
	string playerInput;
	GameManagement::GetPlayerInput(playerInput);
	// assignment 10: 
	// provide the text that explains (lists) the options
	// ask user to enter the input
	/*cout << playerInput << endl;*/
}

void GameManagement::GetPlayerInput(string& playerInput)
{
	cin >> playerInput;
}

PlayerOptions GameManagement::EvaluatePlayerInput(const string& input)
{
	// assignment 10: check the validity and return the appropriate enum value
	if (input == "NewGame"){
		return PlayerOptions::NewGame;
	}
	else
	{
		return PlayerOptions::Quit;
	}
}

Player GameManagement::GetPlayerInformation()
{
	// Get the Player username and player name from the console input
	// Create the player object and return it from the function
	string username{};
	string name{};
	cout << "Please Enter your username: ";
	cin >> username;
	cout << "Please Enter your name: ";
	cin >> name;

	return Player(username, name);


}



