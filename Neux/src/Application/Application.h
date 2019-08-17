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
} // Neux Namespace