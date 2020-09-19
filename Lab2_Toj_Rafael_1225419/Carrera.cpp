#include "Carrera.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Lab2TojRafael1225419::Carrera mainForm;
	Application::Run(%mainForm);
	return 0;

}
