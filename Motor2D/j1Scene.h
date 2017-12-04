#ifndef __j1SCENE_H__
#define __j1SCENE_H__

#include "j1Module.h"

#define NUM_BUTTONS 7;
struct SDL_Texture;
class GuiImage;
class GuiText;
class Image;
class Label;

class j1Scene : public j1Module
{
public:

	j1Scene();

	// Destructor
	virtual ~j1Scene();

	// Called before render is available
	bool Awake();

	// Called before the first frame
	bool Start();

	// Called before all Updates
	bool PreUpdate();

	// Called each loop iteration
	bool Update(float dt);

	// Called before all Updates
	bool PostUpdate();

	// Called before quitting
	bool CleanUp();

private:
	SDL_Texture* debug_tex;
	GuiImage* banner;
//	GuiText* text;
	Image* ui_image = nullptr;
	Label* text = nullptr;


public:
	uint tab_button = 0;
};

#endif // __j1SCENE_H__