#pragma once

namespace Task_Manager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Task_End
	/// </summary>
	public ref class Task_End : public System::Windows::Forms::Form
	{
	public:
		Task_End(void)
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
		~Task_End()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  button_CloseAnnouncement;

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
			this->button_CloseAnnouncement = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Jutro koñczy siê czas na jedno z Twoich zadañ!\r\n\r\nSprawdŸ listê zadañ, by dowiedz"
				L"ieæ siê wiêcej.";
			// 
			// button_CloseAnnouncement
			// 
			this->button_CloseAnnouncement->Location = System::Drawing::Point(160, 99);
			this->button_CloseAnnouncement->Name = L"button_CloseAnnouncement";
			this->button_CloseAnnouncement->Size = System::Drawing::Size(100, 23);
			this->button_CloseAnnouncement->TabIndex = 1;
			this->button_CloseAnnouncement->Text = L"PrzejdŸ do listy";
			this->button_CloseAnnouncement->UseVisualStyleBackColor = true;
			this->button_CloseAnnouncement->Click += gcnew System::EventHandler(this, &Task_End::button_CloseAnnouncement_Click);
			// 
			// Task_End
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(432, 134);
			this->Controls->Add(this->button_CloseAnnouncement);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(448, 173);
			this->MinimumSize = System::Drawing::Size(448, 173);
			this->Name = L"Task_End";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Task End";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_CloseAnnouncement_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	};
}
