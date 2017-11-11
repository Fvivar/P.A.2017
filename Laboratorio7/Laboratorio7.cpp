// Laboratorio7.cpp : main project file.

#include "stdafx.h"
#include "FormOrdenamiento.h"

using namespace System;
using namespace Laboratorio7;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew FormOrdenamiento());

    return 0;
}
