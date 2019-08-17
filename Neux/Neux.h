#pragma once

// Client Side Application Creation
#include "src/Application/Application.h"

/*----- Entry Point ----------------------------------------*/
int main(int argc, char **argv)
{

	Neux::Application* app = Neux::CreateApplication();
	app->Run();
	delete app;

	return 0;
}
/*----------------------------------------------------------*/