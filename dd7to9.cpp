/**
* Copyright (C) 2023 Elisha Riedlinger
*
* This software is  provided 'as-is', without any express  or implied  warranty. In no event will the
* authors be held liable for any damages arising from the use of this software.
* Permission  is granted  to anyone  to use  this software  for  any  purpose,  including  commercial
* applications, and to alter it and redistribute it freely, subject to the following restrictions:
*
*   1. The origin of this software must not be misrepresented; you must not claim that you  wrote the
*      original  software. If you use this  software  in a product, an  acknowledgment in the product
*      documentation would be appreciated but is not required.
*   2. Altered source versions must  be plainly  marked as such, and  must not be  misrepresented  as
*      being the original software.
*   3. This notice may not be removed or altered from any source distribution.
*/

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <Shlwapi.h>
#include "dxwrapper/Dllmain/dxwrapper.h"
#include "ddraw\ddrawExternal.h"
#include "External\Hooking\Hook.h"
#include "Utils\Utils.h"
#include "Settings\Settings.h"
#include "Logging\Logging.h"

bool Direct3D9DisableMaximizedWindowedMode()
{
	return true;
}
bool Wrapper::CheckWrapperName(const char*)
{
	return true;
}
bool Wrapper::ValidProcAddress(FARPROC)
{
	return true;
}

// Declare variables
HMODULE hModule_dll = nullptr;

// Dll main function
bool APIENTRY DllMain(HMODULE hModule, DWORD fdwReason, LPVOID lpReserved)
{
	UNREFERENCED_PARAMETER(lpReserved);

	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
	{
		// Get handle
		hModule_dll = hModule;

		// Initialize config
		Config.Init();

		// Init logs
		Logging::EnableLogging = !Config.DisableLogging;
		Logging::InitLog();
		Logging::Log() << "Starting dd7to9 v" << APP_VERSION;
		{
			char path[MAX_PATH];
			GetModuleFileName(hModule, path, MAX_PATH);
			Logging::Log() << "Running from: " << path;
		}
		Logging::LogComputerManufacturer();
		Logging::LogVideoCard();
		Logging::LogOSVersion();
		Logging::LogProcessNameAndPID();
		Logging::LogGameType();
		Logging::LogCompatLayer();

		Config.Dd7to9 = true;
		Config.DisableHighDPIScaling = true;

		// Set application compatibility options
		if (Config.ResetScreenRes)
		{
			Utils::GetScreenSettings();
		}
		if (Config.DisableHighDPIScaling)
		{
			Utils::DisableHighDPIScaling();
		}
		if (Config.SingleProcAffinity)
		{
			Utils::SetProcessAffinity();
		}
		if (Config.DisableGameUX)
		{
			Utils::DisableGameUX();
		}

		// Start Dd7to9
		if (Config.Dd7to9)
		{
			InitDDraw();
			using namespace ddraw;
			using namespace DdrawWrapper;
			HMODULE d3d9_dll = LoadLibrary("d3d9.dll");
			DdrawWrapper::Direct3DCreate9_out = GetProcAddress(d3d9_dll, "Direct3DCreate9");
		}

		// Loaded
		Logging::Log() << "dd7to9 loaded!";
	}
	break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		// Run all clean up functions
		Config.Exiting = true;
		Logging::Log() << "Quiting dd7to9";

		// Unload DdrawWrapper
		if (Config.Dd7to9)
		{
			ExitDDraw();
		}

		// Unhook all APIs
		Hook::UnhookAll();

		// Reset screen back to original Windows settings to fix some display errors on exit
		if (Config.ResetScreenRes)
		{
			Utils::ResetScreenSettings();
		}

		// Final log
		Logging::Log() << "dd7to9 terminated!";
		break;
	}
	return true;
}
