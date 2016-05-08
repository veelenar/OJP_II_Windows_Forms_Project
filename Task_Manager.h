#pragma once
#include "New_Task.h"
namespace Task_Manager_v2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Task_Manager
	/// </summary>
	public ref class Task_Manager : public System::Windows::Forms::Form
	{
	public:
		Task_Manager(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Task_Manager()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^  ColumnHeader_Task;
	private: System::Windows::Forms::ColumnHeader^  ColumnHeader_Deadline;
	private: System::Windows::Forms::ColumnHeader^  ColumnHeader_Person;
	private: System::Windows::Forms::MenuStrip^  menuStrip;


	private: System::Windows::Forms::ToolStripMenuItem^  plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zamknijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oMnieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oProgramieToolStripMenuItem;
	private: System::Windows::Forms::Button^  button_AddNewTask;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;








	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(3) {
				L"Zrób kanapkê",
					L"May  08 2016", L"Kacper"
			}, -1));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->ColumnHeader_Task = (gcnew System::Windows::Forms::ColumnHeader());
			this->ColumnHeader_Deadline = (gcnew System::Windows::Forms::ColumnHeader());
			this->ColumnHeader_Person = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oMnieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button_AddNewTask = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->menuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->AutoArrange = false;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->ColumnHeader_Task,
					this->ColumnHeader_Deadline, this->ColumnHeader_Person
			});
			listViewItem1->Tag = L"";
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { listViewItem1 });
			this->listView1->Location = System::Drawing::Point(12, 27);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(648, 260);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// ColumnHeader_Task
			// 
			this->ColumnHeader_Task->Text = L"Zadanie";
			this->ColumnHeader_Task->Width = 315;
			// 
			// ColumnHeader_Deadline
			// 
			this->ColumnHeader_Deadline->Text = L"Termin wykonania";
			this->ColumnHeader_Deadline->Width = 109;
			// 
			// ColumnHeader_Person
			// 
			this->ColumnHeader_Person->Text = L"Osoba odpowiedzialna";
			this->ColumnHeader_Person->Width = 219;
			// 
			// menuStrip
			// 
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem,
					this->oMnieToolStripMenuItem, this->oProgramieToolStripMenuItem
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(672, 24);
			this->menuStrip->TabIndex = 2;
			this->menuStrip->Text = L"Menu";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->zamknijToolStripMenuItem });
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(117, 22);
			this->zamknijToolStripMenuItem->Text = L"Zamknij";
			// 
			// oMnieToolStripMenuItem
			// 
			this->oMnieToolStripMenuItem->Name = L"oMnieToolStripMenuItem";
			this->oMnieToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->oMnieToolStripMenuItem->Text = L"O mnie";
			// 
			// oProgramieToolStripMenuItem
			// 
			this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
			this->oProgramieToolStripMenuItem->Size = System::Drawing::Size(86, 20);
			this->oProgramieToolStripMenuItem->Text = L"O programie";
			// 
			// button_AddNewTask
			// 
			this->button_AddNewTask->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_AddNewTask->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button_AddNewTask->Location = System::Drawing::Point(13, 360);
			this->button_AddNewTask->Name = L"button_AddNewTask";
			this->button_AddNewTask->Size = System::Drawing::Size(144, 32);
			this->button_AddNewTask->TabIndex = 3;
			this->button_AddNewTask->Text = L"Dodaj nowe zadanie";
			this->button_AddNewTask->UseVisualStyleBackColor = true;
			this->button_AddNewTask->Click += gcnew System::EventHandler(this, &Task_Manager::button_AddNewTask_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(460, 293);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// Task_Manager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(672, 404);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button_AddNewTask);
			this->Controls->Add(this->menuStrip);
			this->Name = L"Task_Manager";
			this->Text = L"Task Manager";
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		NewTask^ noweOkno = gcnew NewTask;
#pragma endregion
	private: System::Void button_AddNewTask_Click(System::Object^  sender, System::EventArgs^  e) {
		if (__DATE__ == listView1->Items[0]->SubItems[0]->Text)
		{
			noweOkno->ShowDialog();
		}
	}
	};
}

