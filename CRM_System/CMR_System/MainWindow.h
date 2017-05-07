#pragma once
//#include "Headers.h"

#include "Customer_Form.h"
#include "Customer_List.h"
#include "Coworkers.h"

#include <ctime>
#include <iomanip>
#include <chrono> 


namespace CMR_System {

	using chrono::system_clock;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
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
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::Button^  addCustomer_btn;
	private: System::Windows::Forms::Button^  customerList_btn;
	private: System::Windows::Forms::Label^  infoBlock;
	private: System::Windows::Forms::Label^  wlcMsg;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;





	private: System::ComponentModel::IContainer^  components;


	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->addCustomer_btn = (gcnew System::Windows::Forms::Button());
			this->customerList_btn = (gcnew System::Windows::Forms::Button());
			this->infoBlock = (gcnew System::Windows::Forms::Label());
			this->wlcMsg = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// addCustomer_btn
			// 
			this->addCustomer_btn->AllowDrop = true;
			this->addCustomer_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->addCustomer_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addCustomer_btn->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addCustomer_btn->ForeColor = System::Drawing::Color::White;
			this->addCustomer_btn->Location = System::Drawing::Point(291, 45);
			this->addCustomer_btn->Name = L"addCustomer_btn";
			this->addCustomer_btn->Size = System::Drawing::Size(122, 29);
			this->addCustomer_btn->TabIndex = 6;
			this->addCustomer_btn->Text = L"Add Customer";
			this->addCustomer_btn->UseVisualStyleBackColor = false;
			this->addCustomer_btn->Click += gcnew System::EventHandler(this, &MainWindow::addCustomer_btn_Click);
			// 
			// customerList_btn
			// 
			this->customerList_btn->AllowDrop = true;
			this->customerList_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->customerList_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->customerList_btn->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->customerList_btn->ForeColor = System::Drawing::Color::White;
			this->customerList_btn->Location = System::Drawing::Point(419, 45);
			this->customerList_btn->Name = L"customerList_btn";
			this->customerList_btn->Size = System::Drawing::Size(122, 29);
			this->customerList_btn->TabIndex = 6;
			this->customerList_btn->Text = L"Customer List";
			this->customerList_btn->UseVisualStyleBackColor = false;
			this->customerList_btn->Click += gcnew System::EventHandler(this, &MainWindow::customerList_btn_Click);
			// 
			// infoBlock
			// 
			this->infoBlock->AutoSize = true;
			this->infoBlock->BackColor = System::Drawing::Color::White;
			this->infoBlock->Location = System::Drawing::Point(160, 121);
			this->infoBlock->Name = L"infoBlock";
			this->infoBlock->Padding = System::Windows::Forms::Padding(390, 120, 185, 255);
			this->infoBlock->Size = System::Drawing::Size(575, 388);
			this->infoBlock->TabIndex = 8;
			// 
			// wlcMsg
			// 
			this->wlcMsg->AutoSize = true;
			this->wlcMsg->BackColor = System::Drawing::Color::White;
			this->wlcMsg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->wlcMsg->Location = System::Drawing::Point(170, 147);
			this->wlcMsg->Name = L"wlcMsg";
			this->wlcMsg->Size = System::Drawing::Size(565, 48);
			this->wlcMsg->TabIndex = 9;
			this->wlcMsg->Text = L"Welcome To CRM System.\r\nAll in one place to maintain relationship with your custo"
				L"mer.\r\n";
			this->wlcMsg->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(134, 266);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 10;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
			this->menuStrip1->TabIndex = 11;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem1 });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// exitToolStripMenuItem1
			// 
			this->exitToolStripMenuItem1->Name = L"exitToolStripMenuItem1";
			this->exitToolStripMenuItem1->Size = System::Drawing::Size(92, 22);
			this->exitToolStripMenuItem1->Text = L"Exit";
			this->exitToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainWindow::exitToolStripMenuItem1_Click_1);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->exitToolStripMenuItem->Text = L"About";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::exitToolStripMenuItem_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 38);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(122, 60);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(654, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 16);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Welcome, ";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->AllowDrop = true;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(163, 45);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 29);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Add Co-worker";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(784, 562);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->wlcMsg);
			this->Controls->Add(this->infoBlock);
			this->Controls->Add(this->customerList_btn);
			this->Controls->Add(this->addCustomer_btn);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainWindow";
			this->Text = L"CRM - Content Relationship Managment";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	//Add Customer Form
	private: System::Void addCustomer_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		Customer_Form^ cust_form = gcnew Customer_Form();
		cust_form->Show();
		this->Hide();
	}


	//Customer List Form
	private: System::Void customerList_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		Customer_List^ cust_list = gcnew Customer_List();
		cust_list->Show();
		this->Hide();
	}


	//Exit Programm
	private: System::Void exitToolStripMenuItem1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

	//About section
	private: System::Void exitToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Customer relationship management (CRM) is an approach to managing a company's interaction with current and potential future customers. It tries to analyze data about customers' history with a company and to improve business relationships with customers, specifically focusing on customer retention and ultimately driving sales growth.One important aspect of the CRM approach is the systems of CRM that compile data from a range of different communication channels, including a company's website, telephone, email, live chat, marketing materials, and more recently, social media.[2] Through the CRM approach and the systems used to facilitate it, businesses learn more about their target audiences and how to best cater to their needs. However, adopting the CRM approach may also occasionally lead to favoritism within an audience of consumers, resulting in dissatisfaction among customers and defeating the purpose of CRM.","About");
		//MessageBoxIcon::Question;

	}
	
	


	//Co-worker button	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Coworkers^ coworker = gcnew Coworkers();
		coworker->Show();
		this->Hide();
	}


};
}
