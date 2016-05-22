#pragma once

namespace Task_Manager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for About_Author
	/// </summary>
	public ref class About_Author : public System::Windows::Forms::Form
	{
	public:
		About_Author(void)
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
		~About_Author()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button_BackToList;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_BackToList = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(429, 60);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Autorem aplikacji jest Kacper D¹browski,\r\nstudent 2 roku studiów in¿ynierskich na"
				L" kierunku\r\nFizyka Techniczna ze specjalizacj¹ Informatyka Stosowana.";
			// 
			// button_BackToList
			// 
			this->button_BackToList->Location = System::Drawing::Point(13, 287);
			this->button_BackToList->Name = L"button_BackToList";
			this->button_BackToList->Size = System::Drawing::Size(145, 42);
			this->button_BackToList->TabIndex = 1;
			this->button_BackToList->Text = L"Powrót do listy zadañ";
			this->button_BackToList->UseVisualStyleBackColor = true;
			this->button_BackToList->Click += gcnew System::EventHandler(this, &About_Author::button_BackToList_Click);
			// 
			// About_Author
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(478, 341);
			this->Controls->Add(this->button_BackToList);
			this->Controls->Add(this->label1);
			this->Name = L"About_Author";
			this->Text = L"About_Author";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_BackToList_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	};
}
