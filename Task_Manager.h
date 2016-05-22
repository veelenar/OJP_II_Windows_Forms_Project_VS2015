#pragma once
#include <iostream>
#include <windows.h>
#include "Task_End.h"
#include "About.h"
#include "About_Author.h"
#include "Alert.h"

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  oProgramieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zamknijToolStripMenuItem;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button_DeleteTask;
	private: System::Windows::Forms::ToolStripMenuItem^  oAutorzeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zapiszniedost�pneToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wczytajniedost�pneToolStripMenuItem;
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
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(3) {
				L"Zr�b projekt na OJP",
					L"22.05.2016", L"Kacper D�browski"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(3) {
				L"Posprz�taj pok�j",
					L"23.05.2016", L"Kacper D�browski"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(3) {
				L"Naucz si� na kolokwium",
					L"24.05.2016", L"Kacper D�browski"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem4 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(3) {
				L"Ugotuj zup�",
					L"25.05.2016", L"Kacper D�browski"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem5 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(3) {
				L"Zr�b zakupy",
					L"27.05.2016", L"Kacper D�browski"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem6 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(3) {
				L"Zacznij kolejny projekt na OJP",
					L"28.05.2016", L"Kacper D�browski"
			}, -1));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader_Task = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader_Date = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader_Person = (gcnew System::Windows::Forms::ColumnHeader());
			this->button_NewTask = (gcnew System::Windows::Forms::Button());
			this->label_Date = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wczytajniedost�pneToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszniedost�pneToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oAutorzeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button_DeleteTask = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader_Task,
					this->columnHeader_Date, this->columnHeader_Person
			});
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(6) {
				listViewItem1, listViewItem2,
					listViewItem3, listViewItem4, listViewItem5, listViewItem6
			});
			this->listView1->Location = System::Drawing::Point(12, 27);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(600, 364);
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
			this->columnHeader_Date->Text = L"Data Zako�czenia";
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
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->menuToolStripMenuItem,
					this->oProgramieToolStripMenuItem, this->oAutorzeToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(624, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->wczytajniedost�pneToolStripMenuItem,
					this->zapiszniedost�pneToolStripMenuItem, this->zamknijToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// wczytajniedost�pneToolStripMenuItem
			// 
			this->wczytajniedost�pneToolStripMenuItem->Name = L"wczytajniedost�pneToolStripMenuItem";
			this->wczytajniedost�pneToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->wczytajniedost�pneToolStripMenuItem->Text = L"Wczytaj(niedost�pne)";
			// 
			// zapiszniedost�pneToolStripMenuItem
			// 
			this->zapiszniedost�pneToolStripMenuItem->Name = L"zapiszniedost�pneToolStripMenuItem";
			this->zapiszniedost�pneToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->zapiszniedost�pneToolStripMenuItem->Text = L"Zapisz(niedost�pne)";
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->zamknijToolStripMenuItem->Text = L"Zamknij";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zamknijToolStripMenuItem_Click);
			// 
			// oProgramieToolStripMenuItem
			// 
			this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
			this->oProgramieToolStripMenuItem->Size = System::Drawing::Size(86, 20);
			this->oProgramieToolStripMenuItem->Text = L"O programie";
			this->oProgramieToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::oProgramieToolStripMenuItem_Click);
			// 
			// oAutorzeToolStripMenuItem
			// 
			this->oAutorzeToolStripMenuItem->Name = L"oAutorzeToolStripMenuItem";
			this->oAutorzeToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->oAutorzeToolStripMenuItem->Text = L"O autorze";
			this->oAutorzeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::oAutorzeToolStripMenuItem_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 21600000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button_DeleteTask
			// 
			this->button_DeleteTask->Location = System::Drawing::Point(463, 398);
			this->button_DeleteTask->Name = L"button_DeleteTask";
			this->button_DeleteTask->Size = System::Drawing::Size(149, 31);
			this->button_DeleteTask->TabIndex = 4;
			this->button_DeleteTask->Text = L"Usu� zadanie";
			this->button_DeleteTask->UseVisualStyleBackColor = true;
			this->button_DeleteTask->Click += gcnew System::EventHandler(this, &MyForm::button_DeleteTask_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 441);
			this->Controls->Add(this->button_DeleteTask);
			this->Controls->Add(this->label_Date);
			this->Controls->Add(this->button_NewTask);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(640, 480);
			this->MinimumSize = System::Drawing::Size(640, 480);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Task Manager";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_NewTask_Click(System::Object^  sender, System::EventArgs^  e) {
		int shown = 0;
		Form^ newTaskForm = gcnew Form;
		newTaskForm->Width = 300;
		newTaskForm->Text = "Nowe zadanie";
		RectangleF ekran = System::Windows::Forms::Screen::GetBounds(newTaskForm);
		newTaskForm->Top = (ekran.Height / 2) - (newTaskForm->Height / 2);
		newTaskForm->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;

		Label^ label_Task = gcnew Label();
		label_Task->Width = 200;
		label_Task->Location = Point(50, 15);
		label_Task->Text = "Nazwa zadania:";
		newTaskForm->Controls->Add(label_Task);

		TextBox^ textBox_Task = gcnew TextBox();
		textBox_Task->Width = 200;
		textBox_Task->Location = Point(50, 40);
		newTaskForm->Controls->Add(textBox_Task);

		Label^ label_EndDate = gcnew Label();
		label_EndDate->Width = 200;
		label_EndDate->Location = Point(50, 65);
		label_EndDate->Text = "Data zako�czenia:";
		newTaskForm->Controls->Add(label_EndDate);

		MaskedTextBox^ masked_Date = gcnew MaskedTextBox();
		masked_Date->Width = 100;
		masked_Date->Location = Point(50, 90);
		masked_Date->Mask = L"00/00/0000";
		newTaskForm->Controls->Add(masked_Date);

		Label^ label_Person = gcnew Label();
		label_Person->Width = 200;
		label_Person->Location = Point(50, 115);
		label_Person->Text = "Osoba odpowiedzialna:";
		newTaskForm->Controls->Add(label_Person);

		TextBox^ textBox_Name = gcnew TextBox();
		textBox_Name->Width = 200;
		textBox_Name->Location = Point(50, 140);
		newTaskForm->Controls->Add(textBox_Name);

		Button^ button_Add = gcnew Button();
		button_Add->Width = 120;
		button_Add->Height = 30;
		button_Add->Text = "Dodaj zadanie";
		button_Add->Location = Point(50, 180);
		newTaskForm->Controls->Add(button_Add);

		button_Add->DialogResult = System::Windows::Forms::DialogResult::OK;
		newTaskForm->ShowDialog();
		if (textBox_Name->Text->IsNullOrWhiteSpace(textBox_Name->Text) == false && textBox_Task->Text->IsNullOrWhiteSpace(textBox_Task->Text) == false)
		{
			ListViewItem^ Task = gcnew ListViewItem;
			Task = listView1->Items->Add(textBox_Task->Text);
			Task->SubItems->Add(masked_Date->Text);
			Task->SubItems->Add(textBox_Name->Text);
		}
		else
		{
			Alert^ AlertForm = gcnew Alert;
			AlertForm->ShowDialog();
		}
		SYSTEMTIME st;
		GetLocalTime(&st);
		int dzien = st.wDay;
		int miesiac = st.wMonth;
		int rok = st.wYear;

		if (dzien >= 10 && miesiac >= 10)
		{
			label_Date->Text = dzien + 1 + "." + miesiac + "." + rok;
		}
		else if (dzien < 10 && miesiac >= 10)
		{
			label_Date->Text = "0" + dzien + 1 + "." + miesiac + "." + rok;
		}
		else if (dzien >= 10 && miesiac < 10)
		{
			label_Date->Text = dzien + 1 + "." + "0" + miesiac + "." + rok;
		}
		else if (dzien < 10 && miesiac < 10)
		{
			label_Date->Text = "0" + dzien + 1 + "." + "0" + miesiac + "." + rok;
		}
		for (int i = 0; i < 1000; i++)
		{
			try {
				if (listView1->Items[i]->SubItems[1]->Text == label_Date->Text && shown == 0)
				{
					Task_End^ endTaskWindow = gcnew Task_End;
					endTaskWindow->ShowDialog();
					shown++;
				}
			}
			catch (Exception^ exception) { break; };
		}
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

		SYSTEMTIME st;
		GetLocalTime(&st);
		int dzien = st.wDay;
		int miesiac = st.wMonth;
		int rok = st.wYear;

		if (dzien >= 10 && miesiac >= 10)
		{
			label_Date->Text = dzien + 1 + "." + miesiac + "." + rok;
		}
		else if (dzien < 10 && miesiac >= 10)
		{
			label_Date->Text = "0" + dzien + 1 + "." + miesiac + "." + rok;
		}
		else if (dzien >= 10 && miesiac < 10)
		{
			label_Date->Text = dzien + 1 + "." + "0" + miesiac + "." + rok;
		}
		else if (dzien < 10 && miesiac < 10)
		{
			label_Date->Text = "0" + dzien + 1 + "." + "0" + miesiac + "." + rok;
		}
		for (int i = 0; i < 1000; i++)
		{
			try {
				if (listView1->Items[i]->SubItems[1]->Text == label_Date->Text)
				{
					Task_End^ endTaskWindow = gcnew Task_End;
					endTaskWindow->ShowDialog();
				}
			}
			catch (Exception^ exception) { break; };
		}

	}

	private: System::Void oProgramieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		About^ About_Form_Open = gcnew About;
		About_Form_Open->ShowDialog();
	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		SYSTEMTIME st;
		GetLocalTime(&st);
		int dzien = st.wDay;
		int miesiac = st.wMonth;
		int rok = st.wYear;

		if (dzien >= 10 && miesiac >= 10)
		{
			label_Date->Text = dzien + 1 + "." + miesiac + "." + rok;
		}
		else if (dzien < 10 && miesiac >= 10)
		{
			label_Date->Text = "0" + dzien + 1 + "." + miesiac + "." + rok;
		}
		else if (dzien >= 10 && miesiac < 10)
		{
			label_Date->Text = dzien + 1 + "." + "0" + miesiac + "." + rok;
		}
		else if (dzien < 10 && miesiac < 10)
		{
			label_Date->Text = "0" + dzien + 1 + "." + "0" + miesiac + "." + rok;
		}
		for (int i = 0; i < 1000; i++)
		{
			try {
				if (listView1->Items[i]->SubItems[1]->Text == label_Date->Text)
				{
					Task_End^ endTaskWindow = gcnew Task_End;
					endTaskWindow->ShowDialog();
				}
			}
			catch (Exception^ exception) { break; };
		}
	}
	private: System::Void zamknijToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
private: System::Void button_DeleteTask_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		this->listView1->SelectedItems[0]->Remove();
	}
	catch(Exception^ exception){};
	}
private: System::Void oAutorzeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	About_Author^ About_Author_Window_Open = gcnew About_Author;
	About_Author_Window_Open->ShowDialog();
}
};
}
