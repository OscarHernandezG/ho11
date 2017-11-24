#pragma once
#include "UI.h"


class Image : public UI_Element
{
private:

	int x;

public:
	Image(iPoint pos);
	~Image();

	bool Update();

	bool Draw();


	bool CleanUp();


};


