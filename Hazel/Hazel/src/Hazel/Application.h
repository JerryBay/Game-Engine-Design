#pragma once
#include "Core.h"

namespace Hazel
{
	HAZEL_API class Application
	{
	public:
		Application();
		virtual ~Application();
	public:
		void Run();
	};

	Application* CreateApplication();
}


