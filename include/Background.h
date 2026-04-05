#pragma once
#include "Helper.h"

class Background
{
public:
	void init();
	void move();
	void draw();
private:
	vector<Pic> m_pics;
};