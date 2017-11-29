#pragma once

#include "UI.h"
#include "p2SString.h"
#include "SDL\include\SDL.h"

class Label : public UI_Element
{
private:

	p2SString text;

public:

	Label(int x, int y);
	~Label();

	bool Update(float dt);
	bool CleanUp();
	bool SetText(char* text);

public:

	SDL_Texture* tex = nullptr;
	SDL_Rect rect{ 0,0,0,0 };

};


