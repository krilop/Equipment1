#include "Active.h"
#include "Items.h"
#include "Peoples.h"
using namespace System;
using namespace System::Windows::Forms;

//Эта штука внизу не нужна ???
/*
[STAThreadAttribute]
int items(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);







}

*/
System::Void Equipment1::Items::оборудованиеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Items^ f2 = gcnew Items(); // создание нового экземпляра
	f2->Show(); // Отрытие второй формы
	Items::Hide(); // Скрытие первой формы
	return System::Void();
}

System::Void Equipment1::Items::работникиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Peoples^ f3 = gcnew Peoples();
	f3->Show();
	Items::Hide();
	return System::Void();
}

System::Void Equipment1::Items::списаниеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Active^ f1 = gcnew Active();
	f1->Show();
	Items::Hide();

	return System::Void();
}
