#include "stdafx.h"

#include "windows.h"

void check(bool bSuccess)
{
	HRESULT hr =  bSuccess;

	if (bSuccess) {
		printf ("---  TRUE -----\n");
	} else {
		printf ("---- FALSE -----\n");
	}

	printf ("Let hr = %s\n", (bSuccess ? "TRUE" : "FALSE"));

	if ( hr == S_OK ) {
		printf ("hr == OK\n");
	} else {
		printf ("hr != OK\n");
	}
	if (hr == E_FAIL) { 
		printf ("hr == E_FAIL\n");
	} else {
		printf ("hr != E_FAIL\n");
	}

	if (SUCCEEDED( hr ) ) {
		printf ("SUCCEEDED(hr) == TRUE\n");
	} else {
		printf ("SUCCEEDED(hr) == FALSE\n");
	}
	if ( FAILED(hr) ) {
		printf ("FAILED(hr) == TRUE\n");
	} else {
		printf ("FAILED(hr) == FALSE\n");
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	bool bSuccess = true;

	check(bSuccess);

	bSuccess = false;

	check(bSuccess);

	return 0;
}

