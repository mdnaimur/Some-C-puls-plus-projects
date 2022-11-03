#pragma once
#include "TeacherSignUp.h"
#include "StudentSignUp.h"
#include "Email.h"
namespace AdminForm0 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for AdminWindow
	/// </summary>
	public ref class AdminWindow : public System::Windows::Forms::Form
	{
	public:
		AdminWindow(void)
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
		~AdminWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TextBox^  sDelete_txt;
	private: System::Windows::Forms::TextBox^  tDelete_txt;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button5;

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminWindow::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->sDelete_txt = (gcnew System::Windows::Forms::TextBox());
			this->tDelete_txt = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(8, 31);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add Teacher";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminWindow::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(8, 60);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Add student";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminWindow::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(9, 89);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Show Teacher info";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdminWindow::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(8, 118);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(114, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Show student info";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AdminWindow::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Location = System::Drawing::Point(129, 31);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->Size = System::Drawing::Size(890, 249);
			this->dataGridView1->TabIndex = 16;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(8, 147);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(114, 23);
			this->button6->TabIndex = 17;
			this->button6->Text = L"Delete Student";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &AdminWindow::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(8, 202);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(114, 23);
			this->button7->TabIndex = 18;
			this->button7->Text = L"Delete Teacher";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &AdminWindow::button7_Click);
			// 
			// sDelete_txt
			// 
			this->sDelete_txt->Location = System::Drawing::Point(8, 176);
			this->sDelete_txt->Name = L"sDelete_txt";
			this->sDelete_txt->Size = System::Drawing::Size(113, 20);
			this->sDelete_txt->TabIndex = 19;
			this->sDelete_txt->Text = L"Enter id to delete";
			// 
			// tDelete_txt
			// 
			this->tDelete_txt->Location = System::Drawing::Point(8, 231);
			this->tDelete_txt->Name = L"tDelete_txt";
			this->tDelete_txt->Size = System::Drawing::Size(114, 20);
			this->tDelete_txt->TabIndex = 20;
			this->tDelete_txt->Text = L"Enter id to delete";
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->Location = System::Drawing::Point(8, 286);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(28, 23);
			this->button8->TabIndex = 21;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &AdminWindow::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(9, 257);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(113, 23);
			this->button9->TabIndex = 22;
			this->button9->Text = L"Send Email";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &AdminWindow::button9_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(881, 257);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(30, 23);
			this->button5->TabIndex = 15;
			this->button5->Text = L"LO";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &AdminWindow::button5_Click);
			// 
			// AdminWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1362, 741);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->tDelete_txt);
			this->Controls->Add(this->sDelete_txt);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"AdminWindow";
			this->Text = L"AdminWindow";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 TeacherSignUp^ TSU = gcnew TeacherSignUp();
				 TSU->ShowDialog();
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 StudentSignUp^ SSU = gcnew StudentSignUp();
				 SSU->ShowDialog();
			 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring = L"datasource=localhost;port=3306;username=root;password=Fat 0126";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from AdminLog.teacherdata ;",conDataBase);
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
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

			 String^ constring = L"datasource=localhost;port=3306;username=root;password=Fat 0126";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from AdminLog.studentdata ;",conDataBase);
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
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

			String^ constring = L"datasource=localhost;port=3306;username=root;password=Fat 0126";// this will connect to database
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);// these 2 will pass the querry
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" delete from Adminlog.studentdata where idstudent='"+this->sDelete_txt->Text+"';",conDataBase);// semi colomn is used to close querry
				 MySqlDataReader^ myReader;
				 try {
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 MessageBox::Show("Deleted");
				 while(myReader->Read()){
					
				 
				 }
				 

				 }catch(Exception^ex){
				 
				 MessageBox::Show(ex->Message);
				 }

				 {

					  String^ constring = L"datasource=localhost;port=3306;username=root;password=Fat 0126";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from AdminLog.studentdata ;",conDataBase);
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
				 ////////////////////////
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

			String^ constring = L"datasource=localhost;port=3306;username=root;password=Fat 0126";// this will connect to database
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);// these 2 will pass the querry
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" delete from Adminlog.teacherdata where idteacher='"+this->tDelete_txt->Text+"';",conDataBase);// semi colomn is used to close querry
				 MySqlDataReader^ myReader;
				 try {
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 MessageBox::Show("Deleted");
				 while(myReader->Read()){
					
				 
				 }
				 

				 }catch(Exception^ex){
				 
				 MessageBox::Show(ex->Message);
				 }


		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 Email^ eml = gcnew Email();
			 eml->ShowDialog();




		 }
};
}
