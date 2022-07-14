#include "Active.h"
#include "Items.h"
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

 System::Void Equipment1::Active::оборудованиеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
 {
	 Items^ f2 = gcnew Items(); // создание нового экземпляра
	 f2->Show(); // Отрытие второй формы
	// Archieve::Hide(); // Скрытие первой формы
	 return System::Void();
 }

 System::Void Equipment1::Active::работникиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
 {
	 return System::Void();
 }

 System::Void Equipment1::Active::списаниеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
 {
	 return System::Void();
 }
