#pragma once
/*
GitHub: https://github.com/zen77/Morse-Code-L.O.L.
Copyright © 2016 T Malo / Zen77
*/
#include "About.h"
#include "MorseConverter.h"
#include <msclr\marshal_cppstd.h>

namespace Morse_Code_L_O_L {

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
	private: System::Windows::Forms::Label^  Label_text;
	private: System::Windows::Forms::Label^  Label_morsecode;
	private: System::Windows::Forms::Label^  Label_morsecodelol;
	private: System::Windows::Forms::TextBox^  TextBox_plainText;

	protected:

	protected:

	protected:



	private: System::Windows::Forms::Button^  Button_updateText;
	private: System::Windows::Forms::Button^  Button_updateMorse;
	private: System::Windows::Forms::Button^  Button_updateMorselol;







	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  MenuItem_about;
	private: System::Windows::Forms::TextBox^  TextBox_morseCode;
	private: System::Windows::Forms::TextBox^  TextBox_morseCodelol;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Label_text = (gcnew System::Windows::Forms::Label());
			this->Label_morsecode = (gcnew System::Windows::Forms::Label());
			this->Label_morsecodelol = (gcnew System::Windows::Forms::Label());
			this->TextBox_plainText = (gcnew System::Windows::Forms::TextBox());
			this->Button_updateText = (gcnew System::Windows::Forms::Button());
			this->Button_updateMorse = (gcnew System::Windows::Forms::Button());
			this->Button_updateMorselol = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->MenuItem_about = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TextBox_morseCode = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_morseCodelol = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Label_text
			// 
			this->Label_text->AutoSize = true;
			this->Label_text->BackColor = System::Drawing::Color::Transparent;
			this->Label_text->ForeColor = System::Drawing::Color::White;
			this->Label_text->Location = System::Drawing::Point(13, 27);
			this->Label_text->Name = L"Label_text";
			this->Label_text->Size = System::Drawing::Size(37, 16);
			this->Label_text->TabIndex = 0;
			this->Label_text->Text = L"Text:";
			// 
			// Label_morsecode
			// 
			this->Label_morsecode->AutoSize = true;
			this->Label_morsecode->BackColor = System::Drawing::Color::Transparent;
			this->Label_morsecode->ForeColor = System::Drawing::Color::White;
			this->Label_morsecode->Location = System::Drawing::Point(13, 224);
			this->Label_morsecode->Name = L"Label_morsecode";
			this->Label_morsecode->Size = System::Drawing::Size(85, 16);
			this->Label_morsecode->TabIndex = 1;
			this->Label_morsecode->Text = L"Morse Code:";
			// 
			// Label_morsecodelol
			// 
			this->Label_morsecodelol->AutoSize = true;
			this->Label_morsecodelol->BackColor = System::Drawing::Color::Transparent;
			this->Label_morsecodelol->ForeColor = System::Drawing::Color::White;
			this->Label_morsecodelol->Location = System::Drawing::Point(13, 438);
			this->Label_morsecodelol->Name = L"Label_morsecodelol";
			this->Label_morsecodelol->Size = System::Drawing::Size(121, 16);
			this->Label_morsecodelol->TabIndex = 2;
			this->Label_morsecodelol->Text = L"Morse Code L.O.L.:";
			// 
			// TextBox_plainText
			// 
			this->TextBox_plainText->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->TextBox_plainText->Location = System::Drawing::Point(12, 55);
			this->TextBox_plainText->Multiline = true;
			this->TextBox_plainText->Name = L"TextBox_plainText";
			this->TextBox_plainText->Size = System::Drawing::Size(607, 156);
			this->TextBox_plainText->TabIndex = 3;
			this->TextBox_plainText->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox_plainText_TextChanged);
			// 
			// Button_updateText
			// 
			this->Button_updateText->Location = System::Drawing::Point(489, 217);
			this->Button_updateText->Name = L"Button_updateText";
			this->Button_updateText->Size = System::Drawing::Size(130, 23);
			this->Button_updateText->TabIndex = 6;
			this->Button_updateText->Text = L"Update Text";
			this->Button_updateText->UseVisualStyleBackColor = true;
			this->Button_updateText->Click += gcnew System::EventHandler(this, &MyForm::Button_updateText_Click);
			// 
			// Button_updateMorse
			// 
			this->Button_updateMorse->Location = System::Drawing::Point(492, 431);
			this->Button_updateMorse->Name = L"Button_updateMorse";
			this->Button_updateMorse->Size = System::Drawing::Size(130, 23);
			this->Button_updateMorse->TabIndex = 7;
			this->Button_updateMorse->Text = L"Update Morse";
			this->Button_updateMorse->UseVisualStyleBackColor = true;
			this->Button_updateMorse->Click += gcnew System::EventHandler(this, &MyForm::Button_updateMorse_Click);
			// 
			// Button_updateMorselol
			// 
			this->Button_updateMorselol->Location = System::Drawing::Point(489, 634);
			this->Button_updateMorselol->Name = L"Button_updateMorselol";
			this->Button_updateMorselol->Size = System::Drawing::Size(133, 23);
			this->Button_updateMorselol->TabIndex = 8;
			this->Button_updateMorselol->Text = L"Update Morse LOL";
			this->Button_updateMorselol->UseVisualStyleBackColor = true;
			this->Button_updateMorselol->Click += gcnew System::EventHandler(this, &MyForm::Button_updateMorselol_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Silver;
			this->menuStrip1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuStrip1.BackgroundImage")));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->MenuItem_about });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(634, 27);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// MenuItem_about
			// 
			this->MenuItem_about->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->MenuItem_about->ForeColor = System::Drawing::Color::White;
			this->MenuItem_about->Name = L"MenuItem_about";
			this->MenuItem_about->Size = System::Drawing::Size(62, 23);
			this->MenuItem_about->Text = L"About";
			this->MenuItem_about->Click += gcnew System::EventHandler(this, &MyForm::MenuItem_about_Click);
			// 
			// TextBox_morseCode
			// 
			this->TextBox_morseCode->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->TextBox_morseCode->Location = System::Drawing::Point(16, 255);
			this->TextBox_morseCode->Multiline = true;
			this->TextBox_morseCode->Name = L"TextBox_morseCode";
			this->TextBox_morseCode->Size = System::Drawing::Size(607, 156);
			this->TextBox_morseCode->TabIndex = 10;
			this->TextBox_morseCode->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox_morseCode_TextChanged);
			// 
			// TextBox_morseCodelol
			// 
			this->TextBox_morseCodelol->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->TextBox_morseCodelol->Location = System::Drawing::Point(15, 472);
			this->TextBox_morseCodelol->Multiline = true;
			this->TextBox_morseCodelol->Name = L"TextBox_morseCodelol";
			this->TextBox_morseCodelol->Size = System::Drawing::Size(607, 156);
			this->TextBox_morseCodelol->TabIndex = 11;
			this->TextBox_morseCodelol->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox_morseCodelol_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(634, 669);
			this->Controls->Add(this->TextBox_morseCodelol);
			this->Controls->Add(this->TextBox_morseCode);
			this->Controls->Add(this->Button_updateMorselol);
			this->Controls->Add(this->Button_updateMorse);
			this->Controls->Add(this->Button_updateText);
			this->Controls->Add(this->TextBox_plainText);
			this->Controls->Add(this->Label_morsecodelol);
			this->Controls->Add(this->Label_morsecode);
			this->Controls->Add(this->Label_text);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(650, 708);
			this->MinimumSize = System::Drawing::Size(650, 708);
			this->Name = L"MyForm";
			this->Text = L"Morse Code L.O.L.";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MenuItem_about_Click(System::Object^  sender, System::EventArgs^  e) {
		About ^myAbout = gcnew About();
		myAbout->Show();
	}
private: System::Void TextBox_plainText_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void TextBox_morseCode_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void TextBox_morseCodelol_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Button_updateText_Click(System::Object^  sender, System::EventArgs^  e) {
	MorseConverter morseConverter;

	System::String^ systemString = this->TextBox_plainText->Text;

	msclr::interop::marshal_context context;
	std::string standardString = context.marshal_as<std::string>(systemString);

	this->TextBox_morseCode->Text = context.marshal_as<System::String^>(morseConverter.textTomores(standardString));

	this->TextBox_morseCodelol->Text = context.marshal_as<System::String^>(morseConverter.moresWritten(morseConverter.textTomores(standardString)));

}
private: System::Void Button_updateMorse_Click(System::Object^  sender, System::EventArgs^  e) {
	MorseConverter morseConverter;

	System::String^ systemString = this->TextBox_morseCode->Text;

	msclr::interop::marshal_context context;
	std::string standardString = context.marshal_as<std::string>(systemString);

	this->TextBox_morseCodelol->Text = context.marshal_as<System::String^>(morseConverter.moresWritten(standardString));

	this->TextBox_plainText->Text = context.marshal_as < System::String ^>(morseConverter.moresTotext(standardString));

}

private: System::Void Button_updateMorselol_Click(System::Object^  sender, System::EventArgs^  e) {
	MorseConverter morseConverter;

	System::String^ systemString = this->TextBox_morseCodelol->Text;

	msclr::interop::marshal_context context;
	std::string standardString = context.marshal_as<std::string>(systemString);

	this->TextBox_morseCode->Text = context.marshal_as < System::String ^>(morseConverter.moresWrittenReverse(standardString));

	this->TextBox_plainText->Text = context.marshal_as < System::String ^>(morseConverter.moresTotext(morseConverter.moresWrittenReverse(standardString)));

}
};
}
