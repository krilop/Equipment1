#pragma once
namespace Equipment1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Active
	/// </summary>
	public ref class Peoples : public System::Windows::Forms::Form
	{
	public:
		Peoples(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Peoples()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	protected:

	protected:




	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ переходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оборудованиеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ работникиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ списаниеToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id_people;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name_people;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ wear;
















	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->id_people = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name_people = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->wear = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->переходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оборудованиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->работникиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->списаниеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->id_people,
					this->Name_people, this->wear
			});
			this->dataGridView2->Location = System::Drawing::Point(37, 133);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(639, 257);
			this->dataGridView2->TabIndex = 0;
			// 
			// id_people
			// 
			this->id_people->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->id_people->HeaderText = L"id";
			this->id_people->Name = L"id_people";
			this->id_people->Width = 40;
			// 
			// Name_people
			// 
			this->Name_people->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Name_people->HeaderText = L"Name";
			this->Name_people->Name = L"Name_people";
			this->Name_people->Width = 60;
			// 
			// wear
			// 
			this->wear->HeaderText = L"wear";
			this->wear->Name = L"wear";
			this->wear->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->переходToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1009, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// переходToolStripMenuItem
			// 
			this->переходToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->оборудованиеToolStripMenuItem,
					this->работникиToolStripMenuItem, this->списаниеToolStripMenuItem
			});
			this->переходToolStripMenuItem->Name = L"переходToolStripMenuItem";
			this->переходToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->переходToolStripMenuItem->Text = L"Переход";
			// 
			// оборудованиеToolStripMenuItem
			// 
			this->оборудованиеToolStripMenuItem->Name = L"оборудованиеToolStripMenuItem";
			this->оборудованиеToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->оборудованиеToolStripMenuItem->Text = L"Оборудование";
			this->оборудованиеToolStripMenuItem->Click += gcnew System::EventHandler(this, &Peoples::оборудованиеToolStripMenuItem_Click);
			// 
			// работникиToolStripMenuItem
			// 
			this->работникиToolStripMenuItem->Name = L"работникиToolStripMenuItem";
			this->работникиToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->работникиToolStripMenuItem->Text = L"Работники";
			this->работникиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Peoples::работникиToolStripMenuItem_Click);
			// 
			// списаниеToolStripMenuItem
			// 
			this->списаниеToolStripMenuItem->Name = L"списаниеToolStripMenuItem";
			this->списаниеToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->списаниеToolStripMenuItem->Text = L"Списание";
			this->списаниеToolStripMenuItem->Click += gcnew System::EventHandler(this, &Peoples::списаниеToolStripMenuItem_Click);
			// 
			// Peoples
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1009, 496);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Peoples";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Peoples";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void оборудованиеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void работникиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void списаниеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
