// AdminForm0.cpp : main project file.

#include "stdafx.h"
#include "StartingForm.h"

using namespace AdminForm0;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew StartingForm());
	return 0;
}
