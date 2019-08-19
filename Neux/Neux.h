#pragma once

// Platform Checking
#ifdef NX_PLATFORM_WINDOWS
	#define OS Windows
#else
	#define OS Unknown
	#error Neux Only Supports Windows
#endif // NX_PLATFORM_WINDOWS


// Client Side Application Creation
#include "src/Application/Public/Application.h"

// -------------------- Engine's Core ------------------------
#include "src/Core/macros.h"			 // Pre-Defined Core Macros
#include "src/Core/Log/Public/Log.h"     // Logging Wrapper for spdlog
#include "src/Core/Debug/Public/Debug.h" // Debugging Class
// 

/*----- Entry Point ----------------------------------------*/
int main(int argc, char **argv)
{
	// Intialize the Engine Components Before Starting the Application
	Neux::Log::Init();

	Neux::Log::getCoreLogger()->warn("Platform : {0}", _MKSTR(OS));

	Neux::Application* app = Neux::CreateApplication();
	app->Run();
	delete app;

	return 0;
}
/*----------------------------------------------------------*/