#pragma once
#include "StaticObject.h"
#include "Animation.h"

class Player : public Animation
{
public:
	void init();
	void update(sf::Time delta);
//	virtual bool colide();
private:
	Action m_act = e_ride;
};