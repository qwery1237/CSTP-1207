#include <iostream>
#include "Player.h"
#include "GameManager.h"
#include "GameManager.h"
#include "GameLoop.h"

using namespace std;

int main()
{
	void RumGame()
	{
		Player p1 = GameManagement::GetPlayerInformation();

		GameManagement::WelcomePlayer(p1.GetName());

		bool isPlaying = true;
		while (isPlaying)
		{
			isPlaying = GameManagement::RunGame();
		}
	}

}