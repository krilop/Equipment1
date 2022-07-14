#include "Active.h"
#include "Items.h"
#include "Peoples.h"
using namespace System;
using namespace System::Windows::Forms;


//Эта штука внизу не нужна ???
/*
[STAThreadAttribute]
int peoples(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);







}
*/


System::Void Equipment1::Peoples::оборудованиеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Items^ f2 = gcnew Items(); // создание нового экземпляра
	f2->Show(); // Отрытие второй формы
	Peoples::Hide(); // Скрытие первой формы
	return System::Void();
}

System::Void Equipment1::Peoples::работникиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Peoples^ f3 = gcnew Peoples();
	f3->Show();
	Peoples::Hide();
	return System::Void();
}

System::Void Equipment1::Peoples::списаниеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Active^ f1 = gcnew Active();
	f1->Show();
	Peoples::Hide();

	return System::Void();
}
