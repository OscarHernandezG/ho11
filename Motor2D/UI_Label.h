#pragma once

#include "UI.h"


class Label : public UI_Element
{
private:

	int x;

public:

	Label(int x, int y) : UI_Element(x,y){}
	~Label(){}

	bool Update() { return true; }

	bool Draw() { return true; }


	bool CleanUp() { return true; }


};


