#pragma once

namespace Task_Manager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Alert
	/// </summary>
	public ref class Alert : public System::Windows::Forms::Form
	{
	public:
		Alert(void)
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
		~Alert()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_Alert;
	protected:
	private: System::Windows::Forms::Label^  label1;

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
			this->button_Alert = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_Alert
			// 
			this->button_Alert->Location = System::Drawing::Point(177, 95);
			this->button_Alert->Name = L"button_Alert";
			this->button_Alert->Size = System::Drawing::Size(110, 37);
			this->button_Alert->TabIndex = 0;
			this->button_Alert->Text = L"OK";
			this->button_Alert->UseVisualStyleBackColor = true;
			this->button_Alert->Click += gcnew System::EventHandler(this, &Alert::button_Alert_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(13, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(306, 48);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Wprowadzi³eœ niepoprawne dane. \r\nDodaj zadanie jeszcze raz.";
			// 
			// Alert
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(467, 144);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_Alert);
			this->MaximumSize = System::Drawing::Size(483, 183);
			this->MinimumSize = System::Drawing::Size(483, 183);
			this->Name = L"Alert";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Alert";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_Alert_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	};
}
