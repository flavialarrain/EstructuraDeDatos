#pragma once
#include "Ccomplejo.h"
#include <iostream>
#include <msclr\marshal_cppstd.h>

namespace pyecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtreal1;
	private: System::Windows::Forms::TextBox^  txtimag1;
	private: System::Windows::Forms::TextBox^  txtreal2;
	private: System::Windows::Forms::TextBox^  txtimag2;
	private: System::Windows::Forms::TextBox^  txtREAL;
	private: System::Windows::Forms::TextBox^  txtIMAG;


	protected: 





	private: System::Windows::Forms::Button^  Sumar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;

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
			this->txtreal1 = (gcnew System::Windows::Forms::TextBox());
			this->txtimag1 = (gcnew System::Windows::Forms::TextBox());
			this->txtreal2 = (gcnew System::Windows::Forms::TextBox());
			this->txtimag2 = (gcnew System::Windows::Forms::TextBox());
			this->txtREAL = (gcnew System::Windows::Forms::TextBox());
			this->txtIMAG = (gcnew System::Windows::Forms::TextBox());
			this->Sumar1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtreal1
			// 
			this->txtreal1->Location = System::Drawing::Point(224, 83);
			this->txtreal1->Name = L"txtreal1";
			this->txtreal1->Size = System::Drawing::Size(84, 20);
			this->txtreal1->TabIndex = 0;
			this->txtreal1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// txtimag1
			// 
			this->txtimag1->Location = System::Drawing::Point(225, 109);
			this->txtimag1->Name = L"txtimag1";
			this->txtimag1->Size = System::Drawing::Size(83, 20);
			this->txtimag1->TabIndex = 1;
			// 
			// txtreal2
			// 
			this->txtreal2->Location = System::Drawing::Point(225, 151);
			this->txtreal2->Name = L"txtreal2";
			this->txtreal2->Size = System::Drawing::Size(83, 20);
			this->txtreal2->TabIndex = 2;
			// 
			// txtimag2
			// 
			this->txtimag2->Location = System::Drawing::Point(225, 177);
			this->txtimag2->Name = L"txtimag2";
			this->txtimag2->Size = System::Drawing::Size(86, 20);
			this->txtimag2->TabIndex = 3;
			// 
			// txtREAL
			// 
			this->txtREAL->Location = System::Drawing::Point(225, 219);
			this->txtREAL->Name = L"txtREAL";
			this->txtREAL->Size = System::Drawing::Size(86, 20);
			this->txtREAL->TabIndex = 4;
			// 
			// txtIMAG
			// 
			this->txtIMAG->Location = System::Drawing::Point(225, 245);
			this->txtIMAG->Name = L"txtIMAG";
			this->txtIMAG->Size = System::Drawing::Size(86, 20);
			this->txtIMAG->TabIndex = 5;
			// 
			// Sumar1
			// 
			this->Sumar1->Location = System::Drawing::Point(124, 291);
			this->Sumar1->Name = L"Sumar1";
			this->Sumar1->Size = System::Drawing::Size(85, 21);
			this->Sumar1->TabIndex = 6;
			this->Sumar1->Text = L"Sumar";
			this->Sumar1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(170, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Real";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(164, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Imaginario";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(97, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Complejo 1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(170, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Real";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(154, 180);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Imaginario";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(170, 219);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Real";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(154, 245);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Imaginario";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(97, 137);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Complejo 2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(110, 202);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(34, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Suma";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(372, 357);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Sumar1);
			this->Controls->Add(this->txtIMAG);
			this->Controls->Add(this->txtREAL);
			this->Controls->Add(this->txtimag2);
			this->Controls->Add(this->txtreal2);
			this->Controls->Add(this->txtimag1);
			this->Controls->Add(this->txtreal1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {}
			 private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 Ccomplejo c1,c2;
				 c1.Set_real(System::Convert::ToDouble(txtreal1->Text));
					 c2.Set_real(System::Convert::ToDouble(txtreal2->Text));
					 c1.Set_imag(System::Convert::ToDouble(txtimag1->Text));
					 c1.Set_imag(System::Convert::ToDouble(txtimag2->Text));
					 double sumareal, sumaimag;
					 sumareal=c1.Get_real()+c2.Get_real();
					  sumaimag=c1.Get_imag()+c2.Get_imag();
					  txtREAL->TextSystem::Convert::ToString(sumareal);
					  txtIMAG->TextSystem::Convert::ToString(sumaimag);
			 }
	
	};
}

