/*
GitHub:
Copyright © 2016 T Malo / Zen77
*/
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Morse_Code_L_O_L::MyForm form;
	Application::Run(%form);
}
