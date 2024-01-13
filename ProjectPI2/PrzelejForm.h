#include"user.h"
#include <stdio.h>
#include <fstream>


#pragma once

namespace ProjectPI2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Net::Mail;

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


	private: System::Windows::Forms::TextBox^ TBodbiorca;
	private: System::Windows::Forms::TextBox^ TBkwota;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ TBtytul;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PrzelejForm::typeid));
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->TBodbiorca = (gcnew System::Windows::Forms::TextBox());
			this->TBkwota = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TBtytul = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonOK
			// 
			this->buttonOK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->buttonOK->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonOK->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->buttonOK->Location = System::Drawing::Point(321, 216);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(75, 29);
			this->buttonOK->TabIndex = 0;
			this->buttonOK->Text = L"OK";
			this->buttonOK->UseVisualStyleBackColor = false;
			this->buttonOK->Click += gcnew System::EventHandler(this, &PrzelejForm::buttonOK_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCancel->ForeColor = System::Drawing::Color::White;
			this->buttonCancel->Location = System::Drawing::Point(404, 216);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(75, 29);
			this->buttonCancel->TabIndex = 1;
			this->buttonCancel->Text = L"Cancel";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &PrzelejForm::buttonCancel_Click);
			// 
			// TBodbiorca
			// 
			this->TBodbiorca->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->TBodbiorca->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TBodbiorca->ForeColor = System::Drawing::Color::White;
			this->TBodbiorca->Location = System::Drawing::Point(73, 76);
			this->TBodbiorca->Name = L"TBodbiorca";
			this->TBodbiorca->Size = System::Drawing::Size(402, 15);
			this->TBodbiorca->TabIndex = 4;
			this->TBodbiorca->Text = L"Odbiorca";
			this->TBodbiorca->Click += gcnew System::EventHandler(this, &PrzelejForm::TBodbiorca_Click);
			// 
			// TBkwota
			// 
			this->TBkwota->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->TBkwota->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TBkwota->ForeColor = System::Drawing::Color::White;
			this->TBkwota->Location = System::Drawing::Point(73, 173);
			this->TBkwota->Name = L"TBkwota";
			this->TBkwota->Size = System::Drawing::Size(406, 15);
			this->TBkwota->TabIndex = 5;
			this->TBkwota->Text = L"Kwota";
			this->TBkwota->Click += gcnew System::EventHandler(this, &PrzelejForm::TBkwota_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(190, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 29);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Przelew";
			// 
			// TBtytul
			// 
			this->TBtytul->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->TBtytul->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TBtytul->ForeColor = System::Drawing::Color::White;
			this->TBtytul->Location = System::Drawing::Point(73, 125);
			this->TBtytul->Name = L"TBtytul";
			this->TBtytul->Size = System::Drawing::Size(402, 15);
			this->TBtytul->TabIndex = 7;
			this->TBtytul->Text = L"Tytu³";
			this->TBtytul->Click += gcnew System::EventHandler(this, &PrzelejForm::TBtytul_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(73, 97);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(370, 1);
			this->panel2->TabIndex = 11;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(21, 67);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(46, 40);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(73, 146);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(370, 1);
			this->panel1->TabIndex = 13;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(21, 113);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(46, 43);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(73, 194);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(250, 1);
			this->panel3->TabIndex = 15;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(21, 162);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(46, 42);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 14;
			this->pictureBox3->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->ForeColor = System::Drawing::Color::White;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L" PLN ", L" USD", L" EUR" });
			this->comboBox1->Location = System::Drawing::Point(329, 170);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(116, 24);
			this->comboBox1->TabIndex = 16;
			this->comboBox1->Text = L"Waluta";
			// 
			// PrzelejForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->ClientSize = System::Drawing::Size(491, 259);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->TBtytul);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TBkwota);
			this->Controls->Add(this->TBodbiorca);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonOK);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(509, 306);
			this->MinimumSize = System::Drawing::Size(509, 306);
			this->Name = L"PrzelejForm";
			this->Text = L"  ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void buttonOK_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ tytul = this->TBtytul->Text;
	String^ newkwota = this->TBkwota->Text;
	String^ newodbiorca = this->TBodbiorca->Text;
	String^ waluta = this->comboBox1->Text;

	if (newkwota == "") {
		MessageBox::Show("Wprowadz kwote");
	}
	else if(newodbiorca == "") {
		MessageBox::Show("Wprowadz odbiorce");
	}
	else if (tytul == "") {
		MessageBox::Show("Wprowadz tytul");
	}
	else if (waluta == "") {
		MessageBox::Show("Wybierz walute");
	}
	else {
		int nr_rec = Convert::ToInt32(newodbiorca);
		int kwota = Convert::ToInt32(newkwota);
		if (kwota < 0) {
			MessageBox::Show("Wprowadz dodatnia kwote");
		}
		else if (kwota > User::saldo) {
			MessageBox::Show("Nie masz tyle srodkow");
		}
		else if (nr_rec == User::nr) {
			MessageBox::Show("Nie mozesz przelac samemu sobie");
		}
		else {
			String^ constring = "Data Source=localhost\\sqlexpress;Initial Catalog=dane;Integrated Security=True";
			SqlConnection^ conDataBase = gcnew SqlConnection(constring);

			if (waluta == " PLN") {
				String^ query = "BEGIN TRANSACTION; " +
					"UPDATE Users SET Saldo = Saldo - @kwota WHERE id = @id; " +
					"UPDATE Users SET Saldo = Saldo + @kwota WHERE nr = @nr; " +
					"COMMIT;";
				SqlCommand^ cmdDataBase = gcnew SqlCommand(query, conDataBase);
				cmdDataBase->Parameters->AddWithValue("@kwota", kwota);
				cmdDataBase->Parameters->AddWithValue("@id", User::id);
				cmdDataBase->Parameters->AddWithValue("@nr", nr_rec);

				SqlDataReader^ myReader;
				try {
					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}
				if (myReader->RecordsAffected > 0) {
					User::saldo -= kwota;
					this->Close();

					MailMessage^ mail = gcnew MailMessage();
					mail->From = gcnew MailAddress(User::email);
					mail->To->Add(User::email);
					mail->Subject = "Potwierdzenie przelewu";
					mail->Body = "Przelew na kwote " + kwota + " zlotych o tytule " + tytul + "na konto " + nr_rec + " zostal zrealizowany";
					SmtpClient^ klient = gcnew SmtpClient("smtp.gmail.com");
					klient->Port = 587;
					klient->Credentials = gcnew System::Net::NetworkCredential("projektbankk@gmail.com", "fgqd ccij kwbk qxrt");
					klient->EnableSsl = true;
					klient->Send(mail);
					MessageBox::Show("Wyslano maila z potweierdzeniem przelewu");

					this->Close();
				}
			}
			else if (waluta == " USD") {
				String^ query = "BEGIN TRANSACTION; " +
					"UPDATE Users SET Saldousd = Saldousd - @kwota WHERE id = @id; " +
					"UPDATE Users SET Saldousd = Saldousd + @kwota WHERE nr = @nr; " +
					"COMMIT;";
				SqlCommand^ cmdDataBase = gcnew SqlCommand(query, conDataBase);
				cmdDataBase->Parameters->AddWithValue("@kwota", kwota);
				cmdDataBase->Parameters->AddWithValue("@id", User::id);
				cmdDataBase->Parameters->AddWithValue("@nr", nr_rec);

				SqlDataReader^ myReader;
				try {
					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}
				if (myReader->RecordsAffected > 0) {
					User::saldo_usd -= kwota;
					this->Close();

					MailMessage^ mail = gcnew MailMessage();
					mail->From = gcnew MailAddress(User::email);
					mail->To->Add(User::email);
					mail->Subject = "Potwierdzenie przelewu";
					mail->Body = "Przelew na kwote " + kwota + waluta +" o tytule " + tytul + "na konto " + nr_rec + " zostal zrealizowany";
					SmtpClient^ klient = gcnew SmtpClient("smtp.gmail.com");
					klient->Port = 587;
					klient->Credentials = gcnew System::Net::NetworkCredential("projektbankk@gmail.com", "fgqd ccij kwbk qxrt");
					klient->EnableSsl = true;
					klient->Send(mail);
					MessageBox::Show("Wyslano maila z potweierdzeniem przelewu");

					this->Close();
				}
			}
			else if (waluta == " EUR") {
				String^ query = "BEGIN TRANSACTION; " +
					"UPDATE Users SET Saldoeur = Saldoeur - @kwota WHERE id = @id; " +
					"UPDATE Users SET Saldoeur = Saldoeur + @kwota WHERE nr = @nr; " +
					"COMMIT;";
				SqlCommand^ cmdDataBase = gcnew SqlCommand(query, conDataBase);
				cmdDataBase->Parameters->AddWithValue("@kwota", kwota);
				cmdDataBase->Parameters->AddWithValue("@id", User::id);
				cmdDataBase->Parameters->AddWithValue("@nr", nr_rec);

				SqlDataReader^ myReader;
				try {
					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}
				if (myReader->RecordsAffected > 0) {
					User::saldo_eur -= kwota;
					this->Close();

					MailMessage^ mail = gcnew MailMessage();
					mail->From = gcnew MailAddress(User::email);
					mail->To->Add(User::email);
					mail->Subject = "Potwierdzenie przelewu";
					mail->Body = "Przelew na kwote " + kwota + waluta + " o tytule " + tytul + "na konto " + nr_rec + " zostal zrealizowany";
					SmtpClient^ klient = gcnew SmtpClient("smtp.gmail.com");
					klient->Port = 587;
					klient->Credentials = gcnew System::Net::NetworkCredential("projektbankk@gmail.com", "fgqd ccij kwbk qxrt");
					klient->EnableSsl = true;
					klient->Send(mail);
					MessageBox::Show("Wyslano maila z potweierdzeniem przelewu");

					this->Close();
				}
			}
		}	
	}
}
private: System::Void TBodbiorca_Click(System::Object^ sender, System::EventArgs^ e) {
	TBodbiorca->Clear();
}
private: System::Void TBtytul_Click(System::Object^ sender, System::EventArgs^ e) {
	TBtytul->Clear();
}
private: System::Void TBkwota_Click(System::Object^ sender, System::EventArgs^ e) {
	TBkwota->Clear();
}
};
}
