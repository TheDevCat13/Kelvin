#pragma once

#include "Core.h"

namespace Kelvin {

	class KELVIN_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}
