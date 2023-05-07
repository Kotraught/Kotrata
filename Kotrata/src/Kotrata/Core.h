#pragma once

#ifdef KT_PLATFORM_WINDOWS
	#ifdef KT_BUILD_DLL
		#define KOTRATA_API _declspec(dllexport)
	#else
		#define KOTRATA_API _declspec(dllimport)
	#endif
#else
	#error Only supports windows!
#endif // HZ_PLATFORM_WINDOWS
