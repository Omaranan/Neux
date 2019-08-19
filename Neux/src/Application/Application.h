#pragma once

namespace Neux
{
	class Application
	{
	private: // Private Variables
		bool isRunning;

	public: // Constructor & Destructor
		Application ();
		~Application() = default;

	public: // Public Methods
		void Run();

	};

	// To Be Defined by the Client
	// The Pointer That This Function Returns Will be the Pointer Used
	// By The Main Function.
	Application* CreateApplication();

} // Neux Namespace