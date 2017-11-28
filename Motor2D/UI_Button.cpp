#include "UI_Button.h"
#include "UI.h"
#include "j1Render.h"
#include "j1App.h"

Button::Button(int x, int y) : UI_Element(x, y) {
	label = new Label(x, y);
	image = new Image(x, y);

	// Idle.PushBack(); ...
	// Clicked.PushBack(); ...
	// MouseOnRect.PushBack(); ...
	//CurrAnim = Idle;
}

Button::~Button() {

}
bool Button::Update() {

	switch (type)
	{
	case NONE:
		break;
		//Do buttons stuff
	default:
		break;
	}

	App->render->Blit(image->image, position.x, position.y/*,CurrAnim->GetCurrentFrame()*/);
	//CurrAnim = Idle;
}
bool Button::Clicked() {
	/*
	CurrAnim = Clicked;
	*/
	clicked = true;
}
bool Button::MouseOnRect() {
	/*
	CurrAnim = MouseOnRect;
	*/
}
bool Button::CleanUp() {

}
