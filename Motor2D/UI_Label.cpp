#include "UI_Label.h"
#include "UI.h"
#include "j1Fonts.h"
#include "j1App.h"
#include "j1Textures.h"
#include "j1Render.h"


Label::Label(int x, int y) : UI_Element( x,  y) {

}

Label::~Label() {

}


bool Label::Update(float dt) {
	SDL_Texture* tex = App->font->Print(text.GetString(), { 255, 255, 255, 255 }, App->font->fonts.start->data);
	uint w = 0, h=0;
	App->tex->GetSize(tex, w, h);
	SDL_Rect rect{ 0,0,w,h };
	App->render->Blit(tex, position.x, position.y, &rect, 0);

	
	return true;
}
bool Label::CleanUp() {
	this->text.Clear();
	return true;
}
bool Label::SetText(char* text) {
	this->text.Clear();
	this->text.create(text);
	return true;
}