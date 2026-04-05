#include "Player.h"

void Player::init()
{
	Animation::init(Reasource::reasource().animationData(e_player), e_ride, PLAYER_PIC);
}

void Player::update(sf::Time delta)
{
    m_aiTime.restart();
	Animation::update(delta, m_act);
}
