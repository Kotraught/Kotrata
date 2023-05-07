#pragma once

#include "Core.h"

namespace Kotrata
{
	class KOTRATA_API Application
	{
		public:
			Application();
			virtual ~Application();
			void Run();
	};

	// Define this in the client
	Application* CreateApplication();
}