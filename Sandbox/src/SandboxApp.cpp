#include <Catalyst.h>

class Sandbox : public Cyl::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}

};

// Created in client by user to run app
Cyl::Application* Cyl::CreateApplication()
{
	return new Sandbox();
}