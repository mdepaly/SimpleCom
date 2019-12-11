// dllmain.h : Deklaration der Modulklasse.

class CCOMServerModule : public ATL::CAtlDllModuleT< CCOMServerModule >
{
public :
	DECLARE_LIBID(LIBID_COMServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_COMSERVER, "{b6c656cd-dadc-43f5-bb6d-19ab9b3896ca}")
};

extern class CCOMServerModule _AtlModule;
