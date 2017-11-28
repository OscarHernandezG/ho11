#pragma once
#include "UI.h"
#include "UI_Label.h"
#include "UI_Image.h"
#include "p2List.h"


enum BUTTON_TYPE {
	NONE,


};



class Button : public UI_Element
{
private:

public:
	Button(int x, int y);

	~Button(){}

	bool Update();

	bool Clicked();

	bool MouseOnRect();

	bool CleanUp();

public:

	Label* label = nullptr;
	Image* image = nullptr;
	BUTTON_TYPE type = NONE;
	bool clicked = false;

	/*Animation on_click;
	Aniamtion mouse_on_rect;*/

};


