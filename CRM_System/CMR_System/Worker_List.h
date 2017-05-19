#pragma once

//#include <fstream>
#include "Coworkers.h"
#include "Headers.h"


namespace CMR_System {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Worker_List
	/// </summary>
	public ref class Worker_List : public System::Windows::Forms::Form
	{

	public: String^ worker_salary = "";
	public:
		Worker_List(void)
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
		~Worker_List()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Worker_List::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(15, 101);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(557, 349);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Name";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Salary";
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
			this->Column5->HeaderText = L"Position";
			this->Column5->Name = L"Column5";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(229, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"List of Workers";
			// 
			// Worker_List
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(584, 486);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Worker_List";
			this->Text = L"Worker_List";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Worker_List::Worker_List_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Worker_List::Worker_List_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//on worker_list load 
	private: System::Void Worker_List_Load(System::Object^  sender, System::EventArgs^  e) {

			int workerCount;
			CoWorker *co_worker = workerOutput(&workerCount);
			CoWorker sortWorker;

			for (int i = 0; i < workerCount; i++)
			{
				for (int j = workerCount - 1; j >0; j--)
				{
					if (strcmp(co_worker[j].co_name, co_worker[j - 1].co_name)< 0)
					{
						sortWorker = co_worker[j - 1];
						co_worker[j - 1] = co_worker[j];
						co_worker[j] = sortWorker;
					}
				}
				
				String^ worker_name = gcnew String(reinterpret_cast<const char*>(co_worker[i].co_name));
				worker_salary = co_worker[i].co_salary.ToString();
				String^ worker_phone = gcnew String(reinterpret_cast<const char*>(co_worker[i].co_phone));
				String^ worker_email = gcnew String(reinterpret_cast<const char*>(co_worker[i].co_email));
				String^ worker_position = gcnew String(reinterpret_cast<const char*>(co_worker[i].co_position));
				dataGridView1->Rows->Add(worker_name, "$ "+ worker_salary, worker_phone, worker_email, worker_position);
			
		}
	}

	
	//Window close
	private: System::Void Worker_List_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		this->Hide();
		this->Owner->Show();
	}
};
}
