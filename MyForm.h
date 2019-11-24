#pragma once
#include "Triángulo.h"
#include "Cuadrilátero.h"
#include "Pentágono.h"
#include "Hexágono.h"
#include "Heptágono.h"
#include "Octágono.h"
#include "Eneágono.h"
#include "Decágono.h"

namespace Laboratorio6JavierMorales1210219 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		//
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ lado_trian_txt;
	private: System::Windows::Forms::TextBox^ altura_trian_txt;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ lado_cuad_txt;


	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ lado_pent_txt;
	private: System::Windows::Forms::TextBox^ apotema_pent_txt;


	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ lado_hex_txt;
	private: System::Windows::Forms::TextBox^ ap_hex_txt;


	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ hep_lado_txt;
	private: System::Windows::Forms::TextBox^ ap_hep_txt;


	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ oct_lado_txt;
	private: System::Windows::Forms::TextBox^ ap_oct_txt;


	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ ene_lado_txt;
	private: System::Windows::Forms::TextBox^ ap_ene_txt;


	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ dec_lado_txt;
	private: System::Windows::Forms::TextBox^ ap_dec_txt;


	private: System::Windows::Forms::RichTextBox^ Resultado;

	private: System::Windows::Forms::Label^ label26;
		   //
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lado_trian_txt = (gcnew System::Windows::Forms::TextBox());
			this->altura_trian_txt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lado_cuad_txt = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lado_pent_txt = (gcnew System::Windows::Forms::TextBox());
			this->apotema_pent_txt = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->lado_hex_txt = (gcnew System::Windows::Forms::TextBox());
			this->ap_hex_txt = (gcnew System::Windows::Forms::TextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->hep_lado_txt = (gcnew System::Windows::Forms::TextBox());
			this->ap_hep_txt = (gcnew System::Windows::Forms::TextBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->oct_lado_txt = (gcnew System::Windows::Forms::TextBox());
			this->ap_oct_txt = (gcnew System::Windows::Forms::TextBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->ene_lado_txt = (gcnew System::Windows::Forms::TextBox());
			this->ap_ene_txt = (gcnew System::Windows::Forms::TextBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->dec_lado_txt = (gcnew System::Windows::Forms::TextBox());
			this->ap_dec_txt = (gcnew System::Windows::Forms::TextBox());
			this->Resultado = (gcnew System::Windows::Forms::RichTextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(51, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Polígonos";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(19, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Triángulo";
			// 
			// lado_trian_txt
			// 
			this->lado_trian_txt->Location = System::Drawing::Point(23, 79);
			this->lado_trian_txt->Name = L"lado_trian_txt";
			this->lado_trian_txt->Size = System::Drawing::Size(100, 20);
			this->lado_trian_txt->TabIndex = 2;
			// 
			// altura_trian_txt
			// 
			this->altura_trian_txt->Location = System::Drawing::Point(141, 79);
			this->altura_trian_txt->Name = L"altura_trian_txt";
			this->altura_trian_txt->Size = System::Drawing::Size(100, 20);
			this->altura_trian_txt->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(262, 76);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Calcular";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Lado";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(138, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Altura";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->lado_trian_txt);
			this->groupBox1->Controls->Add(this->altura_trian_txt);
			this->groupBox1->Location = System::Drawing::Point(55, 70);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(350, 127);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->lado_cuad_txt);
			this->groupBox2->Location = System::Drawing::Point(55, 203);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(350, 127);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(262, 76);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Calcular";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(19, 28);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 19);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Cuadrilátero";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(20, 63);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Lado";
			// 
			// lado_cuad_txt
			// 
			this->lado_cuad_txt->Location = System::Drawing::Point(23, 79);
			this->lado_cuad_txt->Name = L"lado_cuad_txt";
			this->lado_cuad_txt->Size = System::Drawing::Size(218, 20);
			this->lado_cuad_txt->TabIndex = 2;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->lado_pent_txt);
			this->groupBox3->Controls->Add(this->apotema_pent_txt);
			this->groupBox3->Location = System::Drawing::Point(55, 336);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(350, 127);
			this->groupBox3->TabIndex = 9;
			this->groupBox3->TabStop = false;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(262, 76);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Calcular";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(138, 63);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 13);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Apotema";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(19, 28);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(96, 19);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Pentágono";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(20, 63);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(31, 13);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Lado";
			// 
			// lado_pent_txt
			// 
			this->lado_pent_txt->Location = System::Drawing::Point(23, 79);
			this->lado_pent_txt->Name = L"lado_pent_txt";
			this->lado_pent_txt->Size = System::Drawing::Size(100, 20);
			this->lado_pent_txt->TabIndex = 2;
			// 
			// apotema_pent_txt
			// 
			this->apotema_pent_txt->Location = System::Drawing::Point(141, 79);
			this->apotema_pent_txt->Name = L"apotema_pent_txt";
			this->apotema_pent_txt->Size = System::Drawing::Size(100, 20);
			this->apotema_pent_txt->TabIndex = 3;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button4);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->lado_hex_txt);
			this->groupBox4->Controls->Add(this->ap_hex_txt);
			this->groupBox4->Location = System::Drawing::Point(55, 469);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(350, 127);
			this->groupBox4->TabIndex = 10;
			this->groupBox4->TabStop = false;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(262, 76);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Calcular";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(138, 63);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 13);
			this->label11->TabIndex = 6;
			this->label11->Text = L"Apotema";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(19, 28);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(88, 19);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Hexágono";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(20, 63);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 13);
			this->label13->TabIndex = 5;
			this->label13->Text = L"Lado";
			// 
			// lado_hex_txt
			// 
			this->lado_hex_txt->Location = System::Drawing::Point(23, 79);
			this->lado_hex_txt->Name = L"lado_hex_txt";
			this->lado_hex_txt->Size = System::Drawing::Size(100, 20);
			this->lado_hex_txt->TabIndex = 2;
			// 
			// ap_hex_txt
			// 
			this->ap_hex_txt->Location = System::Drawing::Point(141, 79);
			this->ap_hex_txt->Name = L"ap_hex_txt";
			this->ap_hex_txt->Size = System::Drawing::Size(100, 20);
			this->ap_hex_txt->TabIndex = 3;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button5);
			this->groupBox5->Controls->Add(this->label14);
			this->groupBox5->Controls->Add(this->label15);
			this->groupBox5->Controls->Add(this->label16);
			this->groupBox5->Controls->Add(this->hep_lado_txt);
			this->groupBox5->Controls->Add(this->ap_hep_txt);
			this->groupBox5->Location = System::Drawing::Point(424, 70);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(350, 127);
			this->groupBox5->TabIndex = 11;
			this->groupBox5->TabStop = false;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(262, 76);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Calcular";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(138, 63);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(49, 13);
			this->label14->TabIndex = 6;
			this->label14->Text = L"Apotema";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(19, 28);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(95, 19);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Heptágono";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(20, 63);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(31, 13);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Lado";
			// 
			// hep_lado_txt
			// 
			this->hep_lado_txt->Location = System::Drawing::Point(23, 79);
			this->hep_lado_txt->Name = L"hep_lado_txt";
			this->hep_lado_txt->Size = System::Drawing::Size(100, 20);
			this->hep_lado_txt->TabIndex = 2;
			// 
			// ap_hep_txt
			// 
			this->ap_hep_txt->Location = System::Drawing::Point(141, 79);
			this->ap_hep_txt->Name = L"ap_hep_txt";
			this->ap_hep_txt->Size = System::Drawing::Size(100, 20);
			this->ap_hep_txt->TabIndex = 3;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->button6);
			this->groupBox6->Controls->Add(this->label17);
			this->groupBox6->Controls->Add(this->label18);
			this->groupBox6->Controls->Add(this->label19);
			this->groupBox6->Controls->Add(this->oct_lado_txt);
			this->groupBox6->Controls->Add(this->ap_oct_txt);
			this->groupBox6->Location = System::Drawing::Point(424, 203);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(350, 127);
			this->groupBox6->TabIndex = 12;
			this->groupBox6->TabStop = false;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(262, 76);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Calcular";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(138, 63);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(49, 13);
			this->label17->TabIndex = 6;
			this->label17->Text = L"Apotema";
			this->label17->Click += gcnew System::EventHandler(this, &MyForm::label17_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(19, 28);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(87, 19);
			this->label18->TabIndex = 1;
			this->label18->Text = L"Octágono";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(20, 63);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(31, 13);
			this->label19->TabIndex = 5;
			this->label19->Text = L"Lado";
			// 
			// oct_lado_txt
			// 
			this->oct_lado_txt->Location = System::Drawing::Point(23, 79);
			this->oct_lado_txt->Name = L"oct_lado_txt";
			this->oct_lado_txt->Size = System::Drawing::Size(100, 20);
			this->oct_lado_txt->TabIndex = 2;
			// 
			// ap_oct_txt
			// 
			this->ap_oct_txt->Location = System::Drawing::Point(141, 79);
			this->ap_oct_txt->Name = L"ap_oct_txt";
			this->ap_oct_txt->Size = System::Drawing::Size(100, 20);
			this->ap_oct_txt->TabIndex = 3;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->button7);
			this->groupBox7->Controls->Add(this->label20);
			this->groupBox7->Controls->Add(this->label21);
			this->groupBox7->Controls->Add(this->label22);
			this->groupBox7->Controls->Add(this->ene_lado_txt);
			this->groupBox7->Controls->Add(this->ap_ene_txt);
			this->groupBox7->Location = System::Drawing::Point(424, 336);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(350, 127);
			this->groupBox7->TabIndex = 13;
			this->groupBox7->TabStop = false;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(262, 76);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 4;
			this->button7->Text = L"Calcular";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(138, 63);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(49, 13);
			this->label20->TabIndex = 6;
			this->label20->Text = L"Apotema";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(19, 28);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(88, 19);
			this->label21->TabIndex = 1;
			this->label21->Text = L"Eneágono";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(20, 63);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(31, 13);
			this->label22->TabIndex = 5;
			this->label22->Text = L"Lado";
			// 
			// ene_lado_txt
			// 
			this->ene_lado_txt->Location = System::Drawing::Point(23, 79);
			this->ene_lado_txt->Name = L"ene_lado_txt";
			this->ene_lado_txt->Size = System::Drawing::Size(100, 20);
			this->ene_lado_txt->TabIndex = 2;
			// 
			// ap_ene_txt
			// 
			this->ap_ene_txt->Location = System::Drawing::Point(141, 79);
			this->ap_ene_txt->Name = L"ap_ene_txt";
			this->ap_ene_txt->Size = System::Drawing::Size(100, 20);
			this->ap_ene_txt->TabIndex = 3;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->button8);
			this->groupBox8->Controls->Add(this->label23);
			this->groupBox8->Controls->Add(this->label24);
			this->groupBox8->Controls->Add(this->label25);
			this->groupBox8->Controls->Add(this->dec_lado_txt);
			this->groupBox8->Controls->Add(this->ap_dec_txt);
			this->groupBox8->Location = System::Drawing::Point(424, 469);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(350, 127);
			this->groupBox8->TabIndex = 14;
			this->groupBox8->TabStop = false;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(262, 76);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 4;
			this->button8->Text = L"Calcular";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(138, 63);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(49, 13);
			this->label23->TabIndex = 6;
			this->label23->Text = L"Apotema";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(19, 28);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(89, 19);
			this->label24->TabIndex = 1;
			this->label24->Text = L"Decágono";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(20, 63);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(31, 13);
			this->label25->TabIndex = 5;
			this->label25->Text = L"Lado";
			// 
			// dec_lado_txt
			// 
			this->dec_lado_txt->Location = System::Drawing::Point(23, 79);
			this->dec_lado_txt->Name = L"dec_lado_txt";
			this->dec_lado_txt->Size = System::Drawing::Size(100, 20);
			this->dec_lado_txt->TabIndex = 2;
			// 
			// ap_dec_txt
			// 
			this->ap_dec_txt->Location = System::Drawing::Point(141, 79);
			this->ap_dec_txt->Name = L"ap_dec_txt";
			this->ap_dec_txt->Size = System::Drawing::Size(100, 20);
			this->ap_dec_txt->TabIndex = 3;
			// 
			// Resultado
			// 
			this->Resultado->Location = System::Drawing::Point(809, 98);
			this->Resultado->Name = L"Resultado";
			this->Resultado->Size = System::Drawing::Size(211, 498);
			this->Resultado->TabIndex = 15;
			this->Resultado->Text = L"";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(859, 70);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(108, 19);
			this->label26->TabIndex = 16;
			this->label26->Text = L"Resultados";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1051, 637);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->Resultado);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Triángulo* T = new Triángulo();
		Cuadrilátero* C = new Cuadrilátero();
		Pentágono* P = new Pentágono();
		Hexágono* H = new Hexágono();
		Heptágono* Hep = new Heptágono();
		Octágono* Oct = new Octágono();
		Eneágono* E = new Eneágono();
		Decágono* D = new Decágono();


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{	
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			Resultado->Text = "";
			double areaT = T->ObtenerArea(Convert::ToDouble(lado_trian_txt->Text), Convert::ToDouble(altura_trian_txt->Text));
			double perT = T->ObtenerPerimetro(Convert::ToDouble(lado_trian_txt->Text));
			Resultado->Text = "Área: " + areaT + "\n" + "Perímetro: " + perT;
		}
		catch (...)
		{
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		Resultado->Text = "";
		double areaC = C->ObtenerArea(Convert::ToDouble(lado_cuad_txt->Text));
		double perC = C->ObtenerPerimetro(Convert::ToDouble(lado_cuad_txt->Text));
		Resultado->Text = "Área: " + areaC + "\n" + "Perímetro: " + perC;
	}
	catch (...)
	{
	}
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		Resultado->Text = "";
		double PerP = P->ObtenerPerimetro(Convert::ToDouble(lado_pent_txt->Text));
		double areaP = P->ObtenerArea(PerP, Convert::ToDouble(apotema_pent_txt->Text));
		Resultado->Text = "Área: " + areaP + "\n" + "Perímetro: " + PerP;
		
	}
	catch (...)
	{
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//Hexágono
	//lado_hex_txt ap_hex_txt
	try
	{
		Resultado->Text = "";
		double AreaH = H->ObtenerArea(Convert::ToDouble(lado_hex_txt->Text), Convert::ToDouble(ap_hex_txt->Text));
		double PerH = H->ObtenerPerimetro(Convert::ToDouble(lado_hex_txt->Text));
		Resultado->Text = "Área: " + AreaH + "\n" + "Perímetro: " + PerH;
	}
	catch (...)
	{

	}
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		Resultado->Text = "";
		double AreaHep = Hep->ObtenerArea(Convert::ToDouble(hep_lado_txt->Text), Convert::ToDouble(ap_hep_txt->Text));
		double PerHep = Hep->ObtenerPerimetro(Convert::ToDouble(hep_lado_txt->Text));
		Resultado->Text = "Área: " + AreaHep + "\n" + "Perímetro: " + PerHep;
	}
	catch (...)
	{

	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		Resultado->Text = "";
		double AreaO = Oct->ObtenerArea(Convert::ToDouble(oct_lado_txt->Text), Convert::ToDouble(ap_oct_txt->Text));
		double PerO = Oct->ObtenerPerimetro(Convert::ToDouble(oct_lado_txt->Text));
		Resultado->Text = "Área: " + AreaO + "\n" + "Perímetro: " + PerO;
	}
	catch (...)
	{
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		Resultado->Text = "";
		double AreaE = E->ObtenerArea(Convert::ToDouble(ene_lado_txt->Text), Convert::ToDouble(ap_ene_txt->Text));
		double PerE = E->ObtenerPerimetro(Convert::ToDouble(ene_lado_txt->Text));
		Resultado->Text = "Área: " + AreaE + "\n" + "Perímetro: " + PerE;
	}
	catch (...)
	{
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		Resultado->Text = "";
		double AreaD = D->ObtenerArea(Convert::ToDouble(dec_lado_txt->Text), Convert::ToDouble(ap_dec_txt->Text));
		double PerD = D->ObtenerPerimetro(Convert::ToDouble(dec_lado_txt->Text));
		Resultado->Text = "Área: " + AreaD + "\n" + "Perímetro: " + PerD;
	}
	catch (...)
	{
	}
}
};
}
