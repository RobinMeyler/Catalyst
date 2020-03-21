#pragma once


#ifdef CYL_PLATFORM_WINDOWS
	#ifdef  CYL_BUILD_DLL
		#define CYL_API __declspec(dllexport)
	#else
		#define CYL_API __declspec(dllimport)
	#endif		//  CYL_BUILD_DLL
#else
	#error Catalyst only supports Windows
#endif			//  CYL_PLATFORM_WINDOWS
