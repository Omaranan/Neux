#include <Neux.h>

class Sandbox : public Neux::Application
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{
	}

};

Neux::Application* Neux::CreateApplication()
{
	return new Sandbox;
}