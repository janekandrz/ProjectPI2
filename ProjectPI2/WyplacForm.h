#include"user.h"


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
	/// Podsumowanie informacji o WyplacForm
	/// </summary>
	public ref class WyplacForm : public System::Windows::Forms::Form
	{
	public:
		WyplacForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczy�� wszystkie u�ywane zasoby.
		/// </summary>
		~WyplacForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonCancel;
	protected:
	private: System::Windows::Forms::Button^ buttonOK;
	private: System::Windows::Forms::Label^ labelKwota;
	private: System::Windows::Forms::TextBox^ TBkwota;
	private: System::Windows::Forms::Label^ Wyp�a�;



	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs�ugi projektanta � nie nale�y modyfikowa�
		/// jej zawarto�ci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->labelKwota = (gcnew System::Windows::Forms::Label());
			this->TBkwota = (gcnew System::Windows::Forms::TextBox());
			this->Wyp�a� = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(376, 185);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(75, 23);
			this->buttonCancel->TabIndex = 0;
			this->buttonCancel->Text = L"Cancel";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &WyplacForm::buttonCancel_Click);
			// 
			// buttonOK
			// 
			this->buttonOK->Location = System::Drawing::Point(297, 185);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(75, 23);
			this->buttonOK->TabIndex = 1;
			this->buttonOK->Text = L"OK";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &WyplacForm::buttonOK_Click);
			// 
			// labelKwota
			// 
			this->labelKwota->AutoSize = true;
			this->labelKwota->Location = System::Drawing::Point(9, 78);
			this->labelKwota->Name = L"labelKwota";
			this->labelKwota->Size = System::Drawing::Size(46, 16);
			this->labelKwota->TabIndex = 2;
			this->labelKwota->Text = L"Kwota ";
			this->labelKwota->Click += gcnew System::EventHandler(this, &WyplacForm::label1_Click);
			// 
			// TBkwota
			// 
			this->TBkwota->Location = System::Drawing::Point(12, 97);
			this->TBkwota->Name = L"TBkwota";
			this->TBkwota->Size = System::Drawing::Size(439, 22);
			this->TBkwota->TabIndex = 3;
			this->TBkwota->TextChanged += gcnew System::EventHandler(this, &WyplacForm::TBkwota_TextChanged);
			// 
			// Wyp�a�
			// 
			this->Wyp�a�->AutoSize = true;
			this->Wyp�a�->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Wyp�a�->Location = System::Drawing::Point(180, 31);
			this->Wyp�a�->Name = L"Wyp�a�";
			this->Wyp�a�->Size = System::Drawing::Size(91, 29);
			this->Wyp�a�->TabIndex = 4;
			this->Wyp�a�->Text = L"Wyp�a�";
			// 
			// WyplacForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(463, 227);
			this->Controls->Add(this->Wyp�a�);
			this->Controls->Add(this->TBkwota);
			this->Controls->Add(this->labelKwota);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->buttonCancel);
			this->MaximumSize = System::Drawing::Size(481, 274);
			this->MinimumSize = System::Drawing::Size(481, 274);
			this->Name = L"WyplacForm";
			this->Text = L"WyplacForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TBkwota_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//zrobic jakos konwertowanie wpisanego i dzialanie na bazie danych 

	}
	private: System::Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void buttonOK_Click(System::Object^ sender, System::EventArgs^ e) {
		}
	};
};