#include "p2Defs.h"
#include "p2Log.h"
#include "j1App.h"
#include "j1Input.h"
#include "j1Textures.h"
#include "j1Audio.h"
#include "j1Render.h"
#include "j1Window.h"
#include "j1Map.h"
#include "j1PathFinding.h"
#include "j1Gui.h"
#include "UI.h"
#include "UI_Image.h"
#include "UI_Button.h"
#include "UI_Label.h"
#include "j1Scene.h"

j1Scene::j1Scene() : j1Module()
{
	name.create("scene");
}

// Destructor
j1Scene::~j1Scene()
{}

// Called before render is available
bool j1Scene::Awake()
{
	LOG("Loading Scene");
	bool ret = true;

	return ret;
}

// Called before the first frame
bool j1Scene::Start()
{

	ui_image = (Image*)App->gui->AdUIElement(0, 0, IMAGE);
	ui_image->LoadImageA("Homework/wow_ui/login_background.png");

	Image* wow_logo = (Image*)App->gui->AdUIElement(0, 0, IMAGE);
	wow_logo->LoadImageA("Homework/wow_ui/COMMON/Glues-Logo-Left.png",0.33f);
	wow_logo = (Image*)App->gui->AdUIElement(85, 0, IMAGE);
	wow_logo->LoadImageA("Homework/wow_ui/COMMON/Glues-Logo-Right.png",0.33f);

	Image* ESRB_notice = (Image*)App->gui->AdUIElement(21, 415, IMAGE);
	ESRB_notice->LoadImageA("Homework/wow_ui/LOGIN/Glues-ESRBRating.png");

	Image* Blizzard_logo = (Image*)App->gui->AdUIElement(470, 475, IMAGE);
	Blizzard_logo->LoadImageA("Homework/wow_ui/MainMenu/Glues-BlizzardLogo.png",0.66f);


	Button* Manage_Account = (Button*)App->gui->AdUIElement(17, 400, BUTTON);
	Manage_Account->DefineButton("Homework/wow_ui/COMMON/Glue-Panel-Button-Up.png", "Manage Account", "Cuenta",INTERACTABLE);

	Button* Community_Site = (Button*)App->gui->AdUIElement(17, 439, BUTTON);
	Community_Site->DefineButton("Homework/wow_ui/COMMON/Glue-Panel-Button-Up.png", "Community Site", "Pagina web", INTERACTABLE);
	
	Button* Login = (Button*)App->gui->AdUIElement(444, 380, BUTTON);
	Login->DefineButton("Homework/wow_ui/COMMON/Glue-Panel-Button-Up.png", "Login", "Iniciar sesion",INTERACTABLE);
	int pos = 350;
	Button* Cinematics = (Button*)App->gui->AdUIElement(872, pos, BUTTON);
	Cinematics->DefineButton("Homework/wow_ui/COMMON/Glue-Panel-Button-Up.png", "Cinematics", "Cinematicas", INTERACTABLE);
	pos += 39;
	Button* Credits = (Button*)App->gui->AdUIElement(872, pos, BUTTON);
	Credits->DefineButton("Homework/wow_ui/COMMON/Glue-Panel-Button-Up.png", "Credits", "Creditos",INTERACTABLE);
	pos += 39;
	Button* Terms_Of_Use = (Button*)App->gui->AdUIElement(872, pos, BUTTON);
	Terms_Of_Use->DefineButton("Homework/wow_ui/COMMON/Glue-Panel-Button-Up.png", "Terms Of Use", "Terminos de servicio",INTERACTABLE);
	pos = 538-20;
	Button* Quit = (Button*)App->gui->AdUIElement(872, pos, BUTTON);
	Quit->DefineButton("Homework/wow_ui/COMMON/Glue-Panel-Button-Up.png", "Quit", "Salir",INTERACTABLE);

	//ui_image->rect.add({ 0, 0, 1920, 1080 });

	/*ui_image->LoadImageA("gui/atlas.png");

	ui_image->rect.add({ 642, 169, 229, 69 });
	ui_image->rect.add({ 0,113,229,69 });*/

	text = (Label*)App->gui->AdUIElement(0, 546, LABEL);
	text->SetText("Version 2.0.12 (6546) (Release)");

	text = (Label*)App->gui->AdUIElement(0, 558, LABEL);
	text->SetText("Mar 30 2007");

	text = (Label*)App->gui->AdUIElement(306, 558, LABEL);
	text->SetText("Copyright 2004-2007  Blizzard Entretainment. All Rights Reserved.");

	text = (Label*)App->gui->AdUIElement(464, 264, LABEL);
	text->SetText("Account Name", "Nombre");

	text = (Label*)App->gui->AdUIElement(458, 319, LABEL);
	text->SetText("Account Password", "Contraseña");


	Button* Name = (Button*)App->gui->AdUIElement(450, 282, BUTTON);
	Name->DefineButton("Homework/wow_ui/COMMON1/Common-Input-Border.png", "");
	pos = 538 - 20;
	Button* Password = (Button*)App->gui->AdUIElement(450, 335, BUTTON);
	Password->DefineButton("Homework/wow_ui/COMMON1/Common-Input-Border.png", "");

	/*
	if(App->map->Load("iso_walk.tmx") == true)
	{
		int w, h;
		uchar* data = NULL;
		if(App->map->CreateWalkabilityMap(w, h, &data))
			App->pathfinding->SetMap(w, h, data);

		RELEASE_ARRAY(data);
	}

	debug_tex = App->tex->Load("maps/path2.png");
	
	*/
	
	return true;
}

// Called each loop iteration
bool j1Scene::PreUpdate()
{
	
	// debug pathfing ------------------

	/*
	static iPoint origin;
	static bool origin_selected = false;

	int x, y;
	App->input->GetMousePosition(x, y);
	iPoint p = App->render->ScreenToWorld(x, y);
	p = App->map->WorldToMap(p.x, p.y);

	if(App->input->GetMouseButtonDown(SDL_BUTTON_LEFT) == KEY_DOWN)
	{
		if(origin_selected == true)
		{
			App->pathfinding->CreatePath(origin, p);
			origin_selected = false;
		}
		else
		{
			origin = p;
			origin_selected = true;
		}
	}
	*/
	return true;
}

// Called each loop iteration
bool j1Scene::Update(float dt)
{
	// Gui ---

	// -------
	/*

	if(App->input->GetKey(SDL_SCANCODE_L) == KEY_DOWN)
		App->LoadGame("save_game.xml");

	if(App->input->GetKey(SDL_SCANCODE_S) == KEY_DOWN)
		App->SaveGame("save_game.xml");

	if(App->input->GetKey(SDL_SCANCODE_UP) == KEY_REPEAT)
		App->render->camera.y += floor(200.0f * dt);

	if(App->input->GetKey(SDL_SCANCODE_DOWN) == KEY_REPEAT)
		App->render->camera.y -= floor(200.0f * dt);

	if(App->input->GetKey(SDL_SCANCODE_LEFT) == KEY_REPEAT)
		App->render->camera.x += floor(200.0f * dt);

	if(App->input->GetKey(SDL_SCANCODE_RIGHT) == KEY_REPEAT)
		App->render->camera.x -= floor(200.0f * dt);

	App->map->Draw();

	

	int x, y;
	App->input->GetMousePosition(x, y);
	iPoint map_coordinates = App->map->WorldToMap(x - App->render->camera.x, y - App->render->camera.y);
	p2SString title("Map:%dx%d Tiles:%dx%d Tilesets:%d Tile:%d,%d",
					App->map->data.width, App->map->data.height,
					App->map->data.tile_width, App->map->data.tile_height,
					App->map->data.tilesets.count(),
					map_coordinates.x, map_coordinates.y);

	//App->win->SetTitle(title.GetString());

	// Debug pathfinding ------------------------------
	//int x, y;
	App->input->GetMousePosition(x, y);
	iPoint p = App->render->ScreenToWorld(x, y);
	p = App->map->WorldToMap(p.x, p.y);
	p = App->map->MapToWorld(p.x, p.y);

	App->render->Blit(debug_tex, p.x, p.y);

	const p2DynArray<iPoint>* path = App->pathfinding->GetLastPath();

	for(uint i = 0; i < path->Count(); ++i)
	{
		iPoint pos = App->map->MapToWorld(path->At(i)->x, path->At(i)->y);
		App->render->Blit(debug_tex, pos.x, pos.y);
	}
	*/
	return true;
}

// Called each loop iteration
bool j1Scene::PostUpdate()
{
	bool ret = true;
	//ui_image->Update();
	//text->Update();
	if(App->input->GetKey(SDL_SCANCODE_ESCAPE) == KEY_DOWN)
		ret = false;

	return ret;
}

// Called before quitting
bool j1Scene::CleanUp()
{
	LOG("Freeing scene");

	return true;
}
