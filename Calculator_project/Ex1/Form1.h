#pragma once
#include "stdafx.h"

namespace Ex1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button18;
	protected:
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: int xor (int a, int b);
			 int or (int a, int b);
	private: System::Double summ(double a, double b);
	private: System::Double difference(double a, double b);
	private: System::Double product(double a, double b);
	private: System::Double expon(double a, double b);
	private: System::Double quotient(double a, double b);
	private: System::Double root(double a, double b);
	private: System::Double root(double a);
	private: System::Double remain(double a, double b);
	private: System::Double signchange(double a);
	private: System::Void showresult(double result);
	private: System::Void clearpanel();
	private: System::Double isdigit();

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;

	private:

	private:

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Azure;
			this->textBox1->Enabled = false;
			this->textBox1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox1->Location = System::Drawing::Point(12, 13);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->MaxLength = 10;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(213, 46);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Location = System::Drawing::Point(13, 98);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(38, 28);
			this->button1->TabIndex = 1;
			this->button1->TabStop = false;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->Location = System::Drawing::Point(56, 98);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(38, 28);
			this->button2->TabIndex = 2;
			this->button2->TabStop = false;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3->Location = System::Drawing::Point(99, 98);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(38, 28);
			this->button3->TabIndex = 3;
			this->button3->TabStop = false;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->Location = System::Drawing::Point(13, 134);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(38, 28);
			this->button4->TabIndex = 4;
			this->button4->TabStop = false;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->Location = System::Drawing::Point(56, 134);
			this->button5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(38, 27);
			this->button5->TabIndex = 5;
			this->button5->TabStop = false;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button6->Location = System::Drawing::Point(99, 134);
			this->button6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(38, 28);
			this->button6->TabIndex = 6;
			this->button6->TabStop = false;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button7->Location = System::Drawing::Point(13, 170);
			this->button7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(38, 28);
			this->button7->TabIndex = 7;
			this->button7->TabStop = false;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button8->Location = System::Drawing::Point(56, 170);
			this->button8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(38, 28);
			this->button8->TabIndex = 8;
			this->button8->TabStop = false;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button9->Location = System::Drawing::Point(99, 170);
			this->button9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(38, 28);
			this->button9->TabIndex = 9;
			this->button9->TabStop = false;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button10->Location = System::Drawing::Point(13, 204);
			this->button10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(38, 28);
			this->button10->TabIndex = 10;
			this->button10->TabStop = false;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button11->Location = System::Drawing::Point(56, 204);
			this->button11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(38, 28);
			this->button11->TabIndex = 11;
			this->button11->TabStop = false;
			this->button11->Text = L",";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button12->Location = System::Drawing::Point(143, 204);
			this->button12->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(38, 28);
			this->button12->TabIndex = 12;
			this->button12->TabStop = false;
			this->button12->Text = L"+";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button13->Location = System::Drawing::Point(143, 170);
			this->button13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(38, 28);
			this->button13->TabIndex = 13;
			this->button13->TabStop = false;
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button14->Location = System::Drawing::Point(143, 134);
			this->button14->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(38, 28);
			this->button14->TabIndex = 14;
			this->button14->TabStop = false;
			this->button14->Text = L"*";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button15->Location = System::Drawing::Point(143, 98);
			this->button15->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(38, 28);
			this->button15->TabIndex = 15;
			this->button15->TabStop = false;
			this->button15->Text = L"/";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button16->Location = System::Drawing::Point(12, 67);
			this->button16->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(38, 28);
			this->button16->TabIndex = 16;
			this->button16->TabStop = false;
			this->button16->Text = L"x^\r\n";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button17->Location = System::Drawing::Point(56, 67);
			this->button17->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(38, 28);
			this->button17->TabIndex = 17;
			this->button17->TabStop = false;
			this->button17->Text = L"√";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button20->Location = System::Drawing::Point(187, 98);
			this->button20->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(38, 28);
			this->button20->TabIndex = 20;
			this->button20->TabStop = false;
			this->button20->Text = L"C";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// button21
			// 
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button21->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button21->Location = System::Drawing::Point(187, 134);
			this->button21->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(38, 98);
			this->button21->TabIndex = 21;
			this->button21->TabStop = false;
			this->button21->Text = L"=";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::Control;
			this->button22->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button22->Location = System::Drawing::Point(99, 204);
			this->button22->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(38, 28);
			this->button22->TabIndex = 22;
			this->button22->TabStop = false;
			this->button22->Text = L"+/-";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button18->Location = System::Drawing::Point(99, 67);
			this->button18->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(38, 28);
			this->button18->TabIndex = 24;
			this->button18->TabStop = false;
			this->button18->Text = L"OR";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click_1);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button19->Location = System::Drawing::Point(143, 67);
			this->button19->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(38, 28);
			this->button19->TabIndex = 25;
			this->button19->TabStop = false;
			this->button19->Text = L"XOR";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click_1);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Arial", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button23->Location = System::Drawing::Point(187, 67);
			this->button23->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(38, 28);
			this->button23->TabIndex = 26;
			this->button23->TabStop = false;
			this->button23->Text = L"Bcsp";
			this->button23->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(237, 240);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			this->Leave += gcnew System::EventHandler(this, &Form1::Form1_Leave);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		/*summ(double a, double b); сумма а+б
		difference(double a, double b); разность а-б
		product(double a, double b); произведение а*б
		product(double a); произведение (квадрат) а*а
		quotient(double a, double b); деление а/б
		root(double a, double b); корень а степени 1/б
		root(double a); корень числа
		remain(double a, double b); остаток от деление а%б
		signchange(double a); смена знака */
	private: double ans, a, b, temp;
			 int flag = 0;
			 bool first = false;
			 bool dot = false;

	private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
		double ans;
		if (textBox1->Text == "" || textBox1->Text == "0," || textBox1->Text == "Не число!" || textBox1->Text == "Неверное число!") {
			textBox1->Text = "Не число!";
			textBox1->Text = "";
		}
		else {
			if (flag == 1) {
				b = double::Parse(textBox1->Text);
				ans = summ(a, b);
				showresult(ans);
			}
			else if (flag == 2) {
				b = double::Parse(textBox1->Text);
				ans = difference(a, b);
				showresult(ans);
			}
			else if (flag == 3) {
				b = double::Parse(textBox1->Text);
				ans = product(a, b);
				showresult(ans);
			}
			else if (flag == 4) {
				b = double::Parse(textBox1->Text);
				ans = quotient(a, b);
				showresult(ans);
			}
			else if (flag == 5) {
				b = double::Parse(textBox1->Text);
				ans = expon(a, b);
				showresult(ans);
			}
			else if (flag == 7) {
				b = double::Parse(textBox1->Text);
				if (b == 0) {
					ans = 1;
					showresult(ans);
				}
				else {
					ans = root(a, b);
					showresult(ans);
				}
			}
			else if (flag == 8) {
				b = double::Parse(textBox1->Text);
				ans = remain(a, b);
				showresult(ans);
			}
			else if (flag == 15) {

				b = int::Parse(textBox1->Text);
				ans = xor (a, b);
				showresult(ans);
			}
			else if (flag == 16) {
				b = int::Parse(textBox1->Text);
				ans = or (a, b);
				showresult(ans);
			}
		}
		flag = 0;
		first = false;
		dot = false;
	}

	private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
		clearpanel();
		a = b = ans = 0;
		flag = 0;
		first = false;
		dot = false;
	}

	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		if (flag == 0) {
			if (textBox1->Text == "" || textBox1->Text == "0," || textBox1->Text == "Не число!" || textBox1->Text == "Неверное число!") {
				textBox1->Text = "Неверное число!";
			}
			else {
				temp = double::Parse(textBox1->Text);
				a = temp;
				flag = 1;
				first = false;
			}
		}
		else {
			flag = 1;
			a = double::Parse(textBox1->Text);
			first = false;
		}
	}

	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		if (flag == 0) {
			if (textBox1->Text == "" || textBox1->Text == "0," || textBox1->Text == "Не число!" || textBox1->Text == "Неверное число!") {
				textBox1->Text = "Неверное число!";
			}
			else {
				flag = 2;
				a = double::Parse(textBox1->Text);
				first = false;
			}
		}
		else {
			flag = 2;
			a = double::Parse(textBox1->Text);
			first = false;
		}
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		if (flag == 0) {
			if (textBox1->Text == "" || textBox1->Text == "0," || textBox1->Text == "Не число!" || textBox1->Text == "Неверное число!") {
				textBox1->Text = "Неверное число!";
			}
			else {
				flag = 3;
				a = double::Parse(textBox1->Text);
				first = false;
			}
		}
		else {
			a = double::Parse(textBox1->Text);
			flag = 3;
			first = false;
		}
	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		if (flag == 0) {
			if (textBox1->Text == "" || textBox1->Text == "0," || textBox1->Text == "Не число!" || textBox1->Text == "Неверное число!") {
				textBox1->Text = "Неверное число!";
			}
			else {
				flag = 4;
				a = double::Parse(textBox1->Text);
				first = false;
			}
		}
		else {
			a = double::Parse(textBox1->Text);
			flag = 4;
			first = false;
		}
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
		if (flag == 0) {
			if (textBox1->Text == "" || textBox1->Text == "0," || textBox1->Text == "Не число!" || textBox1->Text == "Неверное число!") {
				textBox1->Text = "Неверное число!";
			}
			else {
				flag = 5;
				a = double::Parse(textBox1->Text);
				first = false;
			}
		}
		else {
			a = double::Parse(textBox1->Text);
			flag = 5;
			first = false;
		}
	}

	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
		if (flag == 0) {
			if (textBox1->Text == "" || textBox1->Text == "0," || textBox1->Text == "Не число!" || textBox1->Text == "Неверное число!") {
				textBox1->Text = "Неверное число!";
			}
			else {
				a = double::Parse(textBox1->Text);
				if (a < 0) {
					textBox1->Text = "Не может быть меньше нуля!";
				}
				else {
					flag = 6;
					ans = root(a);
					showresult(ans);

					first = false;
				}
			}
		}
		else {
			a = double::Parse(textBox1->Text);
			if (a < 0) {
				textBox1->Text = "Не может быть меньше нуля!";
			}
			else {
				flag = 6;
				first = false;
			}
		}
	}
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
		if (flag == 0) {
			if (textBox1->Text == "" || textBox1->Text == "0," || textBox1->Text == "Не число!" || textBox1->Text == "Неверное число!") {
				textBox1->Text = "Неверное число!";
			}
			else {
				a = double::Parse(textBox1->Text);
				if (a < 0) {
					textBox1->Text = "Не может быть меньше нуля!";
				}
				else {
					flag = 7;
					first = false;
				}
			}
		}
		else {
			a = double::Parse(textBox1->Text);
			flag = 7;
			first = false;
		}
	}

	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
		if (flag == 0) {
			if (textBox1->Text == "" || textBox1->Text == "0," || textBox1->Text == "Не число!" || textBox1->Text == "Неверное число!") {
				textBox1->Text = "Неверное число!";
			}
			else {
				flag = 8;
				a = double::Parse(textBox1->Text);
				first = false;
			}
		}
		else {
			a = double::Parse(textBox1->Text);
			flag = 8;
			first = false;
		}
	}

	private: System::Void button18_Click_1(System::Object^  sender, System::EventArgs^  e) { // LOGICAL OR
		if (flag == 0) {
			if (textBox1->Text == "" || textBox1->Text == "0," || textBox1->Text->Contains(",") || textBox1->Text == "Неверное число!" || textBox1->Text == "Не число!" || textBox1->Text == "Не может быть меньше нуля!") {
				textBox1->Text = "Неверное число!";
			}
			else {
				flag = 16;
				a = int::Parse(textBox1->Text);
				first = false;
			}
		}
		else {
			a = int::Parse(textBox1->Text);
			flag = 16;
			first = false;
		}

	}
	private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {  //BackSpace
		if (textBox1->Text == "Неверное число!" || textBox1->Text == "Не число!" || textBox1->Text == "Не может быть меньше нуля!") {
			textBox1->Text = "";
		}
		else {
			String^ text = textBox1->Text;
			if (text != String::Empty) textBox1->Text = text->Substring(0, text->Length - 1);
		}

	}

	private: System::Void button19_Click_1(System::Object^  sender, System::EventArgs^  e) { // LOGICAL XOR
		if (flag == 0) {
			if (textBox1->Text == "" || textBox1->Text == "0," || textBox1->Text->Contains(",") || textBox1->Text == "Неверное число!" || textBox1->Text == "Не число!" || textBox1->Text == "Не может быть меньше нуля!") {
				textBox1->Text = "Неверное число!";
			}
			else {
				flag = 15;
				a = int::Parse(textBox1->Text);
				first = false;
			}
		}
		else {
			a = int::Parse(textBox1->Text);
			flag = 15;
			first = false;
		}
	}

			 //////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "Неверное число!" || textBox1->Text == "Не число!" || textBox1->Text == "Не может быть меньше нуля!") {
			textBox1->Text = "";
		}
		if (flag == 0) {
			if (textBox1->Text == "0") {
				textBox1->Text = button1->Text;
			}
			else textBox1->Text += button1->Text;
		}
		else {
			if (first == false) {
				a = double::Parse(textBox1->Text);
				first = true;
				textBox1->Text = button1->Text;
			}
			else textBox1->Text += button1->Text;
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "Неверное число!" || textBox1->Text == "Не число!" || textBox1->Text == "Не может быть меньше нуля!") {
			textBox1->Text = "";
		}
		if (flag == 0) {
			if (textBox1->Text == "0") {
				textBox1->Text = button2->Text;
			}
			else textBox1->Text += button2->Text;
		}
		else {
			if (first == false) {
				a = double::Parse(textBox1->Text);
				first = true;
				textBox1->Text = button2->Text;
			}
			else textBox1->Text += button2->Text;
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "Неверное число!" || textBox1->Text == "Не число!" || textBox1->Text == "Не может быть меньше нуля!") {
			textBox1->Text = "";
		}
		if (flag == 0) {
			if (textBox1->Text == "0") {
				textBox1->Text = button3->Text;
			}
			else textBox1->Text += button3->Text;
		}
		else {
			if (first == false) {
				a = double::Parse(textBox1->Text);
				textBox1->Text = button3->Text;
				first = true;
			}
			else textBox1->Text += button3->Text;
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "Неверное число!" || textBox1->Text == "Не число!" || textBox1->Text == "Не может быть меньше нуля!") {
			textBox1->Text = "";
		}
		if (flag == 0) {
			if (textBox1->Text == "0") {
				textBox1->Text = button4->Text;
			}
			else textBox1->Text += button4->Text;
		}
		else {
			if (first == false) {
				a = double::Parse(textBox1->Text);
				textBox1->Text = button4->Text;
				first = true;
			}
			else textBox1->Text += button4->Text;
		}
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "Неверное число!" || textBox1->Text == "Не число!" || textBox1->Text == "Не может быть меньше нуля!") {
			textBox1->Text = "";
		}
		if (flag == 0) {
			if (textBox1->Text == "0") {
				textBox1->Text = button5->Text;
			}
			else textBox1->Text += button5->Text;
		}
		else {
			if (first == false) {
				a = double::Parse(textBox1->Text);
				textBox1->Text = button5->Text;
				first = true;
			}
			else textBox1->Text += button5->Text;
		}
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "Неверное число!" || textBox1->Text == "Не число!" || textBox1->Text == "Не может быть меньше нуля!") {
			textBox1->Text = "";
		}
		if (flag == 0) {
			if (textBox1->Text == "0") {
				textBox1->Text = button6->Text;
			}
			else textBox1->Text += button6->Text;
		}
		else {
			if (first == false) {
				a = double::Parse(textBox1->Text);
				textBox1->Text = button6->Text;
				first = true;
			}
			else textBox1->Text += button6->Text;
		}

	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "Неверное число!" || textBox1->Text == "Не число!" || textBox1->Text == "Не может быть меньше нуля!") {
			textBox1->Text = "";
		}
		if (flag == 0) {
			if (textBox1->Text == "0") {
				textBox1->Text = button7->Text;
			}
			else textBox1->Text += button7->Text;
		}
		else {
			if (first == false) {
				a = double::Parse(textBox1->Text);
				textBox1->Text = button7->Text;
				first = true;
			}
			else textBox1->Text += button7->Text;
		}
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "Неверное число!" || textBox1->Text == "Не число!" || textBox1->Text == "Не может быть меньше нуля!") {
			textBox1->Text = "";
		}
		if (flag == 0) {
			if (textBox1->Text == "0") {
				textBox1->Text = button8->Text;
			}
			else textBox1->Text += button8->Text;
		}
		else {
			if (first == false) {
				a = double::Parse(textBox1->Text);
				textBox1->Text = button8->Text;
				first = true;
			}
			else textBox1->Text += button8->Text;
		}
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "Неверное число!" || textBox1->Text == "Не число!" || textBox1->Text == "Не может быть меньше нуля!") {
			textBox1->Text = "";
		}
		if (flag == 0) {
			if (textBox1->Text == "0") {
				textBox1->Text = button9->Text;
			}
			else textBox1->Text += button9->Text;
		}
		else {
			if (first == false) {
				a = double::Parse(textBox1->Text);
				textBox1->Text = button9->Text;
				first = true;
			}
			else textBox1->Text += button9->Text;
		}
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "Неверное число!" || textBox1->Text == "Не число!" || textBox1->Text == "Не может быть меньше нуля!") {
			textBox1->Text = "";
		}
		if (flag != 0) {
			if (first == false) {
				a = double::Parse(textBox1->Text);
				textBox1->Text = "0";
				first = true;
			}
			else {
				textBox1->Text += "0";
			}
		}
		if (flag == 0) {
			if (textBox1->Text == "0") {
				textBox1->Text = "0";
			}
			else {
				textBox1->Text += "0";
			}
		}
	}


	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "Неверное число!" || textBox1->Text == "Не число!" || textBox1->Text == "Не может быть меньше нуля!") {
			textBox1->Text = "";
		}
		if (textBox1->Text->Contains(",")) {
			textBox1->Text = textBox1->Text;
			dot = true;
		}
		if (dot == false) {
			if (flag != 0) {
				if (first == false) {
					a = double::Parse(textBox1->Text);
					textBox1->Text = ("0,");
					dot = true;
					first = true;
				}
				else {
					textBox1->Text += ",";
					dot = true;
				}
			}
			else {
				if (textBox1->Text == "0") {
					textBox1->Text += ",";
				}
				else textBox1->Text += ",";
			}
		}
		else {
			textBox1->Text = textBox1->Text;
		}
	}

	private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "Неверное число!" || textBox1->Text == "Не число!" || textBox1->Text == "Не может быть меньше нуля!") {
			textBox1->Text = "";
		}
		if (textBox1->Text == "") {
			MessageBox::Show("Для смены знака введите число!");
		}
		else {
			b = double::Parse(textBox1->Text);
			if (b > 0) {
				textBox1->Text = "-" + textBox1->Text;
			}
			else if (b < 0) {
				textBox1->Text = Convert::ToString(-b);
			}
		}
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("vk.com/golifox");
	}
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		this->Icon = gcnew System::Drawing::Icon(L"..\\icon.ico");
	}
	private: bool isDigit = false;

	private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::D1 || e->KeyCode == Keys::NumPad1) {
			button1->PerformClick();
			isDigit = true;
		}
		else if (e->KeyCode == Keys::D2 || e->KeyCode == Keys::NumPad2) {
			button2->PerformClick();
			isDigit = true;

		}
		else if (e->KeyCode == Keys::D3 || e->KeyCode == Keys::NumPad3) {
			button3->PerformClick();
			isDigit = true;
		}
		else if (e->KeyCode == Keys::D4 || e->KeyCode == Keys::NumPad4) {
			button4->PerformClick();
			isDigit = true;
		}
		else if (e->KeyCode == Keys::D5 || e->KeyCode == Keys::NumPad5) {
			button5->PerformClick();
			isDigit = true;
		}
		else if (e->KeyCode == Keys::D6 || e->KeyCode == Keys::NumPad6) {
			button6->PerformClick();
			isDigit = true;
		}
		else if (e->KeyCode == Keys::D7 || e->KeyCode == Keys::NumPad7) {
			button7->PerformClick();
			isDigit = true;
		}
		else if (e->KeyCode == Keys::D8 || e->KeyCode == Keys::NumPad8) {
			button8->PerformClick();
			isDigit = true;
		}
		else if (e->KeyCode == Keys::D9 || e->KeyCode == Keys::NumPad9) {
			button9->PerformClick();
			isDigit = true;
		}
		else if (e->KeyCode == Keys::D0 || e->KeyCode == Keys::NumPad0) {
			button10->PerformClick();
			isDigit = true;
		}
		else if (e->KeyCode == Keys::Subtract) { // вычитание
			button13->PerformClick();
			isDigit = true;
		}
		else if (e->KeyCode == Keys::Add) { //сложение
			button12->PerformClick();
			isDigit = true;
		}
		else if (e->KeyCode == Keys::Space || e->KeyCode == Keys::Enter) { //равно
			button21->PerformClick();
			isDigit = true;
		}
		else if (e->KeyCode == Keys::Divide) { //деление
		
			button15->PerformClick();
			isDigit = true;
		}
		else if (e->KeyCode == Keys::Multiply) {
			
			button14->PerformClick();
			isDigit = true;
		}
		else if (e->KeyCode == Keys::Delete || e->KeyCode == Keys::Clear) {
			
			button20->PerformClick();
			isDigit = true;
		}
		else if (e->KeyCode == Keys::Back) {
			
			button23->PerformClick();
			isDigit = true;
		}
		else if (e->KeyCode == Keys::Decimal) {
			button11->PerformClick();
			isDigit = true;
		}
		this->Focus();
	}
	private: System::Void Form1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (isDigit == true) {
			e->Handled = true;
		}
		isDigit = false;
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		this->Focus();
	}
	private: System::Void Form1_Leave(System::Object^  sender, System::EventArgs^  e) {
		if (this->Focused == false) {
			this->Focus();
		}
		
	}
};
}


