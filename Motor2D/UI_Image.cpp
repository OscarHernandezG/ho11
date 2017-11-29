#include "UI_Image.h"
#include "UI.h"
#include "j1App.h"
#include "j1Render.h"
#include "j1Input.h"

Image::Image(int x, int y) : UI_Element(x, y) {

}


Image::~Image() {

}

bool Image::Update(float dt) {

	SDL_Rect Rect;

	if (MouseOnRect())
		Rect = rect.start->next->data;
	else
		Rect = rect.start->data;

	App->render->Blit(image, position.x, position.y,&Rect,0);
	return true;
}
bool Image::CleanUp() {
	rect.clear();
	return true;
}
bool Image::LoadImageA(char* path) {
	image = App->tex->Load(path);
	return true;
}

bool Image::MouseOnRect() {
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

bool Image::MouseClick() {
	bool ret = false;

	if (MouseOnRect()) {
		if (App->input->GetMouseButtonDown(1) == KEY_DOWN) {

		}
	}

	return ret;
}