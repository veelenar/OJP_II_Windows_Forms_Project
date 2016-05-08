// WindowsFormApplication1.cpp : main project file.

#include "stdafx.h"
#include "Task_Manager.h"

using namespace Task_Manager_v2;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Task_Manager());
	return 0;
}
