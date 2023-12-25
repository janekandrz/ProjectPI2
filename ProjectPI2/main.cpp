#include"dashboard.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectPI2::dashboard dashboard;
	Application::Run(% dashboard);
}