#pragma once

#include <fstream>
#include <iostream>



struct Customer_Struct {
	
	char customerName[50];
	char customerSurname[50];
	char customerPhone[50];
	char customerNotes[250];
	char webSiteLink[100];

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

	private: System::Windows::Forms::Label^  nameLabel;
	private: System::Windows::Forms::TextBox^  surnameInput;

	private: System::Windows::Forms::Label^  surnameLabel;
	private: System::Windows::Forms::Button^  saveBtn;
	private: System::Windows::Forms::Label^  customerPhone;
	private: System::Windows::Forms::TextBox^  phoneInput;
	private: System::Windows::Forms::TextBox^  noteInput;
	private: System::Windows::Forms::Label^  note_label;
	private: System::Windows::Forms::TextBox^  nameInput;
	private: System::Windows::Forms::Label^  webSite;
	private: System::Windows::Forms::TextBox^  webSite_input;

	private: System::ComponentModel::IContainer^  components;






	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Customer_Form::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nameInput = (gcnew System::Windows::Forms::TextBox());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->surnameInput = (gcnew System::Windows::Forms::TextBox());
			this->surnameLabel = (gcnew System::Windows::Forms::Label());
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			this->customerPhone = (gcnew System::Windows::Forms::Label());
			this->phoneInput = (gcnew System::Windows::Forms::TextBox());
			this->noteInput = (gcnew System::Windows::Forms::TextBox());
			this->note_label = (gcnew System::Windows::Forms::Label());
			this->webSite = (gcnew System::Windows::Forms::Label());
			this->webSite_input = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(143, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add New Customer";
			// 
			// nameInput
			// 
			this->nameInput->Cursor = System::Windows::Forms::Cursors::Arrow;
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
			this->saveBtn->Location = System::Drawing::Point(137, 473);
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
			// noteInput
			// 
			this->noteInput->Location = System::Drawing::Point(137, 346);
			this->noteInput->Multiline = true;
			this->noteInput->Name = L"noteInput";
			this->noteInput->Size = System::Drawing::Size(226, 94);
			this->noteInput->TabIndex = 8;
			// 
			// note_label
			// 
			this->note_label->AutoSize = true;
			this->note_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->note_label->Location = System::Drawing::Point(38, 346);
			this->note_label->Name = L"note_label";
			this->note_label->Size = System::Drawing::Size(55, 20);
			this->note_label->TabIndex = 9;
			this->note_label->Text = L"Notes:";
			// 
			// webSite
			// 
			this->webSite->AutoSize = true;
			this->webSite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->webSite->Location = System::Drawing::Point(38, 291);
			this->webSite->Name = L"webSite";
			this->webSite->Size = System::Drawing::Size(79, 20);
			this->webSite->TabIndex = 10;
			this->webSite->Text = L"Web-Site:";
			// 
			// webSite_input
			// 
			this->webSite_input->Location = System::Drawing::Point(147, 293);
			this->webSite_input->Name = L"webSite_input";
			this->webSite_input->Size = System::Drawing::Size(100, 20);
			this->webSite_input->TabIndex = 11;
			// 
			// Customer_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(454, 540);
			this->Controls->Add(this->webSite_input);
			this->Controls->Add(this->webSite);
			this->Controls->Add(this->note_label);
			this->Controls->Add(this->noteInput);
			this->Controls->Add(this->phoneInput);
			this->Controls->Add(this->customerPhone);
			this->Controls->Add(this->saveBtn);
			this->Controls->Add(this->surnameLabel);
			this->Controls->Add(this->surnameInput);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->nameInput);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Customer_Form";
			this->Text = L"Customer_Form";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Customer_Form::Customer_Form_FormClosing);
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


			String^ s_nameInp = nameInput->Text;
			String^ s_surnameInp = surnameInput->Text;
			String^ phone_inp = phoneInput->Text;
			String^ note_inp = noteInput->Text;
			String^ web_link = webSite_input->Text;

			//Check if fields are not empty 
			/*
			if (s_nameInp = " ") {
				MessageBox::Show("Name Input cannot be blank");
			}
			*/


			char* customerName = and_SysStringToChar(s_nameInp);
			char* customerSurname = and_SysStringToChar(s_surnameInp);
			char* customerPhone = and_SysStringToChar(phone_inp);
			char* customerNotes = and_SysStringToChar(note_inp);
			char* webLink = and_SysStringToChar(web_link);

			//Validate customer name
			for (int i = 0; i < strlen(customerName); i++)
			{
				if (islower(customerName[0])) {
					customerName[0] = toupper(customerName[0]);
				}
				else {
					customerName[i + 1] = tolower(customerName[i + 1]);
				}
			}

			//Validate phone number
			for (int i = 0; i < strlen(customerPhone); i++)
			{
				if (!isdigit(customerPhone[i])) {
					MessageBox::Show("Only Digits are allowed");
					break;
				}
			}
			

			//Validate customer surname
			for (int i = 0; i < strlen(customerSurname); i++)
			{
				if (islower(customerSurname[0])) {
					customerSurname[0] = toupper(customerSurname[0]);
				}
				else {
					customerSurname[i + 1] = tolower(customerSurname[i + 1]);
				}

				fileCreate.open("mystring.data", ios::app);
				fileCreate << customerName << endl;
				fileCreate << customerSurname << endl;
				fileCreate << customerPhone << endl;
				fileCreate << webLink << endl;
				fileCreate << customerNotes << endl;


			}
			fileCreate.close();
			
			//Empty Fields after clicked save button
			nameInput->Text = "";
			surnameInput->Text = "";
			phoneInput->Text = "";
			noteInput->Text = "";
			webSite_input->Text = "";


			
	}

	//if closing customer form, display main form
	private: System::Void Customer_Form_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		//MainWindow::Form->Show();
		
	}
};
}
