#pragma once

#include <fstream>
#include "Customer_Form.h"




namespace CMR_System {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^  list_body;
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
			this->list_body = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// list_body
			// 
			
			this->list_body->BackColor = System::Drawing::Color::White;
			this->list_body->Location = System::Drawing::Point(29, 9);
			this->list_body->Name = L"list_body";
			this->list_body->Size = System::Drawing::Size(631, 613);
			this->list_body->TabIndex = 0;
			
			
			// 
			// Customer_List
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 762);
			this->Controls->Add(this->list_body);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Customer_List";
			this->Text = L"Customer List";
			this->Load += gcnew System::EventHandler(this, &Customer_List::Customer_List_Load);
			this->ResumeLayout(false);

		}




#pragma endregion
		
	
	//On form load, appear content from file
	private: System::Void Customer_List_Load(System::Object^  sender, System::EventArgs^  e) {
		
		
		ifstream readFile;
		readFile.open("mystring.data", ios::binary);
		if (!readFile) {
			MessageBox::Show("Couldn't open file!");
			
		}
		else {
			

			readFile.seekg(0, ios::end);
			int size = readFile.tellg();
			int count = size / sizeof(Customer_Struct);
			readFile.seekg(0, ios::beg);
			Customer_Struct *customer_struct = new Customer_Struct[count];
			readFile.read((char*)customer_struct, count * sizeof(Customer_Struct));
			

			for (int i = 0; i < count; i++)
			{
				
				//Char to String^
				
				//char getName[25] = "Name";
				//customer_struct.customerName[i]
				//String^ msg = gcnew String(reinterpret_cast<const char*>(getName));
				//this->list_body->Text = msg;
				


			}
			
			readFile.close();
		}
		
	}


	};
}
