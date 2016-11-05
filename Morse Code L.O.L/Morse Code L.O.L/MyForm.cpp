/*
GitHub: https://github.com/zen77/Morse-Code-L.O.L.
Copyright © 2016 T Malo / Zen77
*/
#include "MyForm.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

//+------------------------------+
//Closes console window if true
//Console window is open if false

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	Morse_Code_L_O_L::MyForm form;
	Application::Run(%form);

}
