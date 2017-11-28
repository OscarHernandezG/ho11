#include "UI_Image.h"
#include "UI.h"
#include "j1App.h"
#include "j1Render.h"

Image::Image(int x, int y) : UI_Element(x, y) {

}


Image::~Image() {

}

bool Image::Update() {
	App->render->Blit(image, position.x, position.y);
	return true;
}
bool Image::CleanUp() {
	image = nullptr;
	return true;
}
bool Image::LoadImage(char* path) {
	image = App->tex->Load(path);
	return true;
}