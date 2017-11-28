#pragma once
#include "UI.h"
#include "UI_Label.h"
#include "UI_Image.h"


enum BUTTON_TYPE {
	NONE,


};


class Button : public UI_Element
{
private:

public:
	Button(int x, int y);

	~Button(){}

	bool Update() { return true; }

	bool Draw() { return true; }

	bool Clicked() { return true; }

	bool MouseOnRect() { return true; }

	bool CleanUp() { return true; }

public:

	Label* label = nullptr;
	Image* image = nullptr;


};


