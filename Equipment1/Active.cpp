#include "Active.h"
#include "Items.h"
#include "Peoples.h"
#include <mysql.h>
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;


 [STAThreadAttribute]
 int main(array<String^>^ arg)
 {
	 Application::EnableVisualStyles();
	 Application::SetCompatibleTextRenderingDefault(false);

	 Equipment1::Active form;
	 Application::Run(% form);

	 // ����������� sql
	 MYSQL* conn;
	 MYSQL_ROW row;
	 MYSQL_RES *res;




	 

 }

 System::Void Equipment1::Active::������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
 {
	 Items^ f2 = gcnew Items(); // �������� ������ ����������
	 f2->Show(); // ������� ������ �����
	 Active::Hide(); // ������� ������ �����
	 return System::Void();
 }

 System::Void Equipment1::Active::���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
 {		
	 Peoples^ f3 = gcnew Peoples();
	 f3->Show();
	 Active::Hide();
	 return System::Void();
 }

 System::Void Equipment1::Active::��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
 {	 
	 Active^ f1 = gcnew Active();
	 f1->Show();
	 Active::Hide();

	 return System::Void();
 }
