#include "UI_Button.h"
#include "UI.h"
#include "j1Render.h"
#include "j1App.h"
#include "j1Input.h"


Button::Button(int x, int y) : UI_Element(x, y) {
	label = new Label(x, y);
	image = new Image(x, y);

	// Idle.PushBack(); ...
	// Clicked.PushBack(); ...
	// MouseOnRect.PushBack(); ...
	//CurrAnim = Idle;
}


bool Button::Update(float dt) {

	switch (type)
	{
	case NONE:
		break;
		//Do buttons stuff
	default:
		break;
	}
	
	//App->render->Blit(image->image, position.x, position.y/*,CurrAnim->GetCurrentFrame()*/);
	//CurrAnim = Idle;
	return true;
}
bool Button::Clicked() {
	/*
	CurrAnim = Clicked;
	*/
	//clicked = true;
	return true;
}
bool Button::MouseOnRect() {
	bool ret = false;

	iPoint mouse{ 0,0 };
	App->input->GetMousePosition(mouse.x, mouse.y);

	if (mouse.x > position.x && mouse.x < position.x + 229) {
		if (mouse.y > position.y && mouse.y < position.y + 69) {
			ret = true;
		}
	}
	
	return ret;
}
bool Button::CleanUp() {
	return true;
}
