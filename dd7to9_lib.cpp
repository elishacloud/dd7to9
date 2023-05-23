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
#include "ddraw\ddrawExternal.h"
#include "dd7to9.h"

void StartDd7to9()
{
	LoadDd7to9(true);
}

HRESULT WINAPI AcquireDDThreadLock()
{
	StartDd7to9();
	return dd_AcquireDDThreadLock();
}

DWORD WINAPI CompleteCreateSysmemSurface(DWORD arg)
{
	StartDd7to9();
	return dd_CompleteCreateSysmemSurface(arg);
}

HRESULT WINAPI D3DParseUnknownCommand(LPVOID lpCmd, LPVOID *lpRetCmd)
{
	StartDd7to9();
	return dd_D3DParseUnknownCommand(lpCmd, lpRetCmd);
}

HRESULT WINAPI DDGetAttachedSurfaceLcl(DWORD arg1, DWORD arg2, DWORD arg3)
{
	StartDd7to9();
	return dd_DDGetAttachedSurfaceLcl(arg1, arg2, arg3);
}

DWORD WINAPI DDInternalLock(DWORD arg1, DWORD arg2)
{
	StartDd7to9();
	return dd_DDInternalLock(arg1, arg2);
}

DWORD WINAPI DDInternalUnlock(DWORD arg)
{
	StartDd7to9();
	return dd_DDInternalUnlock(arg);
}

HRESULT WINAPI DSoundHelp(DWORD arg1, DWORD arg2, DWORD arg3)
{
	StartDd7to9();
	return dd_DSoundHelp(arg1, arg2, arg3);
}

HRESULT WINAPI DirectDrawCreate(GUID FAR* lpGUID, LPDIRECTDRAW FAR* lplpDD, IUnknown FAR* pUnkOuter)
{
	StartDd7to9();
	return dd_DirectDrawCreate(lpGUID, lplpDD, pUnkOuter);
}

HRESULT WINAPI DirectDrawCreateClipper(DWORD dwFlags, LPDIRECTDRAWCLIPPER *lplpDDClipper, LPUNKNOWN pUnkOuter)
{
	StartDd7to9();
	return dd_DirectDrawCreateClipper(dwFlags, lplpDDClipper, pUnkOuter);
}

HRESULT WINAPI DirectDrawCreateEx(GUID FAR *lpGUID, LPVOID *lplpDD, REFIID riid, IUnknown FAR *pUnkOuter)
{
	StartDd7to9();
	return dd_DirectDrawCreateEx(lpGUID, lplpDD, riid, pUnkOuter);
}

HRESULT WINAPI DirectDrawEnumerateA(LPDDENUMCALLBACKA lpCallback, LPVOID lpContext)
{
	StartDd7to9();
	return dd_DirectDrawEnumerateA(lpCallback, lpContext);
}

HRESULT WINAPI DirectDrawEnumerateExA(LPDDENUMCALLBACKEXA lpCallback, LPVOID lpContext, DWORD dwFlags)
{
	StartDd7to9();
	return dd_DirectDrawEnumerateExA(lpCallback, lpContext, dwFlags);
}

HRESULT WINAPI DirectDrawEnumerateExW(LPDDENUMCALLBACKEXW lpCallback, LPVOID lpContext, DWORD dwFlags)
{
	StartDd7to9();
	return dd_DirectDrawEnumerateExW(lpCallback, lpContext, dwFlags);
}

HRESULT WINAPI DirectDrawEnumerateW(LPDDENUMCALLBACKW lpCallback, LPVOID lpContext)
{
	StartDd7to9();
	return dd_DirectDrawEnumerateW(lpCallback, lpContext);
}

HRESULT WINAPI DllCanUnloadNow()
{
	StartDd7to9();
	return dd_DllCanUnloadNow();
}

HRESULT WINAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
	StartDd7to9();
	return dd_DllGetClassObject(rclsid, riid, ppv);
}

HRESULT WINAPI GetDDSurfaceLocal(DWORD arg1, DWORD arg2, DWORD arg3)
{
	StartDd7to9();
	return dd_GetDDSurfaceLocal(arg1, arg2, arg3);
}

DWORD WINAPI GetOLEThunkData(DWORD index)
{
	StartDd7to9();
	return dd_GetOLEThunkData(index);
}

HRESULT WINAPI GetSurfaceFromDC(HDC hdc, LPDIRECTDRAWSURFACE7 *lpDDS, DWORD arg)
{
	StartDd7to9();
	return dd_GetSurfaceFromDC(hdc, lpDDS, arg);
}

HRESULT WINAPI RegisterSpecialCase(DWORD arg1, DWORD arg2, DWORD arg3, DWORD arg4)
{
	StartDd7to9();
	return dd_RegisterSpecialCase(arg1, arg2, arg3, arg4);
}

HRESULT WINAPI ReleaseDDThreadLock()
{
	StartDd7to9();
	return dd_ReleaseDDThreadLock();
}

HRESULT WINAPI SetAppCompatData(DWORD Type, DWORD Value)
{
	StartDd7to9();
	return dd_SetAppCompatData(Type, Value);
}
