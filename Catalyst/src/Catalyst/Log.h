#pragma once

#include "Core.h"
#include <string>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"
#include "spdlog/sinks/stdout_color_sinks.h"
namespace Cyl {

	class CYL_API Log
	{
	public:

		static void init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Engine Notes
#define CYL_CORE_TRACE(...)  spdlog::set_default_logger(Cyl::Log::GetCoreLogger()); spdlog::trace(__VA_ARGS__)
#define CYL_CORE_INFO(...)   spdlog::set_default_logger(Cyl::Log::GetCoreLogger()); spdlog::info(__VA_ARGS__)
#define CYL_CORE_WARN(...)   spdlog::set_default_logger(Cyl::Log::GetCoreLogger()); spdlog::warn(__VA_ARGS__)
#define CYL_CORE_ERROR(...)  spdlog::set_default_logger(Cyl::Log::GetCoreLogger()); spdlog::error(__VA_ARGS__)

// Client Notes
#define CYL_CLIENT_TRACE(...)  spdlog::set_default_logger(Cyl::Log::GetClientLogger()); spdlog::trace(__VA_ARGS__)
#define CYL_CLIENT_INFO(...)   spdlog::set_default_logger(Cyl::Log::GetClientLogger()); spdlog::info(__VA_ARGS__)
#define CYL_CLIENT_WARN(...)   spdlog::set_default_logger(Cyl::Log::GetClientLogger()); spdlog::warn(__VA_ARGS__)
#define CYL_CLIENT_ERROR(...)  spdlog::set_default_logger(Cyl::Log::GetClientLogger()); spdlog::error(__VA_ARGS__)
