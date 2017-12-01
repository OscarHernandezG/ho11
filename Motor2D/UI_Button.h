#pragma once
#include "UI.h"
#include "UI_Label.h"
#include "UI_Image.h"
#include "p2List.h"
#include "SDL/include/SDL.h"

struct SDL_Texture;

enum BUTTON_TYPE {
	NONE,
	
	INTERACTABLE,
	INPUT_BOX
};



class Button : public UI_Element
{
private:

public:
	Button(int x, int y);

	~Button(){}

	bool Update(float dt);

	bool Clicked();

	bool MouseOnRect();

	bool CleanUp();

	void DefineButton(char* path, char* text, char* textesp = nullptr, BUTTON_TYPE type = NONE);

public:

	Label* label = nullptr;
	Image* image = nullptr;
	BUTTON_TYPE Button_type = NONE;
	bool clicked = false;
	SDL_Rect rect;

	SDL_Texture* MouseHovering = nullptr;
	SDL_Texture* MouseClick = nullptr;

	/*Animation on_click;
	Aniamtion mouse_on_rect;*/

};


