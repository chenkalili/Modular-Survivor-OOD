#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <vector>
#include "AnimData.h"
class Reasource
{
public:
	static Reasource& reasource();
	sf::Texture& getPic(int index);
	sf::Font& getFont();
	sf::RenderWindow& getWin();
	AnimationData& animationData(objects object);
private:
	Reasource();
	AnimationData PlayerData();
	void LoadingPic();
	//void LoadinSound();
	std::vector <sf::Texture> m_texture;
	//std::vector <sf::SoundBuffer> m_soundBuffer;
	sf::RenderWindow m_window;
	sf::Font m_font;
	vector<AnimationData> m_data;
	//sf::Sound m_sound;
	//sf::Sound m_backgroundSound;
};
