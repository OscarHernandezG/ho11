#pragma once
#include "UI.h"


class Image : public UI_Element
{
private:

	

public:
	Image(iPoint pos);
	~Image();

	bool Update();

	bool Draw();


	bool CleanUp();


};


