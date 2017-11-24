#pragma once
#include "UI.h"


class Image : public UI_Element
{
private:



public:
	Image(int x, int y);

	~Image(){}

	bool Update() { return true; }

	bool Draw() { return true; }


	bool CleanUp() { return true; }


};


