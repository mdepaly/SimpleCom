// HelloWorld.h: Deklaration von CHelloWorld

#pragma once
#include "resource.h"       // Hauptsymbole



#include "COMServer_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Singlethread-COM-Objekte werden auf der Windows CE-Plattform nicht vollständig unterstützt. Windows Mobile-Plattformen bieten beispielsweise keine vollständige DCOM-Unterstützung. Definieren Sie _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA, um ATL zu zwingen, die Erstellung von Singlethread-COM-Objekten zu unterstützen und die Verwendung eigener Singlethread-COM-Objektimplementierungen zu erlauben. Das Threadmodell in der RGS-Datei wurde auf 'Free' festgelegt, da dies das einzige Threadmodell ist, das auf Windows CE-Plattformen ohne DCOM unterstützt wird."
#endif

using namespace ATL;


// CHelloWorld

class ATL_NO_VTABLE CHelloWorld :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CHelloWorld, &CLSID_HelloWorld>,
	public IDispatchImpl<IHelloWorld, &IID_IHelloWorld, &LIBID_COMServerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CHelloWorld()
	{
	}

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CHelloWorld)
	COM_INTERFACE_ENTRY(IHelloWorld)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



  STDMETHOD(ShowMessage)(BSTR name);
};

OBJECT_ENTRY_AUTO(__uuidof(HelloWorld), CHelloWorld)
