#pragma once
#include "Obsticles.h"
#include "Gift.h"
class car :public Obsticles
{
public:
	virtual void colide();
private:
	Gift m_gift;
	int numOfPlayer;
};