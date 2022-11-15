#pragma once
#include <iostream>
#include "Player.h"
#include "Entity.h"

using namespace std;

class Game : public Entity
{
private:
	bool RunGame();
	Player GetPlayerInformation();
	void WelcomePlayer(const string& name);

public:

	void StartGame();
	virtual void Update();
};