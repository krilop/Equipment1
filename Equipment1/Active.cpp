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

 System::Void Equipment1::Active::������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
 {
	 Items^ f2 = gcnew Items(); // �������� ������ ����������
	 f2->Show(); // ������� ������ �����
	// Archieve::Hide(); // ������� ������ �����
	 return System::Void();
 }

 System::Void Equipment1::Active::���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
 {
	 return System::Void();
 }

 System::Void Equipment1::Active::��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
 {
	 return System::Void();
 }
