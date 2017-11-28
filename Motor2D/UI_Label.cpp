#include "UI_Label.h"
#include "UI.h"
#include "j1Fonts.h"
#include "j1App.h"


Label::Label(int x, int y) : UI_Element( x,  y) {

}

Label::~Label() {

}


bool Label::Update() {
	App->font->Print(text.GetString());
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