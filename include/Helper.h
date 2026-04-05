#pragma once
#include "Reasource.h"

using std::vector;

const int WIN_X = 1900;
const int WIN_Y = 1060;
const int N_OF_BACK_PICS = 6;
const int BACK1_PIC = 0;
const int BACK2_PIC = 1;
const int BACK3_PIC = 2;
const int BACK4_PIC = 3;
const int BACK5_PIC = 4;
const int BACK6_PIC = 5;
const int PLAYER_PIC = 6;
const float MOVE_RATE = 4;
const auto AnimationTime = sf::seconds(0.05f);

class Pic : public sf::Sprite
{
public:
	void init(int i)
	{
		m_tex=Reasource::reasource().getPic(i);
		setTexture(m_tex);
		setOrigin(0,(getLocalBounds().height) );
		setPosition(0, WIN_Y);
	}
	
	void repeat(){ m_tex.setRepeated(true); }
private:
	sf::Texture m_tex;
};