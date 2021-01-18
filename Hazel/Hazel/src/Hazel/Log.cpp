#include "hzpch.h"
#include "Log.h"

namespace Hazel
{
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClinetLogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%s");
		s_CoreLogger = spdlog::stdout_color_mt("Hazel");
		s_CoreLogger->set_level(spdlog::level::trace);
		s_ClinetLogger = spdlog::stdout_color_mt("APP");
		s_ClinetLogger->set_level(spdlog::level::trace);
	}
}