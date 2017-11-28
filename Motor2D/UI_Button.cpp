#include "UI_Button.h"
#include "UI.h"


Button::Button(int x, int y) : UI_Element(x, y) {
	label = new Label(x, y);
	image = new Image(x, y);
}