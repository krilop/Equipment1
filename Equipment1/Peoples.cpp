#include "Active.h"
#include "Items.h"
#include "Peoples.h"
using namespace System;
using namespace System::Windows::Forms;
/*
[STAThreadAttribute]
int peoples(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);







}
*/

System::Void Equipment1::Peoples::îáîðóäîâàíèåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Items^ f2 = gcnew Items(); // ñîçäàíèå íîâîãî ýêçåìïëÿðà
	f2->Show(); // Îòðûòèå âòîðîé ôîðìû
	Peoples::Hide(); // Ñêðûòèå ïåðâîé ôîðìû
	return System::Void();
}

System::Void Equipment1::Peoples::ðàáîòíèêèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Peoples^ f3 = gcnew Peoples();
	f3->Show();
	Peoples::Hide();
	return System::Void();
}

System::Void Equipment1::Peoples::ñïèñàíèåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Active^ f1 = gcnew Active();
	f1->Show();
	Peoples::Hide();

	return System::Void();
}
