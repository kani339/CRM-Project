#pragma once

#include <fstream>
#include <iostream>



struct Customer_Struct {
	
	char customerName[50];
	char customerSurname[50];
	char customerPhone[50];
	char customerNotes[250];
	char customerPostion[100];

};



namespace CMR_System {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//To Convert String to char aray
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for Customer_Form
	/// </summary>
	public ref class Customer_Form : public System::Windows::Forms::Form
	{
	public:
		Customer_Form(void)
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
		~Customer_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  nameInput;
	private: System::Windows::Forms::Label^  nameLabel;
	private: System::Windows::Forms::TextBox^  surnameInput;

	private: System::Windows::Forms::Label^  surnameLabel;
	private: System::Windows::Forms::Button^  saveBtn;
	private: System::Windows::Forms::Label^  customerPhone;
	private: System::Windows::Forms::TextBox^  phoneInput;






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
			this->nameInput = (gcnew System::Windows::Forms::TextBox());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->surnameInput = (gcnew System::Windows::Forms::TextBox());
			this->surnameLabel = (gcnew System::Windows::Forms::Label());
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			this->customerPhone = (gcnew System::Windows::Forms::Label());
			this->phoneInput = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(104, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add New Customer";
			// 
			// nameInput
			// 
			this->nameInput->Location = System::Drawing::Point(147, 117);
			this->nameInput->MaxLength = 60;
			this->nameInput->Name = L"nameInput";
			this->nameInput->Size = System::Drawing::Size(109, 20);
			this->nameInput->TabIndex = 1;
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameLabel->Location = System::Drawing::Point(42, 117);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(55, 20);
			this->nameLabel->TabIndex = 2;
			this->nameLabel->Text = L"Name:";
			// 
			// surnameInput
			// 
			this->surnameInput->Location = System::Drawing::Point(147, 170);
			this->surnameInput->MaxLength = 60;
			this->surnameInput->Name = L"surnameInput";
			this->surnameInput->Size = System::Drawing::Size(109, 20);
			this->surnameInput->TabIndex = 3;
			// 
			// surnameLabel
			// 
			this->surnameLabel->AutoSize = true;
			this->surnameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->surnameLabel->Location = System::Drawing::Point(38, 170);
			this->surnameLabel->Name = L"surnameLabel";
			this->surnameLabel->Size = System::Drawing::Size(78, 20);
			this->surnameLabel->TabIndex = 4;
			this->surnameLabel->Text = L"Surname:";
			// 
			// saveBtn
			// 
			this->saveBtn->Location = System::Drawing::Point(131, 370);
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(75, 23);
			this->saveBtn->TabIndex = 5;
			this->saveBtn->Text = L"Save";
			this->saveBtn->UseVisualStyleBackColor = true;
			this->saveBtn->Click += gcnew System::EventHandler(this, &Customer_Form::saveBtn_Click);
			// 
			// customerPhone
			// 
			this->customerPhone->AutoSize = true;
			this->customerPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->customerPhone->Location = System::Drawing::Point(38, 229);
			this->customerPhone->Name = L"customerPhone";
			this->customerPhone->Size = System::Drawing::Size(59, 20);
			this->customerPhone->TabIndex = 6;
			this->customerPhone->Text = L"Phone:";
			// 
			// phoneInput
			// 
			this->phoneInput->Location = System::Drawing::Point(147, 229);
			this->phoneInput->Name = L"phoneInput";
			this->phoneInput->Size = System::Drawing::Size(100, 20);
			this->phoneInput->TabIndex = 7;
			// 
			// Customer_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(389, 457);
			this->Controls->Add(this->phoneInput);
			this->Controls->Add(this->customerPhone);
			this->Controls->Add(this->saveBtn);
			this->Controls->Add(this->surnameLabel);
			this->Controls->Add(this->surnameInput);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->nameInput);
			this->Controls->Add(this->label1);
			this->Name = L"Customer_Form";
			this->Text = L"Customer_Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		//Convert String to char array
		char * and_SysStringToChar(System::String^ string)
		{
			return (char*)(void*)Marshal::StringToHGlobalAnsi(string);
		}


	//Save to File
	private: System::Void saveBtn_Click(System::Object^  sender, System::EventArgs^  e) {

		ofstream fileCreate;
		
		for (int i = 0; i < 2; i++) {

			String^ s_nameInp = nameInput->Text;
			String^ s_surnameInp = surnameInput->Text;
			String^ phone_inp = phoneInput->Text;

			char* customerName = and_SysStringToChar(s_nameInp);
			char* customerSurname = and_SysStringToChar(s_surnameInp);

			fileCreate.open("mystring.data", ios::app);
			fileCreate << customerName << endl;
			fileCreate << customerSurname << endl;
			
		}
		fileCreate.close();




	}

};
}
