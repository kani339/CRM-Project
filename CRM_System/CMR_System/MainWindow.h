#pragma once

#include "Customer_Form.h"


namespace CMR_System {

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
	private: System::Windows::Forms::Button^  btnSubmit;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::TreeView^  leftMenu;

	protected:

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
			System::Windows::Forms::TreeNode^  treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"1"));
			System::Windows::Forms::TreeNode^  treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"Add Customer", gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode1 }));
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->leftMenu = (gcnew System::Windows::Forms::TreeView());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnSubmit
			// 
			this->btnSubmit->Location = System::Drawing::Point(12, 50);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(100, 23);
			this->btnSubmit->TabIndex = 0;
			this->btnSubmit->Text = L"Add Customer";
			this->btnSubmit->UseVisualStyleBackColor = true;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &MainWindow::btnSubmit_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 1;
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
			this->exitToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->exitToolStripMenuItem1->Text = L"Exit";
			this->exitToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainWindow::exitToolStripMenuItem1_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->exitToolStripMenuItem->Text = L"About";
			// 
			// leftMenu
			// 
			this->leftMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->leftMenu->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->leftMenu->ForeColor = System::Drawing::Color::Transparent;
			this->leftMenu->Indent = 20;
			this->leftMenu->ItemHeight = 60;
			this->leftMenu->LineColor = System::Drawing::Color::White;
			this->leftMenu->Location = System::Drawing::Point(0, 81);
			this->leftMenu->Margin = System::Windows::Forms::Padding(1);
			this->leftMenu->Name = L"leftMenu";
			treeNode1->Name = L"Node0";
			treeNode1->Text = L"1";
			treeNode2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			treeNode2->ForeColor = System::Drawing::Color::Black;
			treeNode2->Name = L"customerList";
			treeNode2->NodeFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			treeNode2->Text = L"Add Customer";
			this->leftMenu->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode2 });
			this->leftMenu->Size = System::Drawing::Size(233, 150);
			this->leftMenu->TabIndex = 3;
			this->leftMenu->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MainWindow::treeView1_AfterSelect);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->leftMenu);
			this->Controls->Add(this->btnSubmit);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainWindow";
			this->Text = L"CRM";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Add Cusotmer
	private: System::Void btnSubmit_Click(System::Object^  sender, System::EventArgs^  e) {
		//Customer_Form^ cust_form = gcnew Customer_Form();
		//cust_form->Show();
	}
	

	/*Menu Tree List*/
	private: System::Void treeView1_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
		Customer_Form^ cust_form = gcnew Customer_Form();
		cust_form->Show();
		this->Hide();
	}

	//Exit Programm
	private: System::Void exitToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
};
}
