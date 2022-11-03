#pragma once
#include "stdafx.h"
#include "Email.h"
#include "marksform.h"
#include "updateAttendance.h"
namespace AdminForm0 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for teacherWindow
	/// </summary>
	public ref class teacherWindow : public System::Windows::Forms::Form
	{
	public:
		teacherWindow(void)
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
		~teacherWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::ProgressBar^  progressBar2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button6;

	private: System::ComponentModel::IContainer^  components;

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(teacherWindow::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Ravie", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Underline | System::Drawing::FontStyle::Strikeout)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(-1, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1315, 42);
			this->label1->TabIndex = 5;
			this->label1->Text = L"WELCOME TO TEACHER PORTAL";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gainsboro;
			this->button2->Location = System::Drawing::Point(12, 105);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Update Marks";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &teacherWindow::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 134);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Send Mails";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &teacherWindow::button3_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(-1, 50);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(1315, 10);
			this->progressBar1->Step = 20;
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 10;
			this->progressBar1->Click += gcnew System::EventHandler(this, &teacherWindow::progressBar1_Click);
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(-1, 0);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->progressBar2->RightToLeftLayout = true;
			this->progressBar2->Size = System::Drawing::Size(1315, 10);
			this->progressBar2->Step = 20;
			this->progressBar2->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar2->TabIndex = 11;
			this->progressBar2->Click += gcnew System::EventHandler(this, &teacherWindow::progressBar2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(137, 76);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(700, 110);
			this->dataGridView1->TabIndex = 12;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &teacherWindow::timer1_Tick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 76);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Update Attendance";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &teacherWindow::button1_Click_1);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Location = System::Drawing::Point(12, 220);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(30, 23);
			this->button5->TabIndex = 14;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &teacherWindow::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 192);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(118, 23);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Show Marks";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &teacherWindow::button4_Click_1);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 163);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(118, 23);
			this->button6->TabIndex = 16;
			this->button6->Text = L"Show Attendance";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &teacherWindow::button6_Click);
			// 
			// teacherWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1354, 733);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Name = L"teacherWindow";
			this->Text = L"teacherWindow";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {




		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }


private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 this->timer1->Start();
				 updateAttendance^ UA = gcnew updateAttendance();
				 UA->ShowDialog();
				 
		 }
private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void progressBar2_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->progressBar1->Increment(8);
			 this->progressBar2->Increment(8);
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Email^E = gcnew Email();
			 E->ShowDialog();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Hide();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 marksform^MF = gcnew marksform();
			 MF->ShowDialog();
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

			 String^ constring = L"datasource=localhost;port=3306;username=root;password=Fat 0126";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from AdminLog.attendance ;",conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
					 sda->SelectCommand = cmdDataBase;
					 DataTable^ bdataset = gcnew DataTable();
					 sda->Fill(bdataset);
					 BindingSource^ bSource = gcnew BindingSource();

					 bSource->DataSource = bdataset;
					 dataGridView1->DataSource = bSource;
					 sda->Update(bdataset);

				 
				 
				 }catch(Exception^ex){
					 MessageBox::Show(ex->Message);
				 
				 
				 }




		 }
private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring = L"datasource=localhost;port=3306;username=root;password=Fat 0126";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from AdminLog.marks1 ;",conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
					 sda->SelectCommand = cmdDataBase;
					 DataTable^ bdataset = gcnew DataTable();
					 sda->Fill(bdataset);
					 BindingSource^ bSource = gcnew BindingSource();

					 bSource->DataSource = bdataset;
					 dataGridView1->DataSource = bSource;
					 sda->Update(bdataset);

				 
				 
				 }catch(Exception^ex){
					 MessageBox::Show(ex->Message);
				 
				 
				 }

		 }
};
}
