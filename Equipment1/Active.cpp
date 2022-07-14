#include "Active.h"

using namespace System;
using namespace System::Windows::Forms;

 [STAThreadAttribute]
 int main(array<String^>^ arg)
 {
	 Application::EnableVisualStyles();
	 Application::SetCompatibleTextRenderingDefault(false);

	 Equipment1::Active form;
	 Application::Run(% form);




 }