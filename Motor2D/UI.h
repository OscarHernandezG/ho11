#pragma once


#include "p2Point.h"


class UI_Element
{
protected:
	

public:
	
public:

	UI_Element(int x, int y);
	virtual ~UI_Element();



	virtual void Move(float dt) {};
	virtual void Draw(SDL_Texture* sprites);

};
