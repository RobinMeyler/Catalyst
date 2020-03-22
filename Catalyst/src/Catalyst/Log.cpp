#include "Log.h"


namespace Cyl {

	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		spdlog::set_level(spdlog::level::trace);

		s_CoreLogger = spdlog::stdout_color_mt("Engine");
		s_ClientLogger = spdlog::stdout_color_mt("Client");
		
	}




}
