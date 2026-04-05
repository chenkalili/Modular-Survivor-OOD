#pragma once
#include "MovedObject.h"

class Gift :public MovedObject
{
public:
	Gift();
	void move();
	virtual void colide();
private:
};