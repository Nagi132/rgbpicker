#pragma once

namespace RGBSlider {

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

	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtR;
	private: System::Windows::Forms::TextBox^ txtG;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtB;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ pnlColor;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: slideBarControl::MyUserControl^ trackBarR;
	private: slideBarControl::MyUserControl^ trackBarG;
	private: slideBarControl::MyUserControl^ trackBarB;



	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtR = (gcnew System::Windows::Forms::TextBox());
			this->txtG = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtB = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pnlColor = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->trackBarR = (gcnew slideBarControl::MyUserControl());
			this->trackBarG = (gcnew slideBarControl::MyUserControl());
			this->trackBarB = (gcnew slideBarControl::MyUserControl());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(414, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 19);
			this->label1->TabIndex = 3;
			this->label1->Text = L"R:";
			// 
			// txtR
			// 
			this->txtR->Location = System::Drawing::Point(441, 39);
			this->txtR->Name = L"txtR";
			this->txtR->ReadOnly = true;
			this->txtR->Size = System::Drawing::Size(100, 19);
			this->txtR->TabIndex = 4;
			// 
			// txtG
			// 
			this->txtG->Location = System::Drawing::Point(441, 130);
			this->txtG->Name = L"txtG";
			this->txtG->ReadOnly = true;
			this->txtG->Size = System::Drawing::Size(100, 19);
			this->txtG->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::Green;
			this->label2->Location = System::Drawing::Point(414, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 19);
			this->label2->TabIndex = 5;
			this->label2->Text = L"G:";
			// 
			// txtB
			// 
			this->txtB->Location = System::Drawing::Point(441, 214);
			this->txtB->Name = L"txtB";
			this->txtB->ReadOnly = true;
			this->txtB->Size = System::Drawing::Size(100, 19);
			this->txtB->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::Blue;
			this->label3->Location = System::Drawing::Point(414, 214);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 19);
			this->label3->TabIndex = 7;
			this->label3->Text = L"B:";
			// 
			// pnlColor
			// 
			this->pnlColor->BackColor = System::Drawing::Color::Black;
			this->pnlColor->Location = System::Drawing::Point(12, 264);
			this->pnlColor->Name = L"pnlColor";
			this->pnlColor->Size = System::Drawing::Size(576, 115);
			this->pnlColor->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 406);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 83);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Copy HTML";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(231, 406);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 83);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Copy RGB";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(441, 406);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(147, 83);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Reset";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// trackBarR
			// 
			this->trackBarR->CounterText = L"Red";
			this->trackBarR->Location = System::Drawing::Point(6, 12);
			this->trackBarR->Name = L"trackBarR";
			this->trackBarR->Size = System::Drawing::Size(429, 90);
			this->trackBarR->TabIndex = 0;
			this->trackBarR->ValueChanged += gcnew System::EventHandler(this, &MyForm::myUserControl1_ValueChanged);
			// 
			// trackBarG
			// 
			this->trackBarG->CounterText = L"Green";
			this->trackBarG->Location = System::Drawing::Point(6, 97);
			this->trackBarG->Name = L"trackBarG";
			this->trackBarG->Size = System::Drawing::Size(429, 90);
			this->trackBarG->TabIndex = 13;
			this->trackBarG->ValueChanged += gcnew System::EventHandler(this, &MyForm::myUserControl1_ValueChanged);
			// 
			// trackBarB
			// 
			this->trackBarB->CounterText = L"Blue";
			this->trackBarB->Location = System::Drawing::Point(6, 177);
			this->trackBarB->Name = L"trackBarB";
			this->trackBarB->Size = System::Drawing::Size(429, 90);
			this->trackBarB->TabIndex = 14;
			this->trackBarB->ValueChanged += gcnew System::EventHandler(this, &MyForm::myUserControl1_ValueChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(598, 493);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pnlColor);
			this->Controls->Add(this->txtB);
			this->Controls->Add(this->txtG);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtR);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->trackBarB);
			this->Controls->Add(this->trackBarG);
			this->Controls->Add(this->trackBarR);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Color color;
	private: System::Void myUserControl1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

		color = Color::FromArgb(255, trackBarR->GetCounter(), trackBarG->GetCounter(), trackBarB->GetCounter());
		pnlColor->BackColor = color;
		txtR->Text = color.R.ToString();
		txtG->Text = color.G.ToString();
		txtB->Text = color.B.ToString();

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Restart();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Clipboard::SetText(ColorTranslator::ToHtml(color));
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Clipboard::SetText(color.R.ToString() + ", " + color.G.ToString() + ", " + color.B.ToString());
	}
};
}
