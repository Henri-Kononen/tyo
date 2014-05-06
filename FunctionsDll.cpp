// FunctionsDll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

#include "stdafx.h"
#include "FunctionsDll.h"
#include <stdexcept>

using namespace std;

namespace Functions
{

    string MyFunctions::edit( )
    {
		// OPEN
	HKEY key;
	//if (RegOpenKey(HKEY_LOCAL_MACHINE, TEXT("Software\\TestKey1\\"), &key) != ERROR_SUCCESS)
	if (RegOpenKey(HKEY_CURRENT_USER, TEXT("Control Panel\\Desktop\\"), &key) != ERROR_SUCCESS)
	{
	   return "Unable to open registry key";
	}
	
	// READ FROM
	char value[256];
	DWORD value_length = 256;
							// name of the key
	RegQueryValueEx(key, L"WindowArrangementActive", NULL, NULL, (LPBYTE)&value, &value_length);
	cout << "the value read from the registry is: " << value << endl;

	// SET VALUE				// name of the key							  // new value  // new value
	if (RegSetValueEx(key, TEXT("WindowArrangementActive"), 0, REG_SZ, (LPBYTE)"0", strlen("0")*sizeof(char)) != ERROR_SUCCESS)
	{
	   RegCloseKey(key);
	   return "Unable to set registry value value_name";
	}
	else
	{
	   return "Haha...I turned it off (value was set)";
	}
		
	RegCloseKey(key);
		//return a + b;
    }


}
