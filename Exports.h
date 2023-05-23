#pragma once

#include <ddraw.h>

extern void LoadDd7to9(bool DisableLogging);
extern void UnLoadDd7to9();

extern HRESULT WINAPI AcquireDDThreadLock();
extern DWORD WINAPI CompleteCreateSysmemSurface(DWORD arg);
extern HRESULT WINAPI D3DParseUnknownCommand(LPVOID lpCmd, LPVOID* lpRetCmd);
extern HRESULT WINAPI DDGetAttachedSurfaceLcl(DWORD arg1, DWORD arg2, DWORD arg3);
extern DWORD WINAPI DDInternalLock(DWORD arg1, DWORD arg2);
extern DWORD WINAPI DDInternalUnlock(DWORD arg);
extern HRESULT WINAPI DSoundHelp(DWORD arg1, DWORD arg2, DWORD arg3);
extern HRESULT WINAPI DirectDrawCreate(GUID FAR* lpGUID, LPDIRECTDRAW FAR* lplpDD, IUnknown FAR* pUnkOuter);
extern HRESULT WINAPI DirectDrawCreateClipper(DWORD dwFlags, LPDIRECTDRAWCLIPPER* lplpDDClipper, LPUNKNOWN pUnkOuter);
extern HRESULT WINAPI DirectDrawCreateEx(GUID FAR* lpGUID, LPVOID* lplpDD, REFIID riid, IUnknown FAR* pUnkOuter);
extern HRESULT WINAPI DirectDrawEnumerateA(LPDDENUMCALLBACKA lpCallback, LPVOID lpContext);
extern HRESULT WINAPI DirectDrawEnumerateExA(LPDDENUMCALLBACKEXA lpCallback, LPVOID lpContext, DWORD dwFlags);
extern HRESULT WINAPI DirectDrawEnumerateExW(LPDDENUMCALLBACKEXW lpCallback, LPVOID lpContext, DWORD dwFlags);
extern HRESULT WINAPI DirectDrawEnumerateW(LPDDENUMCALLBACKW lpCallback, LPVOID lpContext);
extern HRESULT WINAPI DllCanUnloadNow();
extern HRESULT WINAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv);
extern HRESULT WINAPI GetDDSurfaceLocal(DWORD arg1, DWORD arg2, DWORD arg3);
extern DWORD WINAPI GetOLEThunkData(DWORD index);
extern HRESULT WINAPI GetSurfaceFromDC(HDC hdc, LPDIRECTDRAWSURFACE7* lpDDS, DWORD arg);
extern HRESULT WINAPI RegisterSpecialCase(DWORD arg1, DWORD arg2, DWORD arg3, DWORD arg4);
extern HRESULT WINAPI ReleaseDDThreadLock();
extern HRESULT WINAPI SetAppCompatData(DWORD Type, DWORD Value);
