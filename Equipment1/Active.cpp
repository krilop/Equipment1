#include "Active.h"
#include "Items.h"
#include "Peoples.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;

 [STAThreadAttribute]
 int main(array<String^>^ arg)
 {
	 Application::EnableVisualStyles();
	 Application::SetCompatibleTextRenderingDefault(false);

	 Equipment1::Active form;
	 Application::Run(% form);
	 // ����������� ��
	 String^ connectionString = "provider-Microsoft.Jet.OLEDB.4.0;Data Source-Database.mdb";
	 OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
	 // ������ � ��
	 dbConnection->Open(); // ��������� ����������
	 String^ query = "SELECT * FROM [table_name]";// ������
	 OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);// �������
	 OleDbDataReader^ dbReader = dbComand->ExecuteReader();//��������� ������

	 //��������� ������ 
	 if (dbReader->HasRows==false)
	 {
		 MessageBox::Show("������ ���������� ������!","������!");
	 }
	 else {
		 //�������� ������ � ������� �����

		 while (dbReader->Read())
		 {
			 dataGridView3->Rows->Add(dbReader["id"], dbReader["Name"], dbReader["Price"], dbReader["Quality"]);
		 }


	 }


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
