#pragma once
#include <SFML/Graphics.hpp>
#include "Reasource.h"
#include "Helper.h"

class InformationDisplay
{
public:
	void draw() const;
private:
	int score;
	int numOfPlayers;
};