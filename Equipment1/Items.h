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
	public ref class Items : public System::Windows::Forms::Form
	{
	public:
		Items(void)
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
		~Items()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id_item;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name_Item;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ issued;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ переходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оборудованиеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ работникиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ списаниеToolStripMenuItem;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id_item = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name_Item = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->issued = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->переходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оборудованиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->работникиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->списаниеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->id_item,
					this->Name_Item, this->price, this->issued
			});
			this->dataGridView1->Location = System::Drawing::Point(37, 133);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(639, 257);
			this->dataGridView1->TabIndex = 0;
			// 
			// id_item
			// 
			this->id_item->HeaderText = L"id";
			this->id_item->Name = L"id_item";
			// 
			// Name_Item
			// 
			this->Name_Item->HeaderText = L"Name";
			this->Name_Item->Name = L"Name_Item";
			// 
			// price
			// 
			this->price->HeaderText = L"Price";
			this->price->Name = L"price";
			// 
			// issued
			// 
			this->issued->HeaderText = L"Issued";
			this->issued->Name = L"issued";
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
			this->оборудованиеToolStripMenuItem->Click += gcnew System::EventHandler(this, &Items::оборудованиеToolStripMenuItem_Click);
			// 
			// работникиToolStripMenuItem
			// 
			this->работникиToolStripMenuItem->Name = L"работникиToolStripMenuItem";
			this->работникиToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->работникиToolStripMenuItem->Text = L"Работники";
			this->работникиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Items::работникиToolStripMenuItem_Click);
			// 
			// списаниеToolStripMenuItem
			// 
			this->списаниеToolStripMenuItem->Name = L"списаниеToolStripMenuItem";
			this->списаниеToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->списаниеToolStripMenuItem->Text = L"Списание";
			this->списаниеToolStripMenuItem->Click += gcnew System::EventHandler(this, &Items::списаниеToolStripMenuItem_Click);
			// 
			// Active
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1009, 496);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Active";
			this->Text = L"Items";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
