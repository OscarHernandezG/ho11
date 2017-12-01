#ifndef __UI_H__
#define __UI_H__

#include "p2Point.h"

struct SDL_Texture;

enum GUI_TYPE {
	NO_TYPE,
	IMAGE,
	BUTTON,
	LABEL
};

class UI_Element
{
protected:
	

public:
	GUI_TYPE type;
	iPoint position;
public:

	//Constructor
	UI_Element() {}
	UI_Element(int x, int y);

	//Destructor
	virtual ~UI_Element(){}

	// Called each loop iteration
	virtual bool Update(float dt);

	// Called each loop iteration
	virtual bool Draw(SDL_Texture* sprites);


	// Called before quitting
	virtual bool CleanUp();

	virtual bool Clicked();

	virtual bool MouseOnRect();

	virtual bool SetText();

};

#endif //__UI__H