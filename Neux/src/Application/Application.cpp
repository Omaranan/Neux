#include "Application.h"

namespace Neux
{
	// Constructor
	Application::Application()
	{
		isRunning = true;
	}

	// Run Method ( Where Everything Starts )
	void Application::Run()
	{
		while (isRunning);
	}

} // Neux Namespace