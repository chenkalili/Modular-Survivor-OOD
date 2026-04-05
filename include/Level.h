#pragma once
#include "Player.h"
#include "MovedObject.h"
#include "InformationDisplay.h"
#include "Coins.h"
#include "Background.h"
#include "Animation.h"

class Level
{
public:
	void run();
	//bool win();
	void init();
	void draw();
private:
	Background m_background;
	Player m_player;
	//std::vector<Player> m_player;
	std::vector<Coins> m_Coins;
	std::vector<MovedObject> m_Object;
	InformationDisplay m_inform;
};

