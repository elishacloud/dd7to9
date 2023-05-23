#pragma once

#include "dxwrapper\Dllmain\dxwrapper.h"

void LoadDd7to9(bool DisableLogging);
void UnLoadDd7to9();

// Undefine vars
#undef APP_NAME
#undef APP_DESCRPTION
#undef APP_COPYRIGHT
#undef APP_ORIGINALVERSION
#undef APP_INTERNALNAME
#undef VERSION_NUMBER

// Main resource file details
#define APP_NAME				"dd7to9"
#define APP_DESCRPTION			"Converts DirectDraw & Direct3D to Direct3D9"
#define APP_COPYRIGHT			"Copyright (C) 2023 Elisha Riedlinger"
#define APP_ORIGINALVERSION		"ddraw.dll"
#define APP_INTERNALNAME		"dd7to9"

// Get APP_VERSION
#define VERSION_NUMBER APP_MAJOR, APP_MINOR, APP_BUILDNUMBER, APP_REVISION
