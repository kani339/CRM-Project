#pragma once


#include <fstream>
#include "Headers.h"


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
	/// Summary for Coworkers
	/// </summary>
	public ref class Coworkers : public System::Windows::Forms::Form
	{
	public:
		Coworkers(void)
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
		~Coworkers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  workerName;
	private: System::Windows::Forms::TextBox^  workerSalary;

	private: System::Windows::Forms::TextBox^  workerPhone;
	private: System::Windows::Forms::TextBox^  workerEmail;
	protected:




	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  saveCoworkerBtn;
	private: System::Windows::Forms::TextBox^  positionBox;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Coworkers::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->workerName = (gcnew System::Windows::Forms::TextBox());
			this->workerSalary = (gcnew System::Windows::Forms::TextBox());
			this->workerPhone = (gcnew System::Windows::Forms::TextBox());
			this->workerEmail = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->saveCoworkerBtn = (gcnew System::Windows::Forms::Button());
			this->positionBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(135, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add New Co-worker";
			// 
			// workerName
			// 
			this->workerName->Location = System::Drawing::Point(213, 98);
			this->workerName->MaxLength = 50;
			this->workerName->Name = L"workerName";
			this->workerName->Size = System::Drawing::Size(99, 20);
			this->workerName->TabIndex = 1;
			// 
			// workerSalary
			// 
			this->workerSalary->Location = System::Drawing::Point(212, 172);
			this->workerSalary->MaxLength = 50;
			this->workerSalary->Name = L"workerSalary";
			this->workerSalary->Size = System::Drawing::Size(100, 20);
			this->workerSalary->TabIndex = 2;
			// 
			// workerPhone
			// 
			this->workerPhone->Location = System::Drawing::Point(213, 234);
			this->workerPhone->MaxLength = 50;
			this->workerPhone->Name = L"workerPhone";
			this->workerPhone->Size = System::Drawing::Size(100, 20);
			this->workerPhone->TabIndex = 3;
			// 
			// workerEmail
			// 
			this->workerEmail->Location = System::Drawing::Point(212, 302);
			this->workerEmail->MaxLength = 50;
			this->workerEmail->Name = L"workerEmail";
			this->workerEmail->Size = System::Drawing::Size(100, 20);
			this->workerEmail->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Blue;
			this->label2->Location = System::Drawing::Point(136, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Blue;
			this->label3->Location = System::Drawing::Point(134, 172);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Salary";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Blue;
			this->label4->Location = System::Drawing::Point(136, 238);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Phone";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Blue;
			this->label5->Location = System::Drawing::Point(137, 302);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Email";
			// 
			// saveCoworkerBtn
			// 
			this->saveCoworkerBtn->BackColor = System::Drawing::Color::Blue;
			this->saveCoworkerBtn->ForeColor = System::Drawing::Color::Transparent;
			this->saveCoworkerBtn->Location = System::Drawing::Point(213, 424);
			this->saveCoworkerBtn->Name = L"saveCoworkerBtn";
			this->saveCoworkerBtn->Size = System::Drawing::Size(79, 26);
			this->saveCoworkerBtn->TabIndex = 9;
			this->saveCoworkerBtn->Text = L"Save";
			this->saveCoworkerBtn->UseVisualStyleBackColor = false;
			this->saveCoworkerBtn->Click += gcnew System::EventHandler(this, &Coworkers::saveCoworkerBtn_Click);
			// 
			// positionBox
			// 
			this->positionBox->Location = System::Drawing::Point(212, 363);
			this->positionBox->Name = L"positionBox";
			this->positionBox->Size = System::Drawing::Size(100, 20);
			this->positionBox->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Blue;
			this->label6->Location = System::Drawing::Point(124, 367);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Position";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::Green;
			this->label7->Location = System::Drawing::Point(178, 471);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(155, 20);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Succesfully Saved";
			this->label7->Visible = false;
			// 
			// Coworkers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(475, 513);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->positionBox);
			this->Controls->Add(this->saveCoworkerBtn);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->workerEmail);
			this->Controls->Add(this->workerPhone);
			this->Controls->Add(this->workerSalary);
			this->Controls->Add(this->workerName);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Coworkers";
			this->Text = L"Add Coworkers";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Coworkers::Coworkers_FormClosing_1);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//Convert String to char array
	char * and_SysStringToChar(System::String^ string)
	{
		return (char*)(void*)Marshal::StringToHGlobalAnsi(string);
	}

	//Save coworkers
	private: System::Void saveCoworkerBtn_Click(System::Object^  sender, System::EventArgs^  e) {

		CoWorker co_worker;
		ofstream fileCreate;
		
		String^ worker_name = workerName->Text;
		String^ worker_salary = workerSalary->Text;
		String^ worker_phone = workerPhone->Text;
		String^ worker_email = workerEmail->Text;
		String^ worker_position = positionBox->Text;

		char* worker_name_1 = and_SysStringToChar(worker_name);
		float worker_salary_1 = (double)(Convert::ToDouble(worker_salary));
		char* worker_phone_1 = and_SysStringToChar(worker_phone);
		char* worker_email_1 = and_SysStringToChar(worker_email);
		char* worker_position_1 = and_SysStringToChar(worker_position);

		strcpy_s(co_worker.co_name, worker_name_1);
		co_worker.co_salary = worker_salary_1;
		strcpy_s(co_worker.co_phone, worker_phone_1);
		strcpy_s(co_worker.co_email, worker_email_1);
		strcpy_s(co_worker.co_position, worker_position_1);

		fileCreate.open("coworker.data", ios::binary | ios::app);

		if (!fileCreate) {
			MessageBox::Show("Couldn't create a file");
		}
		else {

			fileCreate.write((char*)&co_worker, sizeof(CoWorker));
			fileCreate.close();
			this->label7->Visible = true;
		}

		workerName->Text = "";
		workerSalary->Text = "";
		workerPhone->Text = "";
		workerEmail->Text = "";
		positionBox->Text = "";
	
	}

	//if closing window
	private: System::Void Coworkers_FormClosing_1(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		this->Hide();
		this->Owner->Show();
		
	}
	
};
}
