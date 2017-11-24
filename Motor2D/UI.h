#ifndef __UI_H__
#define __UI_H__

#include "p2Point.h"

struct SDL_Texture;

class UI_Element
{
protected:
	

public:

	iPoint position;
public:

	//Constructor
	UI_Element() {}
	UI_Element(int x, int y);

	//Destructor
	virtual ~UI_Element(){}

	// Called each loop iteration
	bool Update(float dt);

	// Called each loop iteration
	virtual bool Draw(SDL_Texture* sprites);


	// Called before quitting
	virtual bool CleanUp();

	virtual bool Clicked();

	virtual bool MouseOnRect();

	virtual bool SetText();

};

#endif //__UI__H