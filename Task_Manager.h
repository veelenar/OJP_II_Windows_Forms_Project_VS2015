#pragma once
#include <iostream>
#include <windows.h>
#include "New_Task.h"
#include "Task_End.h"


namespace Task_Manager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected:
	private: System::Windows::Forms::Button^  button_NewTask;
	private: System::Windows::Forms::ColumnHeader^  columnHeader_Task;
	private: System::Windows::Forms::ColumnHeader^  columnHeader_Date;
	private: System::Windows::Forms::ColumnHeader^  columnHeader_Person;
	private: System::Windows::Forms::Label^  label_Date;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(3) {
				L"Zrób projekt na OJP",
					L"17.05.2016", L"Kacper D¹browski"
			}, -1));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader_Task = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader_Date = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader_Person = (gcnew System::Windows::Forms::ColumnHeader());
			this->button_NewTask = (gcnew System::Windows::Forms::Button());
			this->label_Date = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader_Task,
					this->columnHeader_Date, this->columnHeader_Person
			});
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { listViewItem1 });
			this->listView1->Location = System::Drawing::Point(13, 52);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(599, 325);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader_Task
			// 
			this->columnHeader_Task->Text = L"Zadanie";
			this->columnHeader_Task->Width = 309;
			// 
			// columnHeader_Date
			// 
			this->columnHeader_Date->Text = L"Data Zakoñczenia";
			this->columnHeader_Date->Width = 111;
			// 
			// columnHeader_Person
			// 
			this->columnHeader_Person->Text = L"Osoba odpowiedzialna";
			this->columnHeader_Person->Width = 176;
			// 
			// button_NewTask
			// 
			this->button_NewTask->Location = System::Drawing::Point(13, 397);
			this->button_NewTask->Name = L"button_NewTask";
			this->button_NewTask->Size = System::Drawing::Size(149, 32);
			this->button_NewTask->TabIndex = 1;
			this->button_NewTask->Text = L"Nowe zadanie";
			this->button_NewTask->UseVisualStyleBackColor = true;
			this->button_NewTask->Click += gcnew System::EventHandler(this, &MyForm::button_NewTask_Click);
			// 
			// label_Date
			// 
			this->label_Date->AutoSize = true;
			this->label_Date->Location = System::Drawing::Point(169, 397);
			this->label_Date->Name = L"label_Date";
			this->label_Date->Size = System::Drawing::Size(0, 13);
			this->label_Date->TabIndex = 2;
			this->label_Date->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 441);
			this->Controls->Add(this->label_Date);
			this->Controls->Add(this->button_NewTask);
			this->Controls->Add(this->listView1);
			this->MaximumSize = System::Drawing::Size(640, 480);
			this->MinimumSize = System::Drawing::Size(640, 480);
			this->Name = L"MyForm";
			this->Text = L"Task Manager";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_NewTask_Click(System::Object^  sender, System::EventArgs^  e) {
		New_Task^ newTaskWindow = gcnew New_Task;
		newTaskWindow->ShowDialog();
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		
		SYSTEMTIME st;
		GetLocalTime(&st);
		int dzien = st.wDay;
		int miesiac = st.wMonth;
		int rok = st.wYear;

		if (dzien >= 10 && miesiac >= 10)
		{
			label_Date->Text = dzien+1 + "." + miesiac + "." + rok;
		}
		else if (dzien < 10 && miesiac >= 10)
		{
			label_Date->Text = "0" + dzien+1 + "." + miesiac + "." + rok;
		}
		else if (dzien >= 10 && miesiac < 10)
		{
			label_Date->Text = dzien+1 + "." + "0" + miesiac + "." + rok;
		}
		else if (dzien < 10 && miesiac < 10)
		{
			label_Date->Text = "0" + dzien+1 + "." + "0" + miesiac + "." + rok;
		}

		if (listView1->Items[0]->SubItems[1]->Text == label_Date->Text)
		{
			Task_End^ endTaskWindow = gcnew Task_End;
			endTaskWindow->ShowDialog();
		}
	}
	};
}
