

#pragma once
#include"User.h"
#include"loginForm.h"
namespace ProjectPI2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Podsumowanie informacji o WplacForm
	/// </summary>
	/// 
	
	
	public ref class WplacForm : public System::Windows::Forms::Form
	{
	public:
		
		WplacForm(void)
		{
			InitializeComponent();
		}

		/*void SetUser(User^ user) {
			currentUser = user;
		};*/
	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~WplacForm()
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
	private: System::Windows::Forms::Label^ Wyp³aæ;



	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->labelKwota = (gcnew System::Windows::Forms::Label());
			this->TBkwota = (gcnew System::Windows::Forms::TextBox());
			this->Wyp³aæ = (gcnew System::Windows::Forms::Label());
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
			this->buttonCancel->Click += gcnew System::EventHandler(this, &WplacForm::buttonCancel_Click);
			// 
			// buttonOK
			// 
			this->buttonOK->Location = System::Drawing::Point(297, 185);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(75, 23);
			this->buttonOK->TabIndex = 1;
			this->buttonOK->Text = L"OK";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &WplacForm::buttonOK_Click);
			// 
			// labelKwota
			// 
			this->labelKwota->AutoSize = true;
			this->labelKwota->Location = System::Drawing::Point(9, 78);
			this->labelKwota->Name = L"labelKwota";
			this->labelKwota->Size = System::Drawing::Size(46, 16);
			this->labelKwota->TabIndex = 2;
			this->labelKwota->Text = L"Kwota ";
			// 
			// TBkwota
			// 
			this->TBkwota->Location = System::Drawing::Point(12, 97);
			this->TBkwota->Name = L"TBkwota";
			this->TBkwota->Size = System::Drawing::Size(439, 22);
			this->TBkwota->TabIndex = 3;
			// 
			// Wyp³aæ
			// 
			this->Wyp³aæ->AutoSize = true;
			this->Wyp³aæ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Wyp³aæ->Location = System::Drawing::Point(180, 31);
			this->Wyp³aæ->Name = L"Wp³aæ";
			this->Wyp³aæ->Size = System::Drawing::Size(91, 29);
			this->Wyp³aæ->TabIndex = 4;
			this->Wyp³aæ->Text = L"Wp³aæ";
			// 
			// WplacForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(463, 227);
			this->Controls->Add(this->Wyp³aæ);
			this->Controls->Add(this->TBkwota);
			this->Controls->Add(this->labelKwota);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->buttonCancel);
			this->MaximumSize = System::Drawing::Size(481, 274);
			this->MinimumSize = System::Drawing::Size(481, 274);
			this->Name = L"WplacForm";
			this->Text = L"WplacForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void buttonOK_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ newkwota = this->TBkwota->Text;
		if (newkwota == "") {
			MessageBox::Show("Wprowadz kwote");
		}
		else {
			int kwota = Convert::ToInt32(newkwota);
			if (kwota < 0) {
				MessageBox::Show("Wprowadz dodatnia kwote");
			}
			else {
				String^ constring = "Data Source=localhost\\sqlexpress;Initial Catalog=dane;Integrated Security=True";

				SqlConnection^ conDataBase = gcnew SqlConnection(constring);
				SqlCommand^ cmdDataBase = gcnew SqlCommand("update Users set Saldo=Saldo+@kwota where id=@id;", conDataBase);
				cmdDataBase->Parameters->AddWithValue("@kwota", kwota);
				cmdDataBase->Parameters->AddWithValue("@id", User::id);
				SqlDataReader^ myReader;
				try {
					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
					User:: saldo += kwota;
					MessageBox::Show("Wplacono");
					this->Close();
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}
			}

		}
	}
	};
}
