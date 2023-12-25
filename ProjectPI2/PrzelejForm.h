#include"user.h"
#include <stdio.h>

#pragma once

namespace ProjectPI2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Podsumowanie informacji o PrzelejForm
	/// </summary>
	public ref class PrzelejForm : public System::Windows::Forms::Form
	{
	public:
		PrzelejForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~PrzelejForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonOK;
	private: System::Windows::Forms::Button^ buttonCancel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TBodbiorca;
	private: System::Windows::Forms::TextBox^ TBkwota;


	private: System::Windows::Forms::Label^ label3;
	protected:

	protected:


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TBodbiorca = (gcnew System::Windows::Forms::TextBox());
			this->TBkwota = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonOK
			// 
			this->buttonOK->Location = System::Drawing::Point(321, 222);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(75, 23);
			this->buttonOK->TabIndex = 0;
			this->buttonOK->Text = L"OK";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &PrzelejForm::buttonOK_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(404, 222);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(75, 23);
			this->buttonCancel->TabIndex = 1;
			this->buttonCancel->Text = L"Cancel";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &PrzelejForm::buttonCancel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"odbiorca ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"kwota ";
			// 
			// TBodbiorca
			// 
			this->TBodbiorca->Location = System::Drawing::Point(16, 89);
			this->TBodbiorca->Name = L"TBodbiorca";
			this->TBodbiorca->Size = System::Drawing::Size(463, 22);
			this->TBodbiorca->TabIndex = 4;
			// 
			// TBkwota
			// 
			this->TBkwota->Location = System::Drawing::Point(13, 137);
			this->TBkwota->Name = L"TBkwota";
			this->TBkwota->Size = System::Drawing::Size(466, 22);
			this->TBkwota->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(185, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 29);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Przelew";
			// 
			// PrzelejForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(491, 259);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TBkwota);
			this->Controls->Add(this->TBodbiorca);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonOK);
			this->MaximumSize = System::Drawing::Size(509, 306);
			this->MinimumSize = System::Drawing::Size(509, 306);
			this->Name = L"PrzelejForm";
			this->Text = L"  ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void buttonOK_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ newkwota = this->TBkwota->Text;
	String^ newodbiorca = this->TBodbiorca->Text;
	if (newkwota == "") {
		MessageBox::Show("Wprowadz kwote");
	}
	else if(newodbiorca == "") {
		MessageBox::Show("Wprowadz odbiorce");
	}
	
	else {
		int id_rec = Convert::ToInt32(newodbiorca);
		int kwota = Convert::ToInt32(newkwota);
		if (kwota < 0) {
			MessageBox::Show("Wprowadz dodatnia kwote");
		}
		else if (kwota > User::saldo) {
			MessageBox::Show("Nie masz tyle srodkow");
		}
		else if (id_rec == User::id) {
			MessageBox::Show("Nie mozesz przelac samemu sobie");
		}
		else {
			String^ constring = "Data Source=localhost\\sqlexpress;Initial Catalog=dane;Integrated Security=True";			SqlConnection^ conDataBase = gcnew SqlConnection(constring);
			String^ query = "BEGIN TRANSACTION; " +
							"UPDATE Users SET Saldo = Saldo - @kwota WHERE id = @id1; " +
							"UPDATE Users SET Saldo = Saldo + @kwota WHERE id = @id2; " +
							"COMMIT;";			SqlCommand^ cmdDataBase = gcnew SqlCommand(query, conDataBase);
			cmdDataBase->Parameters->AddWithValue("@kwota", kwota);
			cmdDataBase->Parameters->AddWithValue("@id1", User::id);
			cmdDataBase->Parameters->AddWithValue("@id2", id_rec);
		
			SqlDataReader^ myReader;
			try {
				conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				User:: saldo -= kwota;
				MessageBox::Show("Przelano");
				this->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}	}
}
};
}
