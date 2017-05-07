#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4996)
#endif


#pragma once

#include <fstream>
#include <regex>
#include <iomanip>
#include <chrono> 
//#include "Headers.h"
//#include "MainWindow.h"


struct Customer_Struct {
	
	char customerName[50];
	char customerSurname[50];
	char customerPhone[50];
	char customerNotes[250];
	char customerEmail[30];

};



namespace CMR_System {

	using namespace std;
	using chrono::system_clock;
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
	private: System::Windows::Forms::Label^  emailLabel;
	private: System::Windows::Forms::TextBox^  email_input;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;

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
			this->emailLabel = (gcnew System::Windows::Forms::Label());
			this->email_input = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
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
			this->nameInput->Location = System::Drawing::Point(147, 103);
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
			this->nameLabel->Location = System::Drawing::Point(42, 101);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(55, 20);
			this->nameLabel->TabIndex = 2;
			this->nameLabel->Text = L"Name:";
			// 
			// surnameInput
			// 
			this->surnameInput->Location = System::Drawing::Point(147, 156);
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
			this->surnameLabel->Location = System::Drawing::Point(38, 154);
			this->surnameLabel->Name = L"surnameLabel";
			this->surnameLabel->Size = System::Drawing::Size(78, 20);
			this->surnameLabel->TabIndex = 4;
			this->surnameLabel->Text = L"Surname:";
			// 
			// saveBtn
			// 
			this->saveBtn->Location = System::Drawing::Point(137, 451);
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
			this->customerPhone->Location = System::Drawing::Point(42, 214);
			this->customerPhone->Name = L"customerPhone";
			this->customerPhone->Size = System::Drawing::Size(59, 20);
			this->customerPhone->TabIndex = 6;
			this->customerPhone->Text = L"Phone:";
			// 
			// phoneInput
			// 
			this->phoneInput->Location = System::Drawing::Point(147, 216);
			this->phoneInput->Name = L"phoneInput";
			this->phoneInput->Size = System::Drawing::Size(100, 20);
			this->phoneInput->TabIndex = 7;
			// 
			// noteInput
			// 
			this->noteInput->Location = System::Drawing::Point(137, 328);
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
			this->note_label->Location = System::Drawing::Point(40, 338);
			this->note_label->Name = L"note_label";
			this->note_label->Size = System::Drawing::Size(55, 20);
			this->note_label->TabIndex = 9;
			this->note_label->Text = L"Notes:";
			// 
			// emailLabel
			// 
			this->emailLabel->AutoSize = true;
			this->emailLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->emailLabel->Location = System::Drawing::Point(38, 273);
			this->emailLabel->Name = L"emailLabel";
			this->emailLabel->Size = System::Drawing::Size(57, 20);
			this->emailLabel->TabIndex = 10;
			this->emailLabel->Text = L"E-mail:";
			// 
			// email_input
			// 
			this->email_input->Location = System::Drawing::Point(147, 275);
			this->email_input->Name = L"email_input";
			this->email_input->Size = System::Drawing::Size(100, 20);
			this->email_input->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Green;
			this->label2->Location = System::Drawing::Point(134, 507);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Succesfully Added";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(150, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Invalid Name";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(150, 190);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Invalid Surname";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(149, 250);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Invalid Phone Format";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(147, 301);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(121, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Invalid Email Format";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(137, 484);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Please fill all inputs";
			this->label7->Visible = false;
			// 
			// Customer_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(454, 540);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->email_input);
			this->Controls->Add(this->emailLabel);
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

			Customer_Struct customer_info;
			ofstream fileCreate;

			bool validated = true;

			String^ s_nameInp = nameInput->Text;
			String^ s_surnameInp = surnameInput->Text;
			String^ phone_inp = phoneInput->Text;
			String^ note_inp = noteInput->Text;
			String^ email_inp = email_input->Text;
			
			char* customerName_1 = and_SysStringToChar(s_nameInp);
			char* customerSurname_1 = and_SysStringToChar(s_surnameInp);
			char* customerPhone_1 = and_SysStringToChar(phone_inp);
			char* customerNotes_1 = and_SysStringToChar(note_inp);
			char* customerEmail_1 = and_SysStringToChar(email_inp);

			strcpy_s(customer_info.customerName, customerName_1);
			strcpy_s(customer_info.customerSurname, customerSurname_1);
			strcpy_s(customer_info.customerPhone, customerPhone_1);
			strcpy_s(customer_info.customerNotes, customerNotes_1);
			strcpy_s(customer_info.customerEmail, customerEmail_1);

			//Check if fields are not empty 
			if (this->nameInput->Text->Length == 0 || this->surnameInput->Text->Length == 0 || this->phoneInput->Text->Length == 0 || this->noteInput->Text->Length == 0 || this->email_input->Text->Length == 0)
			{
				this->label7->Visible = true;
				validated = false;
			} else {
				this->label7->Visible = false;
			//Validate customer name
			for (int i = 0; i < strlen(customerName_1); i++)
			{
				//Check if name contains only letters
				if (isalpha(customerName_1[i])==0)
				{
					this->label3->Visible = true;
					validated = false;
					break;
					
				}
				else { this->label3->Visible = false; }

				if (islower(customerName_1[0])) {
					customerName_1[0] = toupper(customerName_1[0]);
				}
				else {
					customerName_1[i + 1] = tolower(customerName_1[i + 1]);
				}

				//Validate customer surname
				if (isalpha(customerSurname_1[i]) == 0)
				{
					this->label4->Visible = true;
					validated = false;
					break;
				}
				else { this->label4->Visible = false; }


				if (islower(customerSurname_1[0])) {
					customerSurname_1[0] = toupper(customerSurname_1[0]);
				}
				else {
					customerSurname_1[i + 1] = tolower(customerSurname_1[i + 1]);
				}

				//Validate phone number
				if (!isdigit(customerPhone_1[i])) {
					this->label5->Visible = true;
					validated = false;
					break;
				}
				else { this->label5->Visible = false; }

				//Validate email
				regex reg("([\\w_]+)(@)([\\w]+)(\.)([a-z]{2,5})");
				if (!(regex_match(customerEmail_1, reg)))
				{
					this->label6->Visible = true;
					validated = false;
					break;
				}
				else { this->label6->Visible = false; }
			}

			}

			//If no error occured save to file
			if (validated)
			{
				//Save Data
				fileCreate.open("mystring.data", ios::binary | ios::app);

				if (!fileCreate) {
					MessageBox::Show("Couldn't create a file");
				}
				else {

					fileCreate.write((char*)&customer_info, sizeof(Customer_Struct));
					fileCreate.close();
				}

				//Show text when data saved
				this->label2->Visible = true;

				//Empty Fields after clicked save button
				nameInput->Text = "";
				surnameInput->Text = "";
				phoneInput->Text = "";
				noteInput->Text = "";
				email_input->Text = "";
				
			}
						
	}

	//if closing customer form, display main form
	private: System::Void Customer_Form_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		this->Hide();
		//MainWindow^ new_win = gcnew MainWindow();
		//new_win->Show();
		
	}
};
}
