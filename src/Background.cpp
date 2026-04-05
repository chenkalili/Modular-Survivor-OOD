#include "Background.h"

void Background::init()
{
	m_pics.resize(N_OF_BACK_PICS);
	for (int i = 0; i < N_OF_BACK_PICS;i++)
		m_pics[i].init(i);
}

void Background::move()
{
	m_pics[1].move(-(MOVE_RATE / 8), 0);
	m_pics[2].move(-(MOVE_RATE / 4), 0);
	m_pics[3].move(-(MOVE_RATE / 2), 0);
	m_pics[4].move(-(MOVE_RATE), 0);
}

void Background::draw()
{
	for (int i = 0; i < N_OF_BACK_PICS;i++)
		Reasource::reasource().getWin().draw(m_pics[i]);
}