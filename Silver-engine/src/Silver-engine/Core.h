#pragma once

#ifdef SV_PPLATFORM_WINDOWS
	#ifdef SV_BUILD_DLL
		#define SILVER_API __declspec(dllexport)
	#else
		#define SILVER_API __declspec(dllimport)
	#endif //SV_BUILD_DLL

#else
	#error Silver only support Windows

#endif