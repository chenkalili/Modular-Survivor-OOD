#pragma once
#include "Object.h"

class MovedObject :public Object
{
public:
	void move();
	virtual void colide();
	void lifeSpan();
};