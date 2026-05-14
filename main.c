#include <windows.h>

void foo(void)
{
	OutputDebugStringA("This is the first thing we have written using a Windows API.\n");
}

int CALLBACK WinMain(
		HINSTANCE hInstance,
		HINSTANCE hPrevInstance,
		LPSTR lpCmdLine,
		int nCmdShow)
	{
		foo();
	}


