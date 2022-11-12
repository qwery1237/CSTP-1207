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
	return shouldRunGame;
}

void GameManagement::GivePlayerOptions()
{
	cout << "Please enter your options: NewGame or Quit" << endl;

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



