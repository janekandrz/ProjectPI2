

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

	private: System::Windows::Forms::TextBox^ TBkwota;
	private: System::Windows::Forms::Label^ Wyp³aæ;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WplacForm::typeid));
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->TBkwota = (gcnew System::Windows::Forms::TextBox());
			this->Wyp³aæ = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonCancel
			// 
			this->buttonCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCancel->ForeColor = System::Drawing::Color::White;
			this->buttonCancel->Location = System::Drawing::Point(376, 181);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(75, 27);
			this->buttonCancel->TabIndex = 0;
			this->buttonCancel->Text = L"Cancel";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &WplacForm::buttonCancel_Click);
			// 
			// buttonOK
			// 
			this->buttonOK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->buttonOK->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonOK->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->buttonOK->Location = System::Drawing::Point(282, 181);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(75, 27);
			this->buttonOK->TabIndex = 1;
			this->buttonOK->Text = L"OK";
			this->buttonOK->UseVisualStyleBackColor = false;
			this->buttonOK->Click += gcnew System::EventHandler(this, &WplacForm::buttonOK_Click);
			// 
			// TBkwota
			// 
			this->TBkwota->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->TBkwota->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TBkwota->ForeColor = System::Drawing::Color::White;
			this->TBkwota->Location = System::Drawing::Point(77, 97);
			this->TBkwota->Name = L"TBkwota";
			this->TBkwota->Size = System::Drawing::Size(374, 15);
			this->TBkwota->TabIndex = 3;
			this->TBkwota->Text = L"Kwota wp³aty";
			this->TBkwota->Click += gcnew System::EventHandler(this, &WplacForm::TBkwota_Click);
			// 
			// Wyp³aæ
			// 
			this->Wyp³aæ->AutoSize = true;
			this->Wyp³aæ->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->Wyp³aæ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Wyp³aæ->ForeColor = System::Drawing::Color::White;
			this->Wyp³aæ->Location = System::Drawing::Point(192, 28);
			this->Wyp³aæ->Name = L"Wyp³aæ";
			this->Wyp³aæ->Size = System::Drawing::Size(80, 29);
			this->Wyp³aæ->TabIndex = 4;
			this->Wyp³aæ->Text = L"Wp³aæ";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(77, 118);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(250, 1);
			this->panel2->TabIndex = 11;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(21, 82);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 46);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->ForeColor = System::Drawing::Color::White;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"PLN ", L"USD", L"EUR" });
			this->comboBox1->Location = System::Drawing::Point(335, 94);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(116, 24);
			this->comboBox1->TabIndex = 12;
			this->comboBox1->Text = L"Waluta";
			// 
			// WplacForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->ClientSize = System::Drawing::Size(463, 227);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->Wyp³aæ);
			this->Controls->Add(this->TBkwota);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->buttonCancel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(481, 274);
			this->MinimumSize = System::Drawing::Size(481, 274);
			this->Name = L"WplacForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void buttonOK_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ newkwota = this->TBkwota->Text;
		String^ waluta = this->comboBox1->Text;
		if (newkwota == "") {
			MessageBox::Show("Wprowadz kwote");
		}
		else if (waluta == "") {
			MessageBox::Show("Wybierz walute");
		}
		else {
			int kwota = Convert::ToInt32(newkwota);
			if (kwota < 0) {
				MessageBox::Show("Wprowadz dodatnia kwote");
			}
			else {
				String^ constring = "Data Source=localhost\\sqlexpress;Initial Catalog=dane;Integrated Security=True";
				SqlConnection^ conDataBase = gcnew SqlConnection(constring);
				if (waluta == "PLN") {
					SqlCommand^ cmdDataBase = gcnew SqlCommand("update Users set Saldo=Saldo+@kwota where id=@id;", conDataBase);
					cmdDataBase->Parameters->AddWithValue("@kwota", kwota);
					cmdDataBase->Parameters->AddWithValue("@id", User::id);
					SqlDataReader^ myReader;
					try {
						conDataBase->Open();
						myReader = cmdDataBase->ExecuteReader();
						User::saldo += kwota;
						MessageBox::Show("Wplacono");
						this->Close();
					}
					catch (Exception^ ex) {
						MessageBox::Show(ex->Message);
					}
				}
				else if (waluta == "USD") {
					SqlCommand^ cmdDataBase = gcnew SqlCommand("update Users set Saldousd=Saldousd+@kwota where id=@id;", conDataBase);
					cmdDataBase->Parameters->AddWithValue("@kwota", kwota);
					cmdDataBase->Parameters->AddWithValue("@id", User::id);
					SqlDataReader^ myReader;
					try {
						conDataBase->Open();
						myReader = cmdDataBase->ExecuteReader();
						User::saldo_usd += kwota;
						MessageBox::Show("Wplacono");
						this->Close();
					}
					catch (Exception^ ex) {
						MessageBox::Show(ex->Message);
					}
				}
				else if (waluta == "EUR") {
					SqlCommand^ cmdDataBase = gcnew SqlCommand("update Users set Saldoeur=Saldoeur+@kwota where id=@id;", conDataBase);
					cmdDataBase->Parameters->AddWithValue("@kwota", kwota);
					cmdDataBase->Parameters->AddWithValue("@id", User::id);
					SqlDataReader^ myReader;
					try {
						conDataBase->Open();
						myReader = cmdDataBase->ExecuteReader();
						User::saldo_eur += kwota;
						MessageBox::Show("Wplacono");
						this->Close();
					}
					catch (Exception^ ex) {
						MessageBox::Show(ex->Message);
					}
				}
			}

		}
	}
	private: System::Void TBkwota_Click(System::Object^ sender, System::EventArgs^ e) {
		TBkwota->Clear();
	}
};
}
