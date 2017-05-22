#pragma once


#include "Customer_Form.h"
#include "Headers.h"


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
	/// Summary for Customer_List
	/// </summary>
	public ref class Customer_List : public System::Windows::Forms::Form
	{
	public:
		Customer_List(void)
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
		~Customer_List()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::DataGridView^  dataGridView1;


	private: System::Windows::Forms::Button^  deleteBtn;

	private: System::Windows::Forms::Label^  label2;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::TextBox^  deleteInp;
	private: System::Windows::Forms::Button^  delete_1;
	private: System::Windows::Forms::Button^  delete_2;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Customer_List::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->deleteInp = (gcnew System::Windows::Forms::TextBox());
			this->delete_1 = (gcnew System::Windows::Forms::Button());
			this->delete_2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(248, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"List Of Customers";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column7,
					this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(4, 104);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(688, 381);
			this->dataGridView1->TabIndex = 3;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"ID";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 45;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Name";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Surname";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Phone";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Email";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Notes";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Working with";
			this->Column6->Name = L"Column6";
			// 
			// deleteBtn
			// 
			this->deleteBtn->Location = System::Drawing::Point(38, 513);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(100, 33);
			this->deleteBtn->TabIndex = 4;
			this->deleteBtn->Text = L"Delete By Name";
			this->deleteBtn->UseVisualStyleBackColor = true;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &Customer_List::deleteBtn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(35, 573);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Enter Name:";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Blue;
			this->label3->Location = System::Drawing::Point(34, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 20);
			this->label3->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(172, 513);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 33);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Delete By ID";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Customer_List::button1_Click);
			// 
			// deleteInp
			// 
			this->deleteInp->Location = System::Drawing::Point(148, 574);
			this->deleteInp->Name = L"deleteInp";
			this->deleteInp->Size = System::Drawing::Size(100, 20);
			this->deleteInp->TabIndex = 5;
			this->deleteInp->Visible = false;
			// 
			// delete_1
			// 
			this->delete_1->Location = System::Drawing::Point(255, 573);
			this->delete_1->Name = L"delete_1";
			this->delete_1->Size = System::Drawing::Size(75, 23);
			this->delete_1->TabIndex = 10;
			this->delete_1->Text = L"Delete";
			this->delete_1->UseVisualStyleBackColor = true;
			this->delete_1->Visible = false;
			this->delete_1->Click += gcnew System::EventHandler(this, &Customer_List::delete_1_Click);
			// 
			// delete_2
			// 
			this->delete_2->Location = System::Drawing::Point(345, 574);
			this->delete_2->Name = L"delete_2";
			this->delete_2->Size = System::Drawing::Size(75, 23);
			this->delete_2->TabIndex = 11;
			this->delete_2->Text = L"Delete";
			this->delete_2->UseVisualStyleBackColor = true;
			this->delete_2->Visible = false;
			this->delete_2->Click += gcnew System::EventHandler(this, &Customer_List::delete_2_Click);
			// 
			// Customer_List
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(694, 632);
			this->Controls->Add(this->delete_2);
			this->Controls->Add(this->delete_1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->deleteInp);
			this->Controls->Add(this->deleteBtn);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Customer_List";
			this->Text = L"Customer List";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Customer_List::Customer_List_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Customer_List::Customer_List_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//Convert String to char array
		char * and_SysStringToChar(System::String^ string)
		{
			return (char*)(void*)Marshal::StringToHGlobalAnsi(string);
		}


#pragma endregion
		
void sort()
{
			int customerCount;
			
			Customer_Struct *customer_struct = fileOutput(&customerCount);
			Customer_Struct sortCustomer;

			for (int i = 0; i < customerCount; i++)
			{
				//Sort by alphabet
				for (int j = customerCount - 1; j > 0; j--)
				{
					if (strcmp(customer_struct[j].customerName, customer_struct[j - 1].customerName)<0)
					{
						sortCustomer = customer_struct[j - 1];
						customer_struct[j - 1] = customer_struct[j];
						customer_struct[j] = sortCustomer;
					}
				}

				//Char to String^
				String^ output_c_1 = customer_struct[i].customerId.ToString();
				String^ output_c_2 = gcnew String(reinterpret_cast<const char*>(customer_struct[i].customerName));
				String^ output_c_3 = gcnew String(reinterpret_cast<const char*>(customer_struct[i].customerSurname));
				String^ output_c_4 = gcnew String(reinterpret_cast<const char*>(customer_struct[i].customerPhone));
				String^ output_c_5 = gcnew String(reinterpret_cast<const char*>(customer_struct[i].customerEmail));
				String^ output_c_6 = gcnew String(reinterpret_cast<const char*>(customer_struct[i].customerNotes));
				String^ output_c_7 = gcnew String(reinterpret_cast<const char*>(customer_struct[i].workingWith));
				dataGridView1->Rows->Add(output_c_1, output_c_2, output_c_3, output_c_4, output_c_5, output_c_6, output_c_7);
				dataGridView1->AllowUserToAddRows = false;
				
		}	

		//display total amount of customer
		String^ totalCustomers = customerCount.ToString();
		this->label3->Text = L"Total Customers: "+ totalCustomers;
}


	//On form load, appear content from file
	private: System::Void Customer_List_Load(System::Object^  sender, System::EventArgs^  e) {
		
			int customerCount;
			Customer_Struct *customer_struct = fileOutput(&customerCount);
			sort();
	}


			
	//Delete by name btn
	private: System::Void deleteBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		this->deleteInp->Text = "";
		//delete button
		this->delete_1->Location = System::Drawing::Point(275, 570);
		this->delete_1->Visible = true;
		this->delete_2->Visible = false;
		//delete input
		this->deleteInp->Location = System::Drawing::Point(170, 572);
		this->label2->Text = L"Delete By Name: ";
		this->label2->Visible = true;
		this->deleteInp->Visible = true;
	}

	
	//Delete by id btn
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		//delete button
		this->delete_2->Location = System::Drawing::Point(260, 570);
		this->delete_2->Visible = true;
		this->delete_1->Visible = false;
		//delete input
		this->deleteInp->Location = System::Drawing::Point(150, 572);
		this->label2->Text = L"Delete By ID: ";
		this->label2->Visible = true;
		this->deleteInp->Visible = true;
		this->deleteInp->Text = "";

	}
	
	//Delete by name
	private: System::Void delete_1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		String^ delInp = deleteInp->Text;
		char del_inp[90];
		char* inp = and_SysStringToChar(delInp);
		strcpy_s(del_inp, inp);

		int customerCount;
		Customer_Struct *customer_struct = fileOutput(&customerCount);

		ofstream file;
		file.open("mystring.data", ios::binary | ios::out);
		if (!file)
		{
			MessageBox::Show("Couldn't open file!");
		}
		else {
			for (int i = 0; i < customerCount; i++) {
				if (strcmp(del_inp, customer_struct[i].customerName) != 0)
				{
					file.write((char*)&customer_struct[i], sizeof(Customer_Struct));
				}
			}
			file.close();
		}
		dataGridView1->Rows->Clear();
		sort();

	}

	//Delete by id
	private: System::Void delete_2_Click(System::Object^  sender, System::EventArgs^  e) {
		
		String^ delInp = deleteInp->Text;
		int delId = Int32::Parse(delInp);

		/*
		if (!int::TryParse(deleteInp->Text,delId))
		{
		MessageBox::Show("Input must be Integer");
		return;
		}
		else {
		delId = Int32::Parse(delInp);
		}
		*/

		int customerCount;
		Customer_Struct *customer_struct = fileOutput(&customerCount);

		ofstream file;
		file.open("mystring.data", ios::binary | ios::out);
		if (!file)
		{
			MessageBox::Show("Couldn't open file!");
		}
		else {
			for (int i = 0; i < customerCount; i++) {
				if (customer_struct[i].customerId != delId)
				{
					file.write((char*)&customer_struct[i], sizeof(Customer_Struct));
				}
			}
			file.close();
		}
		dataGridView1->Rows->Clear();
		sort();
	
	}



	//Closing window
	private: System::Void Customer_List_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		this->Hide();
		this->Owner->Show();
	}


};
}
