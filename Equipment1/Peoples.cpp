#include "Active.h"
#include "Items.h"
#include "Peoples.h"
using namespace System;
using namespace System::Windows::Forms;


//��� ����� ����� �� ����� ???
/*
[STAThreadAttribute]
int peoples(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);







}
*/


System::Void Equipment1::Peoples::������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Items^ f2 = gcnew Items(); // �������� ������ ����������
	f2->Show(); // ������� ������ �����
	Peoples::Hide(); // ������� ������ �����
	return System::Void();
}

System::Void Equipment1::Peoples::���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Peoples^ f3 = gcnew Peoples();
	f3->Show();
	Peoples::Hide();
	return System::Void();
}

System::Void Equipment1::Peoples::��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Active^ f1 = gcnew Active();
	f1->Show();
	Peoples::Hide();

	return System::Void();
}
