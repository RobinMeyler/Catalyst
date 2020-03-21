#pragma once

#ifdef CYL_PLATFORM_WINDOWS

extern Cyl::Application* Cyl::CreateApplication();

int main(int argc, char** argv)
{
	printf("Catalyst Eng");
	auto app = Cyl::CreateApplication();
	app->run();
	delete app;
}

#endif