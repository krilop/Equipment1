#pragma once
namespace Equipment1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ?????? ??? Active
	/// </summary>
	public ref class Active : public System::Windows::Forms::Form
	{
	public:
		Active(void)
		{
			InitializeComponent();
			//
			//TODO: ???????? ??? ????????????
			//
		}

	protected:
		/// <summary>
		/// ?????????? ??? ???????????? ???????.
		/// </summary>
		~Active()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id_item;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name_Item;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ issued;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ???????ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ????????????ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ?????????ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ????????ToolStripMenuItem;

	private:
		/// <summary>
		/// ???????????? ?????????? ????????????.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ????????? ????? ??? ????????? ???????????? ? ?? ????????? 
		/// ?????????? ????? ?????? ? ??????? ????????? ????.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->id_item = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name_Item = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->issued = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->???????ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->????????????ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->?????????ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->????????ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->id_item,
					this->Name_Item, this->price, this->issued
			});
			this->dataGridView3->Location = System::Drawing::Point(12, 61);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(639, 257);
			this->dataGridView3->TabIndex = 0;
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->???????ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1009, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ???????ToolStripMenuItem
			// 
			this->???????ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->????????????ToolStripMenuItem,
					this->?????????ToolStripMenuItem, this->????????ToolStripMenuItem
			});
			this->???????ToolStripMenuItem->Name = L"???????ToolStripMenuItem";
			this->???????ToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->???????ToolStripMenuItem->Text = L"???????";
			// 
			// ????????????ToolStripMenuItem
			// 
			this->????????????ToolStripMenuItem->Name = L"????????????ToolStripMenuItem";
			this->????????????ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->????????????ToolStripMenuItem->Text = L"????????????";
			this->????????????ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Active::????????????ToolStripMenuItem_Click);
			// 
			// ?????????ToolStripMenuItem
			// 
			this->?????????ToolStripMenuItem->Name = L"?????????ToolStripMenuItem";
			this->?????????ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->?????????ToolStripMenuItem->Text = L"?????????";
			this->?????????ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Active::?????????ToolStripMenuItem_Click);
			// 
			// ????????ToolStripMenuItem
			// 
			this->????????ToolStripMenuItem->Name = L"????????ToolStripMenuItem";
			this->????????ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->????????ToolStripMenuItem->Text = L"????????";
			this->????????ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Active::????????ToolStripMenuItem_Click);
			// 
			// Active
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1009, 496);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Active";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Active";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ????????????ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ?????????ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ????????ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
