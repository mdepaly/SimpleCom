// dllmain.cpp : Implementierung von DllMain.

#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "COMServer_i.h"
#include "dllmain.h"

CCOMServerModule _AtlModule;

// DLL-Einstiegspunkt
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	hInstance;
	return _AtlModule.DllMain(dwReason, lpReserved);
}
