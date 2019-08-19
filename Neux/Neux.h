#pragma once

// Client Side Application Creation
#include "src/Application/Public/Application.h"
// -------------------- Engine's Core ------------------------
#include "src/Core/Log/Public/Log.h"
// -----------------------------------------------------------
/*----- Entry Point ----------------------------------------*/
int main(int argc, char **argv)
{
	// Intialize the Engine Components Before Starting the Application
	Neux::Log::Init();

	Neux::Application* app = Neux::CreateApplication();
	app->Run();
	delete app;

	return 0;
}
/*----------------------------------------------------------*/