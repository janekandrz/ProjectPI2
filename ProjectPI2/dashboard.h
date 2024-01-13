
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
	public:
		PrzelejForm^ przelej;
	
	public:
		dashboard(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//

			labelwelcome->Text = "Witaj, " + user->username;
			labelusername->Text = "username= " + user->username;
			labelemail->Text = "email= " + user->email;
			labelpesel->Text = "pesel= " + user->pesel;
			labeladdress->Text = "adres= " + user->address;
			labelsaldo->Text = "saldo= " + user->saldo;

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
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelstronaglowna
			// 
			this->labelstronaglowna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelstronaglowna->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->labelstronaglowna->Location = System::Drawing::Point(407, 9);
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
			this->labelusername->Location = System::Drawing::Point(252, 338);
			this->labelusername->Name = L"labelusername";
			this->labelusername->Size = System::Drawing::Size(119, 20);
			this->labelusername->TabIndex = 2;
			this->labelusername->Text = L"daneusername";
			// 
			// labelemail
			// 
			this->labelemail->AutoSize = true;
			this->labelemail->Location = System::Drawing::Point(252, 385);
			this->labelemail->Name = L"labelemail";
			this->labelemail->Size = System::Drawing::Size(85, 20);
			this->labelemail->TabIndex = 3;
			this->labelemail->Text = L"daneemail";
			// 
			// labelpesel
			// 
			this->labelpesel->AutoSize = true;
			this->labelpesel->Location = System::Drawing::Point(252, 434);
			this->labelpesel->Name = L"labelpesel";
			this->labelpesel->Size = System::Drawing::Size(85, 20);
			this->labelpesel->TabIndex = 4;
			this->labelpesel->Text = L"danepesel";
			// 
			// labeladdress
			// 
			this->labeladdress->AutoSize = true;
			this->labeladdress->Location = System::Drawing::Point(252, 487);
			this->labeladdress->Name = L"labeladdress";
			this->labeladdress->Size = System::Drawing::Size(87, 20);
			this->labeladdress->TabIndex = 5;
			this->labeladdress->Text = L"daneadres";
			// 
			// labelwelcome
			// 
			this->labelwelcome->AutoSize = true;
			this->labelwelcome->Location = System::Drawing::Point(446, 59);
			this->labelwelcome->Name = L"labelwelcome";
			this->labelwelcome->Size = System::Drawing::Size(80, 20);
			this->labelwelcome->TabIndex = 6;
			this->labelwelcome->Text = L"welcome ";
			// 
			// buttonEXIT
			// 
			this->buttonEXIT->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonEXIT.Image")));
			this->buttonEXIT->Location = System::Drawing::Point(0, 528);
			this->buttonEXIT->Name = L"buttonEXIT";
			this->buttonEXIT->Size = System::Drawing::Size(143, 58);
			this->buttonEXIT->TabIndex = 7;
			this->buttonEXIT->Text = L"EXIT";
			this->buttonEXIT->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->buttonEXIT->UseVisualStyleBackColor = true;
			this->buttonEXIT->Click += gcnew System::EventHandler(this, &dashboard::buttonEXIT_Click);
			// 
			// buttonLogout
			// 
			this->buttonLogout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonLogout.Image")));
			this->buttonLogout->Location = System::Drawing::Point(4, 456);
			this->buttonLogout->Name = L"buttonLogout";
			this->buttonLogout->Size = System::Drawing::Size(143, 66);
			this->buttonLogout->TabIndex = 8;
			this->buttonLogout->Text = L"Logout";
			this->buttonLogout->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonLogout->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->buttonLogout->UseVisualStyleBackColor = true;
			this->buttonLogout->Click += gcnew System::EventHandler(this, &dashboard::buttonLogout_Click);
			// 
			// buttonprzelew
			// 
			this->buttonprzelew->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonprzelew.Image")));
			this->buttonprzelew->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonprzelew->Location = System::Drawing::Point(3, 3);
			this->buttonprzelew->Name = L"buttonprzelew";
			this->buttonprzelew->Size = System::Drawing::Size(140, 84);
			this->buttonprzelew->TabIndex = 9;
			this->buttonprzelew->Text = L"przelew";
			this->buttonprzelew->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->buttonprzelew->UseVisualStyleBackColor = true;
			this->buttonprzelew->Click += gcnew System::EventHandler(this, &dashboard::buttonprzelew_Click);
			// 
			// buttonwplac
			// 
			this->buttonwplac->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonwplac.Image")));
			this->buttonwplac->Location = System::Drawing::Point(3, 183);
			this->buttonwplac->Name = L"buttonwplac";
			this->buttonwplac->Size = System::Drawing::Size(141, 77);
			this->buttonwplac->TabIndex = 10;
			this->buttonwplac->Text = L"wp³aæ";
			this->buttonwplac->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->buttonwplac->UseVisualStyleBackColor = true;
			this->buttonwplac->Click += gcnew System::EventHandler(this, &dashboard::buttonwplac_Click);
			// 
			// buttonwyplac
			// 
			this->buttonwyplac->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonwyplac.Image")));
			this->buttonwyplac->Location = System::Drawing::Point(4, 93);
			this->buttonwyplac->Name = L"buttonwyplac";
			this->buttonwyplac->Size = System::Drawing::Size(141, 84);
			this->buttonwyplac->TabIndex = 11;
			this->buttonwyplac->Text = L"wyp³aæ";
			this->buttonwyplac->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonwyplac->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->buttonwyplac->UseVisualStyleBackColor = true;
			this->buttonwyplac->Click += gcnew System::EventHandler(this, &dashboard::buttonwyplac_Click);
			// 
			// labelsaldo
			// 
			this->labelsaldo->Location = System::Drawing::Point(555, 292);
			this->labelsaldo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelsaldo->Name = L"labelsaldo";
			this->labelsaldo->Size = System::Drawing::Size(150, 20);
			this->labelsaldo->TabIndex = 12;
			this->labelsaldo->Text = L"danesaldo";
			// 
			// labelnr
			// 
			this->labelnr->AutoSize = true;
			this->labelnr->Location = System::Drawing::Point(252, 292);
			this->labelnr->Name = L"labelnr";
			this->labelnr->Size = System::Drawing::Size(60, 20);
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
			// dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 609);
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
				labelusername->Text = "username= " + user->username;
				labelemail->Text = "email= " + user->email;
				labelpesel->Text = "pesel= " + user->pesel;
				labeladdress->Text = "adres= " + user->address;
				labelsaldo->Text = "saldo= " + user->saldo;
				labelnr->Text= "numer konta= "+user->nr;
			} 

		void OpenWplacForm() {
		
			wplac->ShowDialog();
			labelsaldo->Text = "saldo= " + user->saldo;
		}
		void OpenWyplacForm() {
			wyplac->ShowDialog();
			labelsaldo->Text = "saldo= " + user->saldo;
		}
		void OpenPrzelejForm() {
			przelej->ShowDialog();
			labelsaldo->Text = "saldo= " + user->saldo;
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
