#pragma once

namespace AdminForm0 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for updateAttendance
	/// </summary>
	public ref class updateAttendance : public System::Windows::Forms::Form
	{
	public:
		updateAttendance(void)
		{
			InitializeComponent();
			FillComboBox();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~updateAttendance()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Button^  button1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(255, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 61;
			this->label1->Text = L"Day 1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(324, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 62;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(324, 47);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 64;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(255, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 63;
			this->label2->Text = L"Day 2";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(324, 73);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 66;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(255, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 65;
			this->label3->Text = L"Day 3";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(324, 99);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 68;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(255, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 67;
			this->label4->Text = L"Day 4";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(324, 125);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 70;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(255, 125);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 69;
			this->label5->Text = L"Day 5";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(324, 151);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 72;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(255, 151);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 71;
			this->label6->Text = L"Day 6";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(324, 177);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 74;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(255, 177);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 73;
			this->label7->Text = L"Day 7";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(324, 203);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 76;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(255, 203);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 75;
			this->label8->Text = L"Day 8";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(324, 229);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 78;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(255, 229);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 77;
			this->label9->Text = L"Day 9";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(324, 255);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 80;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(255, 255);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 79;
			this->label10->Text = L"Day 10";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(573, 255);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 100;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(504, 255);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 13);
			this->label11->TabIndex = 99;
			this->label11->Text = L"Day 20";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(573, 229);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 98;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(504, 229);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 13);
			this->label12->TabIndex = 97;
			this->label12->Text = L"Day 19";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(573, 203);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 96;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(504, 203);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 95;
			this->label13->Text = L"Day 18";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(573, 177);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 20);
			this->textBox14->TabIndex = 94;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(504, 177);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 13);
			this->label14->TabIndex = 93;
			this->label14->Text = L"Day 17";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(573, 151);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 20);
			this->textBox15->TabIndex = 92;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(504, 151);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 13);
			this->label15->TabIndex = 91;
			this->label15->Text = L"Day 16";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(573, 125);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 20);
			this->textBox16->TabIndex = 90;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(504, 125);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(41, 13);
			this->label16->TabIndex = 89;
			this->label16->Text = L"Day 15";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(573, 99);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 20);
			this->textBox17->TabIndex = 88;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(504, 99);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(41, 13);
			this->label17->TabIndex = 87;
			this->label17->Text = L"Day 14";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(573, 73);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 20);
			this->textBox18->TabIndex = 86;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(504, 73);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(41, 13);
			this->label18->TabIndex = 85;
			this->label18->Text = L"Day 13";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(573, 47);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(100, 20);
			this->textBox19->TabIndex = 84;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(504, 47);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(41, 13);
			this->label19->TabIndex = 83;
			this->label19->Text = L"Day 12";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(573, 21);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 20);
			this->textBox20->TabIndex = 82;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(504, 21);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(41, 13);
			this->label20->TabIndex = 81;
			this->label20->Text = L"Day 11";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(805, 255);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(100, 20);
			this->textBox21->TabIndex = 120;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(736, 255);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(41, 13);
			this->label21->TabIndex = 119;
			this->label21->Text = L"Day 30";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(805, 229);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(100, 20);
			this->textBox22->TabIndex = 118;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(736, 229);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(41, 13);
			this->label22->TabIndex = 117;
			this->label22->Text = L"Day 29";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(805, 203);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(100, 20);
			this->textBox23->TabIndex = 116;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(736, 203);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(41, 13);
			this->label23->TabIndex = 115;
			this->label23->Text = L"Day 28";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(805, 177);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(100, 20);
			this->textBox24->TabIndex = 114;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(736, 177);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(41, 13);
			this->label24->TabIndex = 113;
			this->label24->Text = L"Day 27";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(805, 151);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(100, 20);
			this->textBox25->TabIndex = 112;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(736, 151);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(41, 13);
			this->label25->TabIndex = 111;
			this->label25->Text = L"Day 26";
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(805, 125);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(100, 20);
			this->textBox26->TabIndex = 110;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(736, 125);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(41, 13);
			this->label26->TabIndex = 109;
			this->label26->Text = L"Day 25";
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(805, 99);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(100, 20);
			this->textBox27->TabIndex = 108;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(736, 99);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(41, 13);
			this->label27->TabIndex = 107;
			this->label27->Text = L"Day 24";
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(805, 73);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(100, 20);
			this->textBox28->TabIndex = 106;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(736, 73);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(41, 13);
			this->label28->TabIndex = 105;
			this->label28->Text = L"Day 23";
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(805, 47);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(100, 20);
			this->textBox29->TabIndex = 104;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(736, 47);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(41, 13);
			this->label29->TabIndex = 103;
			this->label29->Text = L"Day 22";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(805, 21);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(100, 20);
			this->textBox30->TabIndex = 102;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(736, 21);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(41, 13);
			this->label30->TabIndex = 101;
			this->label30->Text = L"Day 21";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(15, 249);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(105, 13);
			this->label31->TabIndex = 121;
			this->label31->Text = L"* Write P for present ";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(25, 262);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(85, 13);
			this->label32->TabIndex = 122;
			this->label32->Text = L"and A for absent";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(78, 44);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 123;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &updateAttendance::comboBox1_SelectedIndexChanged);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(12, 47);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(51, 13);
			this->label33->TabIndex = 124;
			this->label33->Text = L"Select ID";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(78, 73);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 125;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &updateAttendance::button1_Click);
			// 
			// updateAttendance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(925, 289);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"updateAttendance";
			this->Text = L"updateAttendance";
			this->Load += gcnew System::EventHandler(this, &updateAttendance::updateAttendance_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void FillComboBox(void){
		 
			 String^ constring = L"datasource=localhost;port=3306;username=root;password=Fat 0126";// this will connect to database
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);// these 2 will pass the querry
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from adminlog.studentdata ;",conDataBase);// semi colomn is used to close querry
				 MySqlDataReader^ myReader;
				 try {
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 
				 while(myReader->Read()){
						String^ vid;
						vid = myReader->GetString("idstudent");
						comboBox1->Items->Add(vid);
				 }
				 

				 }catch(Exception^ex){
				 
				 MessageBox::Show(ex->Message);
				 }

		 
		 }



	private: System::Void updateAttendance_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 String^ comboval= comboBox1->Text;

			String^ constring = L"datasource=localhost;port=3306;username=root;password=Fat 0126";// this will connect to database
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);// these 2 will pass the querry
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from adminlog.attendance where idStudent='"+comboval+"';",conDataBase);// semi colomn is used to close querry
				 MySqlDataReader^ myReader;
				 try {
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 
				 if(myReader->Read()){
					//String^ EidVal= myReader->GetInt32("idEmployeeInfo").ToString();	
					//Eid_txt->Text=EidVal;
					//String^ NameVal= myReader->GetString("name");
					//Name_txt->Text= NameVal;
					//String^ SurnameVal= myReader->GetString("surname");
					//Surname_txt->Text=SurnameVal;
					//String^ AgeVal= myReader->GetInt32("age").ToString();
					//Age_txt->Text = AgeVal;

				 }
				 

				 }catch(Exception^ex){
				 
				 MessageBox::Show(ex->Message);
				 }



		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 
			 String^ comboval= comboBox1->Text;
				 String^ constring = L"datasource=localhost;port=3306;username=root;password=Fat 0126";// this will connect to database
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);// these 2 will pass the querry
				 //MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into adminlog.attendance (idStudent,Day1,Day2,Day3,Day4,Day5,Day6,Day7,Day8,Day9,Day10,Day11,Day12,Day13,Day14,Day15,Day16,Day17,Day18,Day19,Day20,Day21,Day22,Day23,Day24,Day25,Day26,Day27,Day28,Day29,Day30) values('"+comboval+"','"+this->textBox1->Text+"','"+this->textBox2->Text+"','"+this->textBox3->Text+"','"+this->textBox4->Text+"','"+this->textBox5->Text+"','"+this->textBox6->Text+"','"+this->textBox7->Text+"','"+this->textBox8->Text+"','"+this->textBox9->Text+"','"+this->textBox10->Text+"','"+this->textBox20->Text+"','"+this->textBox19->Text+"','"+this->textBox18->Text+"','"+this->textBox17->Text+"','"+this->textBox16->Text+"','"+this->textBox15->Text+"','"+this->textBox14->Text+"','"+this->textBox13->Text+"','"+this->textBox12->Text+"','"+this->textBox11->Text+"','"+this->textBox30->Text+"','"+this->textBox29->Text+"','"+this->textBox28->Text+"','"+this->textBox27->Text+"','"+this->textBox26->Text+"','"+this->textBox25->Text+"','"+this->textBox24->Text+"','"+this->textBox23->Text+"','"+this->textBox22->Text+"','"+this->textBox21->Text+"') ;",conDataBase);// semi colomn is used to close querry
				  MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from adminlog.attendance where idStudent='"+comboval+"';",conDataBase);// semi colomn is used to close querry
				
				 
				 MySqlDataReader^ myReader;
				 try {
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 MessageBox::Show("Successfully saved");
				 
				 while(myReader->Read()){
						
				 }
				 

				 }catch(Exception^ex){
				 
				 MessageBox::Show(ex->Message);
				 }



		 }
};
}
