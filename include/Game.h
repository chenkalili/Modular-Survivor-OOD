#pragma once
#include "ToolBar.h"
#include "Level.h"

class Game
{
public:
	//void win() 
	//void draw() const
	void run();
private:
	ToolBar m_toolBar;
	Level m_level;
	int m_currLevel;
};