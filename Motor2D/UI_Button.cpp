#include "UI_Button.h"
#include "UI.h"
#include "j1Render.h"
#include "j1App.h"
#include "j1Input.h"
#include "j1Gui.h"


Button::Button(int x, int y) : UI_Element(x, y) {
	image = (Image*)App->gui->AdUIElement(x, y, IMAGE);
	label = (Label*)App->gui->AdUIElement(x, y, LABEL);

	MouseHovering = App->tex->Load("Homework/wow_ui/COMMON/Glue-Panel-Button-Glow.png"); 


	// Idle.PushBack(); ...
	// Clicked.PushBack(); ...
	// MouseOnRect.PushBack(); ...
	//CurrAnim = Idle;
}


bool Button::Update(float dt) 
{
	if (type == INTERACTABLE) {
		if (MouseOnRect())
			App->render->Blit(MouseHovering, position.x - 3, position.y + 1);
	}
//	App->render->Blit(image->image.start->data, position.x, position.y/*,CurrAnim->GetCurrentFrame()*/);
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

	if (mouse.x > position.x && mouse.x < position.x + rect.w) {
		if (mouse.y > position.y && mouse.y < position.y + rect.h) {
			ret = true;
		}
	}

	return ret;
}

bool Button::CleanUp() {
	return true;
}


void Button::DefineButton(char* path, char* text, BUTTON_TYPE type)
{
	image->LoadImageA(path,1);
	label->SetText(text);
	rect.w = image->rect.w;
	rect.h = image->rect.h;

	iPoint label_offset{ 0,0 };
	label_offset.x = (rect.w - label->rect.w) / 2;
	label_offset.y = (rect.h - label->rect.h) / 2;

	label->position += label_offset;

	this->type = type;
}