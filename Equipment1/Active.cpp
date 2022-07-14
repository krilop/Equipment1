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
	 // подключение бд
	 String^ connectionString = "provider-Microsoft.Jet.OLEDB.4.0;Data Source-Database.mdb";
	 OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
	 // запрос к бд
	 dbConnection->Open(); // открываем соединение
	 String^ query = "SELECT * FROM [table_name]";// запрос
	 OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);// команда
	 OleDbDataReader^ dbReader = dbComand->ExecuteReader();//считываем данные

	 //Проверяем данные 
	 if (dbReader->HasRows==false)
	 {
		 MessageBox::Show("Ошибка считывания данных!","Ошибка!");
	 }
	 else {
		 //заполним данные в таблицу формы

		 while (dbReader->Read())
		 {
			 dataGridView3->Rows->Add(dbReader["id"], dbReader["Name"], dbReader["Price"], dbReader["Quality"]);
		 }


	 }


 }

 System::Void Equipment1::Active::оборудованиеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
 {
	 Items^ f2 = gcnew Items(); // создание нового экземпляра
	 f2->Show(); // Отрытие второй формы
	 Active::Hide(); // Скрытие первой формы
	 return System::Void();
 }

 System::Void Equipment1::Active::работникиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
 {		
	 Peoples^ f3 = gcnew Peoples();
	 f3->Show();
	 Active::Hide();
	 return System::Void();
 }

 System::Void Equipment1::Active::списаниеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
 {	 
	 Active^ f1 = gcnew Active();
	 f1->Show();
	 Active::Hide();

	 return System::Void();
 }
