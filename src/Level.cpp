#include "Level.h"

void Level::run()
{
	auto gameClock = sf::Clock();
	while (Reasource::reasource().getWin().isOpen())
	{
		Reasource::reasource().getWin().clear();
		draw();
		Reasource::reasource().getWin().display();
		sf::Event event;
		while (Reasource::reasource().getWin().pollEvent(event))
		{
			if ((event.type == sf::Event::Closed) ||
				((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape)))
				Reasource::reasource().getWin().close();
			if (event.type == sf::Event::KeyPressed)
			{
				
			}
		}
		m_background.move();
		auto delta = gameClock.restart();
		//for (int i = 0; i < m_player.size(); i++)
			m_player.update(delta);
	}

}
void Level::init()
{
	m_background.init();
	//m_player.resize(1);
	//for (int i = 0; i < m_player.size(); i++)
		m_player.init();
}

void Level::draw()
{
	m_background.draw();
	//for (int i = 0; i < m_player.size(); i++)
		m_player.draw();

}

