#pragma once

#ifdef CYL_PLATFORM_WINDOWS

extern Cyl::Application* Cyl::CreateApplication();

int main(int argc, char** argv)
{
	printf("Catalyst Engine\n");

	// Settings for Logging
	Cyl::Log::init();

	// Logging examples
	// Defined in Log.h
	CYL_CORE_WARN("Int Core");	
	CYL_CLIENT_INFO("Int Client");

	// Defined in client
	auto app = Cyl::CreateApplication();
	app->run();

	//Delete assigned memeory in client
	delete app;
}

#endif