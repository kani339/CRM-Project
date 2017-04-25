#pragma once



#include <fstream>


struct Login {
	char username[90];
	char password[90];
};

namespace CMR_System {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for Login_Form
	/// </summary>
	public ref class Login_Form : public System::Windows::Forms::Form
	{
	public:
		Login_Form(void)
		{
			InitializeComponent();
			//Mask password with stars
			

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  loginLabel;
	private: System::Windows::Forms::TextBox^  usernameInp;
	private: System::Windows::Forms::TextBox^  passwordInp;
	protected:


	private: System::Windows::Forms::Button^  loginBtn;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login_Form::typeid));
			this->loginLabel = (gcnew System::Windows::Forms::Label());
			this->usernameInp = (gcnew System::Windows::Forms::TextBox());
			this->passwordInp = (gcnew System::Windows::Forms::TextBox());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// loginLabel
			// 
			this->loginLabel->AutoSize = true;
			this->loginLabel->BackColor = System::Drawing::SystemColors::Highlight;
			this->loginLabel->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->loginLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->loginLabel->Location = System::Drawing::Point(0, 0);
			this->loginLabel->Name = L"loginLabel";
			this->loginLabel->Padding = System::Windows::Forms::Padding(120, 25, 120, 20);
			this->loginLabel->Size = System::Drawing::Size(345, 82);
			this->loginLabel->TabIndex = 0;
			this->loginLabel->Text = L"LOGIN";
			// 
			// usernameInp
			// 
			this->usernameInp->Location = System::Drawing::Point(113, 160);
			this->usernameInp->Name = L"usernameInp";
			this->usernameInp->Size = System::Drawing::Size(110, 20);
			this->usernameInp->TabIndex = 1;
			// 
			// passwordInp
			// 
			this->passwordInp->Location = System::Drawing::Point(108, 248);
			this->passwordInp->Name = L"passwordInp";
			this->passwordInp->PasswordChar = '*';
			this->passwordInp->Size = System::Drawing::Size(115, 20);
			this->passwordInp->TabIndex = 2;
			// 
			// loginBtn
			// 
			this->loginBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->loginBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->loginBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginBtn->ForeColor = System::Drawing::Color::Transparent;
			this->loginBtn->Location = System::Drawing::Point(113, 316);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(91, 32);
			this->loginBtn->TabIndex = 0;
			this->loginBtn->Text = L"Login";
			this->loginBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->loginBtn->UseMnemonic = false;
			this->loginBtn->UseVisualStyleBackColor = false;
			this->loginBtn->Visible = false;
			this->loginBtn->Click += gcnew System::EventHandler(this, &Login_Form::loginBtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(113, 128);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(109, 216);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(73, 285);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(186, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Login or Password is incorrect";
			this->label3->Visible = false;
			// 
			// Login_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(346, 395);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->loginBtn);
			this->Controls->Add(this->passwordInp);
			this->Controls->Add(this->usernameInp);
			this->Controls->Add(this->loginLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Login_Form";
			this->ShowIcon = false;
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		//Convert String to char array
		char * and_SysStringToChar(System::String^ string)
		{
			return (char*)(void*)Marshal::StringToHGlobalAnsi(string);
		}

	//Login 	
	private: System::Void loginBtn_Click(System::Object^  sender, System::EventArgs^  e) {

		ifstream readFile;
		Login login_struct;

		String^ username_input = usernameInp->Text;
		String^ password_input = passwordInp->Text;

		char* username = and_SysStringToChar(username_input);
		char* password = and_SysStringToChar(password_input);

		readFile.open("login.txt", ios::app);
		if (!readFile) {
			MessageBox::Show("Cannot open file!");
		}
		else {
			readFile.seekg(0, ios::end);
			int size = readFile.tellg();
			int userCount = size / sizeof(Login);

			readFile.seekg(0, ios::beg);
			Login *login_struct = new Login[userCount];
			readFile.read((char*)login_struct, userCount * sizeof(Login));

			//Check if user and password is valid
			for (int i = 0; i < userCount; i++) {
				if (login_struct[i].username == username && login_struct[i].password == password) {
					
				}
				else {
					this->label3->Visible = true;
				}
			}


		}



	}
};
}
