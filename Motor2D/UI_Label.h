#pragma once

#include "UI.h"


class Label : public UI_Element
{
private:

	int x;

public:

	Label(iPoint pos);
	~Label();

	bool Update();

	bool Draw();


	bool CleanUp();


};


