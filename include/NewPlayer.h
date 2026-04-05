#pragma once
#include "Player.h"
class NewPlayer :public Gift
{
public:
	virtual void colide();
private:
	Player m_player;
};
