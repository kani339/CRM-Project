#include "MainWindow.h"


//using namespace std;
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CMR_System::Login_Form form;
	//CMR_System::MainWindow form; //Main for that will run
	Application::Run(%form);
}
