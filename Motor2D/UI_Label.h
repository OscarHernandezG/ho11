#pragma once

#include "UI.h"


class Label : public UI_Element
{
private:

	

public:

	Label(int x, int y);
	~Label(){}

	bool Update() { return true; }

	bool Draw() { return true; }


	bool CleanUp() { return true; }


};


