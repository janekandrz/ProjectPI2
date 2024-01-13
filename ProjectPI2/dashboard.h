
#pragma once

#include"user.h"
#include"LoginForm.h"
#include"WyplacForm.h"
#include"WplacForm.h"
#include"PrzelejForm.h"

namespace ProjectPI2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o dashboard
	/// </summary>
	/// 
	public ref class dashboard: public System::Windows::Forms::Form{
	public:
		User^ user;
		LoginForm^ login;
		WyplacForm^ wyplac;
		WplacForm^ wplac;
	private: System::Windows::Forms::Label^ labelnr;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	public:
		PrzelejForm^ przelej;
	
	public:
		dashboard(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//

			labelwelcome->Text = user->username;
			labelusername->Text = user->username;
			labelemail->Text = user->email;
			labelpesel->Text = user->pesel;
			labeladdress->Text = user->address;
			labelsaldo->Text = "" + user->saldo +" PLN";
			labelnr->Text = "" + user->nr;

			wplac = gcnew WplacForm();
			wyplac = gcnew WyplacForm();
			wplac = gcnew WplacForm();
			przelej = gcnew PrzelejForm();
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelsaldo;
	private: System::Windows::Forms::Label^ labelstronaglowna;
	private: System::Windows::Forms::Label^ labelusername;
	private: System::Windows::Forms::Label^ labelemail;
	private: System::Windows::Forms::Label^ labelpesel;
	private: System::Windows::Forms::Label^ labeladdress;
	private: System::Windows::Forms::Label^ labelwelcome;
	private: System::Windows::Forms::Button^ buttonEXIT;
	private: System::Windows::Forms::Button^ buttonLogout;
	private: System::Windows::Forms::Button^ buttonprzelew;
	private: System::Windows::Forms::Button^ buttonwplac;
	private: System::Windows::Forms::Button^ buttonwyplac;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(dashboard::typeid));
			this->labelstronaglowna = (gcnew System::Windows::Forms::Label());
			this->labelusername = (gcnew System::Windows::Forms::Label());
			this->labelemail = (gcnew System::Windows::Forms::Label());
			this->labelpesel = (gcnew System::Windows::Forms::Label());
			this->labeladdress = (gcnew System::Windows::Forms::Label());
			this->labelwelcome = (gcnew System::Windows::Forms::Label());
			this->buttonEXIT = (gcnew System::Windows::Forms::Button());
			this->buttonLogout = (gcnew System::Windows::Forms::Button());
			this->buttonprzelew = (gcnew System::Windows::Forms::Button());
			this->buttonwplac = (gcnew System::Windows::Forms::Button());
			this->buttonwyplac = (gcnew System::Windows::Forms::Button());
			this->labelsaldo = (gcnew System::Windows::Forms::Label());
			this->labelnr = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// labelstronaglowna
			// 
			this->labelstronaglowna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelstronaglowna->ForeColor = System::Drawing::Color::White;
			this->labelstronaglowna->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->labelstronaglowna->Location = System::Drawing::Point(321, 9);
			this->labelstronaglowna->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelstronaglowna->Name = L"labelstronaglowna";
			this->labelstronaglowna->Size = System::Drawing::Size(185, 50);
			this->labelstronaglowna->TabIndex = 0;
			this->labelstronaglowna->Text = L"Strona g³ówna ";
			this->labelstronaglowna->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labelusername
			// 
			this->labelusername->AutoSize = true;
			this->labelusername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelusername->ForeColor = System::Drawing::Color::White;
			this->labelusername->Location = System::Drawing::Point(252, 333);
			this->labelusername->Name = L"labelusername";
			this->labelusername->Size = System::Drawing::Size(129, 22);
			this->labelusername->TabIndex = 2;
			this->labelusername->Text = L"daneusername";
			// 
			// labelemail
			// 
			this->labelemail->AutoSize = true;
			this->labelemail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelemail->ForeColor = System::Drawing::Color::White;
			this->labelemail->Location = System::Drawing::Point(252, 376);
			this->labelemail->Name = L"labelemail";
			this->labelemail->Size = System::Drawing::Size(92, 22);
			this->labelemail->TabIndex = 3;
			this->labelemail->Text = L"daneemail";
			// 
			// labelpesel
			// 
			this->labelpesel->AutoSize = true;
			this->labelpesel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelpesel->ForeColor = System::Drawing::Color::White;
			this->labelpesel->Location = System::Drawing::Point(252, 423);
			this->labelpesel->Name = L"labelpesel";
			this->labelpesel->Size = System::Drawing::Size(93, 22);
			this->labelpesel->TabIndex = 4;
			this->labelpesel->Text = L"danepesel";
			// 
			// labeladdress
			// 
			this->labeladdress->AutoSize = true;
			this->labeladdress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labeladdress->ForeColor = System::Drawing::Color::White;
			this->labeladdress->Location = System::Drawing::Point(252, 466);
			this->labeladdress->Name = L"labeladdress";
			this->labeladdress->Size = System::Drawing::Size(95, 22);
			this->labeladdress->TabIndex = 5;
			this->labeladdress->Text = L"daneadres";
			// 
			// labelwelcome
			// 
			this->labelwelcome->AutoSize = true;
			this->labelwelcome->ForeColor = System::Drawing::Color::White;
			this->labelwelcome->Location = System::Drawing::Point(343, 45);
			this->labelwelcome->Name = L"labelwelcome";
			this->labelwelcome->Size = System::Drawing::Size(80, 20);
			this->labelwelcome->TabIndex = 6;
			this->labelwelcome->Text = L"welcome ";
			// 
			// buttonEXIT
			// 
			this->buttonEXIT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEXIT->ForeColor = System::Drawing::Color::White;
			this->buttonEXIT->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonEXIT.Image")));
			this->buttonEXIT->Location = System::Drawing::Point(3, 528);
			this->buttonEXIT->Name = L"buttonEXIT";
			this->buttonEXIT->Size = System::Drawing::Size(144, 58);
			this->buttonEXIT->TabIndex = 7;
			this->buttonEXIT->Text = L"EXIT";
			this->buttonEXIT->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonEXIT->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->buttonEXIT->UseVisualStyleBackColor = true;
			this->buttonEXIT->Click += gcnew System::EventHandler(this, &dashboard::buttonEXIT_Click);
			// 
			// buttonLogout
			// 
			this->buttonLogout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonLogout->ForeColor = System::Drawing::Color::White;
			this->buttonLogout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonLogout.Image")));
			this->buttonLogout->Location = System::Drawing::Point(3, 456);
			this->buttonLogout->Name = L"buttonLogout";
			this->buttonLogout->Size = System::Drawing::Size(144, 66);
			this->buttonLogout->TabIndex = 8;
			this->buttonLogout->Text = L"Logout";
			this->buttonLogout->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonLogout->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->buttonLogout->UseVisualStyleBackColor = true;
			this->buttonLogout->Click += gcnew System::EventHandler(this, &dashboard::buttonLogout_Click);
			// 
			// buttonprzelew
			// 
			this->buttonprzelew->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->buttonprzelew->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonprzelew->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->buttonprzelew->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonprzelew.Image")));
			this->buttonprzelew->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonprzelew->Location = System::Drawing::Point(-1, 3);
			this->buttonprzelew->Name = L"buttonprzelew";
			this->buttonprzelew->Size = System::Drawing::Size(148, 84);
			this->buttonprzelew->TabIndex = 9;
			this->buttonprzelew->Text = L"przelew";
			this->buttonprzelew->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->buttonprzelew->UseVisualStyleBackColor = false;
			this->buttonprzelew->Click += gcnew System::EventHandler(this, &dashboard::buttonprzelew_Click);
			// 
			// buttonwplac
			// 
			this->buttonwplac->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->buttonwplac->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonwplac->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->buttonwplac->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonwplac.Image")));
			this->buttonwplac->Location = System::Drawing::Point(-1, 183);
			this->buttonwplac->Name = L"buttonwplac";
			this->buttonwplac->Size = System::Drawing::Size(148, 77);
			this->buttonwplac->TabIndex = 10;
			this->buttonwplac->Text = L"wp³aæ";
			this->buttonwplac->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->buttonwplac->UseVisualStyleBackColor = false;
			this->buttonwplac->Click += gcnew System::EventHandler(this, &dashboard::buttonwplac_Click);
			// 
			// buttonwyplac
			// 
			this->buttonwyplac->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->buttonwyplac->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonwyplac->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->buttonwyplac->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonwyplac.Image")));
			this->buttonwyplac->Location = System::Drawing::Point(-1, 93);
			this->buttonwyplac->Name = L"buttonwyplac";
			this->buttonwyplac->Size = System::Drawing::Size(148, 84);
			this->buttonwyplac->TabIndex = 11;
			this->buttonwyplac->Text = L"wyp³aæ";
			this->buttonwyplac->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonwyplac->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->buttonwyplac->UseVisualStyleBackColor = false;
			this->buttonwyplac->Click += gcnew System::EventHandler(this, &dashboard::buttonwyplac_Click);
			// 
			// labelsaldo
			// 
			this->labelsaldo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelsaldo->ForeColor = System::Drawing::Color::White;
			this->labelsaldo->Location = System::Drawing::Point(555, 287);
			this->labelsaldo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelsaldo->Name = L"labelsaldo";
			this->labelsaldo->Size = System::Drawing::Size(150, 20);
			this->labelsaldo->TabIndex = 12;
			this->labelsaldo->Text = L"danesaldo";
			// 
			// labelnr
			// 
			this->labelnr->AutoSize = true;
			this->labelnr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelnr->ForeColor = System::Drawing::Color::White;
			this->labelnr->Location = System::Drawing::Point(252, 287);
			this->labelnr->Name = L"labelnr";
			this->labelnr->Size = System::Drawing::Size(66, 22);
			this->labelnr->TabIndex = 13;
			this->labelnr->Text = L"danenr";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->buttonwyplac);
			this->panel1->Controls->Add(this->buttonwplac);
			this->panel1->Controls->Add(this->buttonprzelew);
			this->panel1->Controls->Add(this->buttonEXIT);
			this->panel1->Controls->Add(this->buttonLogout);
			this->panel1->Location = System::Drawing::Point(13, 10);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(147, 593);
			this->panel1->TabIndex = 14;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(213, 372);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(31, 31);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(213, 329);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(31, 31);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 23;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(213, 421);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(33, 28);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 32;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(214, 462);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(31, 31);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 33;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(510, 282);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(38, 35);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 34;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(214, 282);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(31, 31);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 35;
			this->pictureBox4->TabStop = false;
			// 
			// dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->ClientSize = System::Drawing::Size(774, 609);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->labelnr);
			this->Controls->Add(this->labelsaldo);
			this->Controls->Add(this->labelwelcome);
			this->Controls->Add(this->labeladdress);
			this->Controls->Add(this->labelpesel);
			this->Controls->Add(this->labelemail);
			this->Controls->Add(this->labelusername);
			this->Controls->Add(this->labelstronaglowna);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"dashboard";
			this->Load += gcnew System::EventHandler(this, &dashboard::dashboard_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	public:
		void OpenLoginForm() {
				login = gcnew LoginForm();
				this->Visible = false;
				login->ShowDialog();
				this->Visible = true;

				labelwelcome->Text = "Witaj, " + user->username;
				labelusername->Text = user->username;
				labelemail->Text = user->email;
				labelpesel->Text = user->pesel;
				labeladdress->Text = user->address;
				labelsaldo->Text = ""+user->saldo + " PLN";
				labelnr->Text= ""+user->nr;
			} 

		void OpenWplacForm() {
		
			wplac->ShowDialog();
			labelsaldo->Text = ""+user->saldo + " PLN";
		}
		void OpenWyplacForm() {
			wyplac->ShowDialog();
			labelsaldo->Text = "" + user->saldo + " PLN";
		}
		void OpenPrzelejForm() {
			przelej->ShowDialog();
			labelsaldo->Text = "" + user->saldo + " PLN";
		}	
#pragma endregion
private: System::Void buttonEXIT_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void buttonLogout_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenLoginForm();
}
private: System::Void dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
		OpenLoginForm();
}
private: System::Void buttonprzelew_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenPrzelejForm();
}
private: System::Void buttonwplac_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenWplacForm();
}
private: System::Void buttonwyplac_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenWyplacForm();
}
};
}
