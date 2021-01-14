#pragma once
#include "Core.h"

namespace Hazel
{
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();
	public:
		void Run();
	};

	//To be defined in client
	Application* CreateApplication();
}


