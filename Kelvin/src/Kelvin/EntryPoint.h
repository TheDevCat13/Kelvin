#pragma once

#ifdef KL_PLATFORM_WINDOWS

extern Kelvin::Application* Kelvin::CreateApplication();

int main(int argc, char** argv) {
	auto app = Kelvin::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error Kelvin only supports Windows!
#endif