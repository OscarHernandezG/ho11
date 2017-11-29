#pragma once
#include "UI.h"
#include "j1Textures.h"
#include "SDL/include/SDL.h"

struct SDL_Texture;


class Image : public UI_Element
{
private:



public:
	Image(int x, int y);
	~Image();

	bool Update(float dt);

	bool CleanUp();

	bool LoadImageA(char* path);

	bool MouseOnRect();

	bool MouseClick();

public:

	SDL_Texture* image;
	p2List<SDL_Rect> rect;
};


