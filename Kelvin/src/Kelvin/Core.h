#pragma once

#ifdef KL_PLATFORM_WINDOWS
	#ifdef KL_BUILD_DLL
		#define KELVIN_API __declspec(dllexport)
	#else
		#define KELVIN_API __declspec(dllimport)
	#endif
#else
	#error Kelvin only supports Windows!
#endif