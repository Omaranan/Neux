#include <Neux.h>

class Sandbox : public Neux::Application
{
public:
	Sandbox()
	{
		LOG_WARN("Starting ...");
	}

	~Sandbox()
	{
	}

};

Neux::Application* Neux::CreateApplication()
{
	return new Sandbox;
}
