#pragma once
#include "UI.h"
#include "j1Textures.h"

struct SDL_Texture;

class Image : public UI_Element
{
private:



public:
	Image(int x, int y);
	~Image();

	bool Update();

	bool CleanUp();

	bool LoadImage(char* path);

public:

	SDL_Texture* image;

};


