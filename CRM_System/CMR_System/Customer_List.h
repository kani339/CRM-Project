#pragma once

#include <fstream>

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
			this->list_body->AutoSize = true;
			this->list_body->BackColor = System::Drawing::Color::White;
			this->list_body->Location = System::Drawing::Point(29, 9);
			this->list_body->Name = L"list_body";
			this->list_body->Padding = System::Windows::Forms::Padding(150, 300, 450, 300);
			this->list_body->Size = System::Drawing::Size(631, 613);
			this->list_body->TabIndex = 0;
			this->list_body->Text = L"Hello";
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
			this->PerformLayout();

		}


		





#pragma endregion
		
	
	//On form load, appear content from file
	private: System::Void Customer_List_Load(System::Object^  sender, System::EventArgs^  e) {
		
		ifstream readFile;
		readFile.open("mystring.data");
		if (!readFile) {
			MessageBox::Show("Couldn't open file!");
			
		}

	}


	};
}
