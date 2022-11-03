#pragma once

namespace AdminForm0 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for readbooks
	/// </summary>
	public ref class readbooks : public System::Windows::Forms::Form
	{
	public:
		readbooks(void)
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
		~readbooks()
		{
			if (components)
			{
				delete components;
			}
		}
	private: AxAcroPDFLib::AxAcroPDF^  axAcroPDF1;
	protected: 
	private: System::Windows::Forms::Button^  button1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(readbooks::typeid));
			this->axAcroPDF1 = (gcnew AxAcroPDFLib::AxAcroPDF());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axAcroPDF1))->BeginInit();
			this->SuspendLayout();
			// 
			// axAcroPDF1
			// 
			this->axAcroPDF1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->axAcroPDF1->Enabled = true;
			this->axAcroPDF1->Location = System::Drawing::Point(12, 37);
			this->axAcroPDF1->Name = L"axAcroPDF1";
			this->axAcroPDF1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^  >(resources->GetObject(L"axAcroPDF1.OcxState")));
			this->axAcroPDF1->Size = System::Drawing::Size(456, 274);
			this->axAcroPDF1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 8);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Open Book";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &readbooks::button1_Click);
			// 
			// readbooks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ClientSize = System::Drawing::Size(480, 323);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->axAcroPDF1);
			this->Name = L"readbooks";
			this->Text = L"readbooks";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axAcroPDF1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
				 openFileDialog1->ShowDialog();
				 axAcroPDF1->src=openFileDialog1->FileName;
			 }
	};
}
