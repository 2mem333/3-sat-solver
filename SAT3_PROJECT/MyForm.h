#pragma once
#include "sat3_kutuphane.h"
#include <msclr/marshal_cppstd.h>
#include <regex>
#include <set>
#include <string>
#include <sstream>
#include <random>

namespace SAT3PROJECT {

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


	private: System::Windows::Forms::Button^ solve;



	private: System::Windows::Forms::RichTextBox^ output;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;









	private: System::Windows::Forms::Panel^ standart_panel;

	private: System::Windows::Forms::TextBox^ problem_input;






	private: System::Windows::Forms::Panel^ cnf_format_panel;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ bilgi;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ cnf_format;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::RichTextBox^ output2;

	private: System::Windows::Forms::TextBox^ problem_input2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ coz2;
	private: System::Windows::Forms::Panel^ bilgi_panel;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ parantezsayisi;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ rastgele;
	private: System::Windows::Forms::TextBox^ degiskensayisi;



	private: System::Windows::Forms::Label^ durum;

	private: System::Windows::Forms::Label^ label20;























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->solve = (gcnew System::Windows::Forms::Button());
			this->output = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->bilgi = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cnf_format = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->standart_panel = (gcnew System::Windows::Forms::Panel());
			this->bilgi_panel = (gcnew System::Windows::Forms::Panel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->durum = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->parantezsayisi = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->rastgele = (gcnew System::Windows::Forms::Button());
			this->degiskensayisi = (gcnew System::Windows::Forms::TextBox());
			this->problem_input = (gcnew System::Windows::Forms::TextBox());
			this->cnf_format_panel = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->output2 = (gcnew System::Windows::Forms::RichTextBox());
			this->problem_input2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->coz2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->bilgi->SuspendLayout();
			this->cnf_format->SuspendLayout();
			this->standart_panel->SuspendLayout();
			this->bilgi_panel->SuspendLayout();
			this->cnf_format_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// solve
			// 
			this->solve->BackColor = System::Drawing::SystemColors::Menu;
			this->solve->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->solve->Location = System::Drawing::Point(15, 61);
			this->solve->Name = L"solve";
			this->solve->Size = System::Drawing::Size(93, 27);
			this->solve->TabIndex = 2;
			this->solve->Text = L"çöz";
			this->solve->UseVisualStyleBackColor = false;
			this->solve->Click += gcnew System::EventHandler(this, &MyForm::solve_Click);
			// 
			// output
			// 
			this->output->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->output->BackColor = System::Drawing::SystemColors::ControlLight;
			this->output->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->output->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->output->Location = System::Drawing::Point(14, 147);
			this->output->Name = L"output";
			this->output->ReadOnly = true;
			this->output->Size = System::Drawing::Size(620, 360);
			this->output->TabIndex = 3;
			this->output->Text = L"";
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel1->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->bilgi);
			this->panel1->Controls->Add(this->cnf_format);
			this->panel1->Location = System::Drawing::Point(0, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(97, 531);
			this->panel1->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel2->Controls->Add(this->label3);
			this->panel2->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel2->Location = System::Drawing::Point(0, 1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(97, 38);
			this->panel2->TabIndex = 10;
			this->panel2->Click += gcnew System::EventHandler(this, &MyForm::panel2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Default;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->ForeColor = System::Drawing::Color::SeaGreen;
			this->label3->Location = System::Drawing::Point(12, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 18);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Standart";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click_1);
			// 
			// bilgi
			// 
			this->bilgi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)));
			this->bilgi->Controls->Add(this->label5);
			this->bilgi->Cursor = System::Windows::Forms::Cursors::Default;
			this->bilgi->Location = System::Drawing::Point(0, 85);
			this->bilgi->Name = L"bilgi";
			this->bilgi->Size = System::Drawing::Size(97, 38);
			this->bilgi->TabIndex = 9;
			this->bilgi->Click += gcnew System::EventHandler(this, &MyForm::bilgi_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Default;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label5->ForeColor = System::Drawing::Color::SeaGreen;
			this->label5->Location = System::Drawing::Point(25, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 18);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Bilgi";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// cnf_format
			// 
			this->cnf_format->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)));
			this->cnf_format->Controls->Add(this->label4);
			this->cnf_format->Cursor = System::Windows::Forms::Cursors::Default;
			this->cnf_format->Location = System::Drawing::Point(0, 43);
			this->cnf_format->Name = L"cnf_format";
			this->cnf_format->Size = System::Drawing::Size(97, 38);
			this->cnf_format->TabIndex = 8;
			this->cnf_format->Click += gcnew System::EventHandler(this, &MyForm::cnf_format_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Default;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->ForeColor = System::Drawing::Color::SeaGreen;
			this->label4->Location = System::Drawing::Point(2, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"CNF Format";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(10, 124);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Çýktý:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(11, 4);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Problem:";
			// 
			// standart_panel
			// 
			this->standart_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->standart_panel->Controls->Add(this->label20);
			this->standart_panel->Controls->Add(this->label1);
			this->standart_panel->Controls->Add(this->durum);
			this->standart_panel->Controls->Add(this->label18);
			this->standart_panel->Controls->Add(this->output);
			this->standart_panel->Controls->Add(this->parantezsayisi);
			this->standart_panel->Controls->Add(this->label17);
			this->standart_panel->Controls->Add(this->rastgele);
			this->standart_panel->Controls->Add(this->degiskensayisi);
			this->standart_panel->Controls->Add(this->problem_input);
			this->standart_panel->Controls->Add(this->label2);
			this->standart_panel->Controls->Add(this->solve);
			this->standart_panel->Location = System::Drawing::Point(97, 0);
			this->standart_panel->Name = L"standart_panel";
			this->standart_panel->Size = System::Drawing::Size(650, 529);
			this->standart_panel->TabIndex = 7;
			// 
			// bilgi_panel
			// 
			this->bilgi_panel->Controls->Add(this->linkLabel2);
			this->bilgi_panel->Controls->Add(this->linkLabel1);
			this->bilgi_panel->Controls->Add(this->label16);
			this->bilgi_panel->Controls->Add(this->label15);
			this->bilgi_panel->Controls->Add(this->label14);
			this->bilgi_panel->Controls->Add(this->label11);
			this->bilgi_panel->Controls->Add(this->label12);
			this->bilgi_panel->Controls->Add(this->label13);
			this->bilgi_panel->Controls->Add(this->label10);
			this->bilgi_panel->Controls->Add(this->label9);
			this->bilgi_panel->Controls->Add(this->label8);
			this->bilgi_panel->Location = System::Drawing::Point(97, 0);
			this->bilgi_panel->Name = L"bilgi_panel";
			this->bilgi_panel->Size = System::Drawing::Size(650, 529);
			this->bilgi_panel->TabIndex = 14;
			this->bilgi_panel->Visible = false;
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->linkLabel2->Location = System::Drawing::Point(13, 354);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(298, 19);
			this->linkLabel2->TabIndex = 21;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"https://github.com/2mem333/3-sat-library";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel2_LinkClicked);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->linkLabel1->Location = System::Drawing::Point(13, 294);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(294, 19);
			this->linkLabel1->TabIndex = 20;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"https://github.com/2mem333/3-sat-solver";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label16->Location = System::Drawing::Point(13, 334);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(323, 20);
			this->label16->TabIndex = 19;
			this->label16->Text = L"Algoritma kütüphanesinin kaynak kodu için:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label15->Location = System::Drawing::Point(12, 274);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(214, 20);
			this->label15->TabIndex = 18;
			this->label15->Text = L"Programýn kaynak kodu için:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label14->Location = System::Drawing::Point(12, 186);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(60, 20);
			this->label14->TabIndex = 17;
			this->label14->Text = L"olabilir.";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label11->Location = System::Drawing::Point(11, 166);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(582, 20);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Çýktý kýsmýna, sezgisel matris yazdýrýlýrken yüksek parantezler için kusurlu yazd"
				L"ýrma\r\n";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label12->Location = System::Drawing::Point(11, 123);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(347, 20);
			this->label12->TabIndex = 15;
			this->label12->Text = L"ve parantez sayýsýna uyduðundan emin olunuz.";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label13->Location = System::Drawing::Point(12, 103);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(598, 20);
			this->label13->TabIndex = 14;
			this->label13->Text = L".CNF formatý çözüm için girilen problemin en baþta p komutu ile belirtilen deðiþk"
				L"en\r\n";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label10->Location = System::Drawing::Point(11, 64);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(375, 20);
			this->label10->TabIndex = 13;
			this->label10->Text = L"ve negatif sayýlarýn geçersiz olduðunu unutmayýnýz.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label9->Location = System::Drawing::Point(11, 44);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(627, 20);
			this->label9->TabIndex = 12;
			this->label9->Text = L"deðiþken numaralandýrmasý yapýnýz. Deðiþken numaralandýrmasý yaparken 0 rakamýnýn"
				L"\r\n";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label8->Location = System::Drawing::Point(12, 24);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(609, 20);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Standart çözüm için problem giriþi yaparken kullandýðýnýz farklý deðiþken sayýsý "
				L"kadar\r\n";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label20->Location = System::Drawing::Point(10, 102);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(60, 20);
			this->label20->TabIndex = 16;
			this->label20->Text = L"Durum:";
			// 
			// durum
			// 
			this->durum->AutoSize = true;
			this->durum->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->durum->Location = System::Drawing::Point(67, 102);
			this->durum->Name = L"durum";
			this->durum->Size = System::Drawing::Size(0, 20);
			this->durum->TabIndex = 17;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label18->Location = System::Drawing::Point(270, 65);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(22, 20);
			this->label18->TabIndex = 13;
			this->label18->Text = L"P:";
			// 
			// parantezsayisi
			// 
			this->parantezsayisi->BackColor = System::Drawing::Color::Gainsboro;
			this->parantezsayisi->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->parantezsayisi->Location = System::Drawing::Point(291, 65);
			this->parantezsayisi->Name = L"parantezsayisi";
			this->parantezsayisi->Size = System::Drawing::Size(35, 24);
			this->parantezsayisi->TabIndex = 12;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label17->Location = System::Drawing::Point(208, 65);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(24, 20);
			this->label17->TabIndex = 11;
			this->label17->Text = L"D:";
			// 
			// rastgele
			// 
			this->rastgele->BackColor = System::Drawing::SystemColors::Menu;
			this->rastgele->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->rastgele->Location = System::Drawing::Point(342, 63);
			this->rastgele->Name = L"rastgele";
			this->rastgele->Size = System::Drawing::Size(93, 27);
			this->rastgele->TabIndex = 10;
			this->rastgele->Text = L"rastgele";
			this->rastgele->UseVisualStyleBackColor = false;
			this->rastgele->Click += gcnew System::EventHandler(this, &MyForm::rastgele_Click);
			// 
			// degiskensayisi
			// 
			this->degiskensayisi->BackColor = System::Drawing::Color::Gainsboro;
			this->degiskensayisi->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->degiskensayisi->Location = System::Drawing::Point(229, 65);
			this->degiskensayisi->Name = L"degiskensayisi";
			this->degiskensayisi->Size = System::Drawing::Size(35, 24);
			this->degiskensayisi->TabIndex = 9;
			// 
			// problem_input
			// 
			this->problem_input->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->problem_input->BackColor = System::Drawing::SystemColors::ControlLight;
			this->problem_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->problem_input->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->problem_input->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->problem_input->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->problem_input->Location = System::Drawing::Point(15, 27);
			this->problem_input->Name = L"problem_input";
			this->problem_input->Size = System::Drawing::Size(620, 25);
			this->problem_input->TabIndex = 8;
			this->problem_input->Text = L"(x1+x2+x3).(x1\'+x2+x3\').(x1\'+x2\'+x3\')";
			// 
			// cnf_format_panel
			// 
			this->cnf_format_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cnf_format_panel->Controls->Add(this->label7);
			this->cnf_format_panel->Controls->Add(this->output2);
			this->cnf_format_panel->Controls->Add(this->problem_input2);
			this->cnf_format_panel->Controls->Add(this->label6);
			this->cnf_format_panel->Controls->Add(this->coz2);
			this->cnf_format_panel->Location = System::Drawing::Point(97, 0);
			this->cnf_format_panel->Name = L"cnf_format_panel";
			this->cnf_format_panel->Size = System::Drawing::Size(650, 529);
			this->cnf_format_panel->TabIndex = 8;
			this->cnf_format_panel->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label7->Location = System::Drawing::Point(375, 10);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Çýktý:";
			// 
			// output2
			// 
			this->output2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->output2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->output2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->output2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->output2->Location = System::Drawing::Point(379, 33);
			this->output2->Name = L"output2";
			this->output2->ReadOnly = true;
			this->output2->Size = System::Drawing::Size(257, 484);
			this->output2->TabIndex = 12;
			this->output2->Text = L"";
			// 
			// problem_input2
			// 
			this->problem_input2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->problem_input2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->problem_input2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->problem_input2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->problem_input2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->problem_input2->Location = System::Drawing::Point(16, 33);
			this->problem_input2->Multiline = true;
			this->problem_input2->Name = L"problem_input2";
			this->problem_input2->Size = System::Drawing::Size(196, 441);
			this->problem_input2->TabIndex = 11;
			this->problem_input2->Text = L"p cnf 3  2\r\n -1 2 3 0\r\n1 -2 -3 0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label6->Location = System::Drawing::Point(12, 10);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Problem:";
			// 
			// coz2
			// 
			this->coz2->BackColor = System::Drawing::SystemColors::Menu;
			this->coz2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->coz2->Location = System::Drawing::Point(16, 480);
			this->coz2->Name = L"coz2";
			this->coz2->Size = System::Drawing::Size(196, 27);
			this->coz2->TabIndex = 9;
			this->coz2->Text = L"çöz";
			this->coz2->UseVisualStyleBackColor = false;
			this->coz2->Click += gcnew System::EventHandler(this, &MyForm::coz2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(747, 530);
			this->Controls->Add(this->bilgi_panel);
			this->Controls->Add(this->standart_panel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->cnf_format_panel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"3-SAT ÇÖZÜCÜ";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->bilgi->ResumeLayout(false);
			this->bilgi->PerformLayout();
			this->cnf_format->ResumeLayout(false);
			this->cnf_format->PerformLayout();
			this->standart_panel->ResumeLayout(false);
			this->standart_panel->PerformLayout();
			this->bilgi_panel->ResumeLayout(false);
			this->bilgi_panel->PerformLayout();
			this->cnf_format_panel->ResumeLayout(false);
			this->cnf_format_panel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void solve_Click(System::Object^ sender, System::EventArgs^ e) {
		output->Clear();
		std::string input = msclr::interop::marshal_as<std::string>(problem_input->Text);

		std::regex parenthesis_regex(R"(\((.*?)\))");
		auto begin = std::sregex_iterator(input.begin(), input.end(), parenthesis_regex);
		auto end = std::sregex_iterator();

		int total_parentheses = 0; 
		std::set<int> unique_numbers;

		for (std::sregex_iterator i = begin; i != end; ++i) {
			total_parentheses++;

			std::string group = (*i)[1]; 
			std::regex number_regex(R"(x(\d+)('?))");
			auto inner_begin = std::sregex_iterator(group.begin(), group.end(), number_regex);
			auto inner_end = std::sregex_iterator();

			for (std::sregex_iterator j = inner_begin; j != inner_end; ++j) {
				std::string number = (*j)[1];

				int value = std::stoi(number);
				unique_numbers.insert(value); 
			}
			
		}
		SAT3_matris^ mat;
		mat = gcnew SAT3_matris(unique_numbers.size(), total_parentheses,output);
		//----------------------------------------------------------------------------------------
		for (std::sregex_iterator i = begin; i != end; ++i) {
			std::string group = (*i)[1]; 
			std::regex variable_regex(R"(x(\d+)('?))"); 
			auto inner_begin = std::sregex_iterator(group.begin(), group.end(), variable_regex);
			auto inner_end = std::sregex_iterator();

			std::vector<int> numbers;
			for (std::sregex_iterator j = inner_begin; j != inner_end; ++j) {
				std::string number = (*j)[1];
				std::string is_negative = (*j)[2];

				int value = std::stoi(number);
				if (!is_negative.empty()) {
					value = -value;
				}
				numbers.push_back(value);
			}
			if (numbers.size() == 3) {
				mat->parantez_ekle(numbers[0], numbers[1], numbers[2]);
			}
		}

		mutlakparantez mp;
	bas:
		mat->sezgiselmat_yazdir();
		if (mat->cozum_var_mi() == 0)
		{
			//mat.cozumyazdir();
			durum->Text = "Çözülemedi!";
			durum->ForeColor = Color::FromArgb(255, 0, 0);
			output->AppendText("\n3SAT problemi cozulemedi!\n");
			return;
		}
		mp = mat->mutlak_parantez_kontrol();
		if (mp.mutlakpar == -1)
		{
			output->AppendText("Mutlak parantez yok.\n");
		}
		else
		{
			int mutlakpara = mp.mutlakpar + 1;
			output->AppendText("Mutlak parantez bulundu: " + mutlakpara + "\n");
			mat->degisken_sil(mp.degisken, mp.state);
			goto bkontrol;
		}
		mat->kont();
	bkontrol:
		if (mat->bitti_mi())
		{
			if (!mat->cozum_kontrol())
			{
				durum->Text = "Çözüldü";
				durum->ForeColor = Color::FromArgb(0, 255, 0);
				output->AppendText("---------------------\nCOZUM BASARIYLA BITTI\n");
				for (int i = 0; i < mat->degisken_sayisi;i++)
				{
					int rakam = i + 1;
					if (mat->cozum[i] == 2)
						continue;
					output->AppendText("x" + rakam + " = " + mat->cozum[i].ToString() + "\n");
				}
				output->AppendText("---------------------");
				return;
			}
		}
		goto bas;
	}

private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	cnf_format_panel->Visible = true;
	standart_panel->Visible = false;
	bilgi_panel->Visible = false;
	bilgi->BackColor = System::Drawing::Color::FromArgb(109, 191, 148);
	panel2->BackColor = System::Drawing::Color::FromArgb(109, 191, 148);
	cnf_format->BackColor = System::Drawing::Color::FromArgb(255, 255, 255);
}
private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	cnf_format_panel->Visible = false;
	standart_panel->Visible = true;
	bilgi_panel->Visible = false;
	bilgi->BackColor = System::Drawing::Color::FromArgb(109, 191, 148);
	cnf_format->BackColor = System::Drawing::Color::FromArgb(109, 191, 148);
	panel2->BackColor = System::Drawing::Color::FromArgb(255, 255, 255);
}
private: System::Void panel2_Click(System::Object^ sender, System::EventArgs^ e) {
	cnf_format_panel->Visible = false;
	standart_panel->Visible = true;
	bilgi_panel->Visible = false;
	bilgi->BackColor = System::Drawing::Color::FromArgb(109, 191, 148);
	cnf_format->BackColor = System::Drawing::Color::FromArgb(109, 191, 148);
	panel2->BackColor = System::Drawing::Color::FromArgb(255, 255, 255);
}
private: System::Void cnf_format_Click(System::Object^ sender, System::EventArgs^ e) {
	cnf_format_panel->Visible = true;
	standart_panel->Visible = false;
	bilgi_panel->Visible = false;
	bilgi->BackColor = System::Drawing::Color::FromArgb(109, 191, 148);
	panel2->BackColor = System::Drawing::Color::FromArgb(109, 191, 148);
	cnf_format->BackColor = System::Drawing::Color::FromArgb(255, 255, 255);
}
private: System::Void coz2_Click(System::Object^ sender, System::EventArgs^ e) {
	output2->Clear();
	SAT3_matris^ mat;
	std::string text = msclr::interop::marshal_as<std::string>(problem_input2->Text);

	std::istringstream stream(text);
	std::string line;
	std::getline(stream, line); 
	std::istringstream firstLineStream(line);

	std::string temp;
	int firstNumber, secondNumber;

	firstLineStream >> temp >> temp;  

	if (firstLineStream >> firstNumber >> secondNumber) {
		mat = gcnew SAT3_matris(firstNumber, secondNumber, output2);
	}
	else
	{
		output2->AppendText("Hatalý veya eksik format girildi.");
		return;
	}

	while (std::getline(stream, line)) {
		std::istringstream lineStream(line);
		std::vector<int> numbers;
		int num;

		while (lineStream >> num) {
			if (num == 0) break; 
			numbers.push_back(num);
		}

		if (numbers.size() == 3) {
			mat->parantez_ekle(numbers[0], numbers[1], numbers[2]);
		}
		else {
			output2->AppendText("Hatalý veya eksik format girildi.");
			return;
		}
	}


	mutlakparantez mp;
bas:
	mat->sezgiselmat_yazdir();
	if (mat->cozum_var_mi() == 0)
	{
		output2->AppendText("\n3SAT problemi cozulemedi!\n");
		return;
	}
	mp = mat->mutlak_parantez_kontrol();
	if (mp.mutlakpar == -1)
	{
		output2->AppendText("Mutlak parantez yok.\n");
	}
	else
	{
		int mutlakpara = mp.mutlakpar + 1;
		output2->AppendText("Mutlak parantez bulundu: " + mutlakpara + "\n");
		mat->degisken_sil(mp.degisken, mp.state);
		goto bkontrol;
	}
	mat->kont();
bkontrol:
	if (mat->bitti_mi())
	{
		if (!mat->cozum_kontrol())
		{
			output2->AppendText("---------------------\nCOZUM BASARIYLA BITTI\n");
			for (int i = 0; i < mat->degisken_sayisi;i++)
			{
				int rakam = i + 1;
				if (mat->cozum[i] == 2)
					continue;
				output2->AppendText("x" + rakam + " = " + mat->cozum[i].ToString() + "\n");
			}
			output2->AppendText("---------------------");
			return;
		}
	}
	goto bas;
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	cnf_format_panel->Visible = false;
	standart_panel->Visible = false;
	bilgi_panel->Visible = true;
	panel2->BackColor = System::Drawing::Color::FromArgb(109, 191, 148);
	cnf_format->BackColor = System::Drawing::Color::FromArgb(109, 191, 148);
	bilgi->BackColor = System::Drawing::Color::FromArgb(255, 255, 255);
}
private: System::Void bilgi_Click(System::Object^ sender, System::EventArgs^ e) {
	cnf_format_panel->Visible = false;
	standart_panel->Visible = false;
	bilgi_panel->Visible = true;
	panel2->BackColor = System::Drawing::Color::FromArgb(109, 191, 148);
	cnf_format->BackColor = System::Drawing::Color::FromArgb(109, 191, 148);
	bilgi->BackColor = System::Drawing::Color::FromArgb(255, 255, 255);
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	System::Diagnostics::Process::Start("https://github.com/2mem333/3-sat-solver");
}
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	System::Diagnostics::Process::Start("https://github.com/2mem333/3-sat-library");
}

	private: System::Void rastgele_Click(System::Object^ sender, System::EventArgs^ e) {
		problem_input->Clear();
		int dsayi = Int32::Parse(degiskensayisi->Text);
		int psayi = Int32::Parse(parantezsayisi->Text);

		int** matris = new int* [dsayi];
		for (int i = 0; i < dsayi; i++)
			matris[i] = new int[psayi];

		for (int i = 0; i < dsayi; i++) {
			for (int a = 0; a < psayi; a++) {
				matris[i][a] = 2; 
			}
		}

		int random_durum;
		int random_sutun;
		int count;

		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dist(0, 1);
		std::uniform_int_distribution<> dist2(0, dsayi - 1);

		for (int a = 0; a < psayi; a++) {
			count = 0;
			while (count != 3) {
				random_sutun = dist2(gen);
				if (matris[random_sutun][a] == 2) { 
					random_durum = dist(gen);
					matris[random_sutun][a] = random_durum;
					count++;
				}
			}
		}

		int cnt;
		for (int a = 0; a < psayi; a++) {
			cnt = 0;
			problem_input->AppendText("(");

			for (int i = 0; i < dsayi && cnt < 3; i++) {
				if (matris[i][a] != 2) { 
					problem_input->AppendText("x" + (i + 1).ToString());

					if (matris[i][a] == 0) {
						problem_input->AppendText("'"); 
					}

					cnt++;
					if (cnt != 3) {
						problem_input->AppendText("+"); 
					}
				}
			}

			problem_input->AppendText(").");
		}

		for (int i = 0; i < dsayi; i++) {
			delete[] matris[i]; 
		}
		delete[] matris; 
	}

};
}
