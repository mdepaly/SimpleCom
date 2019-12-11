// HelloWorld.cpp: Implementierung von CHelloWorld

#include "pch.h"
#include "HelloWorld.h"


// CHelloWorld



STDMETHODIMP CHelloWorld::ShowMessage(BSTR name)
{
  // TODO: Fügen Sie hier Ihren Implementierungscode ein.
  
  ::MessageBox(::GetActiveWindow(), _T("Hallo "), _T("First Com App"), MB_OK);

  return S_OK;
}
