#pragma once

#include "Core.h"

namespace Cyl {

	class CYL_API Application
	{
	public:
		Application();
		~Application();
		void run();
	};

	// To be defined in client
	Application* CreateApplication();
}

