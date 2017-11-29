#pragma once

#include "UI.h"
#include "p2SString.h"

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


};


