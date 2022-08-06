#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace slideBarControl {

	/// <summary>
	/// Summary for MyUserControl
	/// </summary>
	public ref class MyUserControl : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl(void)
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
		~MyUserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblCounterText;
	private: System::Windows::Forms::TrackBar^ trackBarCounter;


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
			this->lblCounterText = (gcnew System::Windows::Forms::Label());
			this->trackBarCounter = (gcnew System::Windows::Forms::TrackBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarCounter))->BeginInit();
			this->SuspendLayout();
			// 
			// lblCounterText
			// 
			this->lblCounterText->AutoSize = true;
			this->lblCounterText->Location = System::Drawing::Point(3, 0);
			this->lblCounterText->Name = L"lblCounterText";
			this->lblCounterText->Size = System::Drawing::Size(68, 12);
			this->lblCounterText->TabIndex = 0;
			this->lblCounterText->Text = L"CounterText";
			// 
			// trackBarCounter
			// 
			this->trackBarCounter->Location = System::Drawing::Point(0, 27);
			this->trackBarCounter->Maximum = 255;
			this->trackBarCounter->Name = L"trackBarCounter";
			this->trackBarCounter->Size = System::Drawing::Size(388, 45);
			this->trackBarCounter->TabIndex = 1;
			this->trackBarCounter->Scroll += gcnew System::EventHandler(this, &MyUserControl::trackBarCounter_Scroll);
			// 
			// MyUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->trackBarCounter);
			this->Controls->Add(this->lblCounterText);
			this->Name = L"MyUserControl";
			this->Size = System::Drawing::Size(474, 109);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarCounter))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	public:int GetCounter() {
		return trackBarCounter->Value;
	}
	public:property String^ CounterText {
		String^ get() {
			return lblCounterText->Text;
		}
		void set(String^ text) {
			lblCounterText->Text = text;
		}
	}
	public: event EventHandler^ ValueChanged;
	private: System::Void trackBarCounter_Scroll(System::Object^ sender, System::EventArgs^ e) {
		ValueChanged(this, EventArgs::Empty);
	}
	};
}
