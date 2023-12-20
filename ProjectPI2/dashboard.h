
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
		ProjectPI2::LoginForm^ login;
		ProjectPI2::WyplacForm^ wyplac;
		ProjectPI2::WplacForm^ wplac;
		ProjectPI2::PrzelejForm^ przelej;
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

			/*user = gcnew User();
			wyplac = gcnew WyplacForm();
			wplac = gcnew WplacForm();
			przelej = gcnew PrzelejForm();*/
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
	private: System::Windows::Forms::Label^ labelstronaglowna;
	private: System::Windows::Forms::Label^ labelid;
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
			this->labelstronaglowna = (gcnew System::Windows::Forms::Label());
			this->labelid = (gcnew System::Windows::Forms::Label());
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
			this->SuspendLayout();
			// 
			// labelstronaglowna
			// 
			this->labelstronaglowna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelstronaglowna->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->labelstronaglowna->Location = System::Drawing::Point(15, 11);
			this->labelstronaglowna->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelstronaglowna->Name = L"labelstronaglowna";
			this->labelstronaglowna->Size = System::Drawing::Size(788, 50);
			this->labelstronaglowna->TabIndex = 0;
			this->labelstronaglowna->Text = L"Strona g³ówna ";
			this->labelstronaglowna->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labelid
			// 
			this->labelid->Location = System::Drawing::Point(16, 151);
			this->labelid->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelid->Name = L"labelid";
			this->labelid->Size = System::Drawing::Size(786, 20);
			this->labelid->TabIndex = 1;
			this->labelid->Text = L"daneid";
			// 
			// labelusername
			// 
			this->labelusername->AutoSize = true;
			this->labelusername->Location = System::Drawing::Point(16, 171);
			this->labelusername->Name = L"labelusername";
			this->labelusername->Size = System::Drawing::Size(119, 20);
			this->labelusername->TabIndex = 2;
			this->labelusername->Text = L"daneusername";
			// 
			// labelemail
			// 
			this->labelemail->AutoSize = true;
			this->labelemail->Location = System::Drawing::Point(16, 191);
			this->labelemail->Name = L"labelemail";
			this->labelemail->Size = System::Drawing::Size(85, 20);
			this->labelemail->TabIndex = 3;
			this->labelemail->Text = L"daneemail";
			// 
			// labelpesel
			// 
			this->labelpesel->AutoSize = true;
			this->labelpesel->Location = System::Drawing::Point(16, 211);
			this->labelpesel->Name = L"labelpesel";
			this->labelpesel->Size = System::Drawing::Size(85, 20);
			this->labelpesel->TabIndex = 4;
			this->labelpesel->Text = L"danepesel";
			// 
			// labeladdress
			// 
			this->labeladdress->AutoSize = true;
			this->labeladdress->Location = System::Drawing::Point(16, 231);
			this->labeladdress->Name = L"labeladdress";
			this->labeladdress->Size = System::Drawing::Size(87, 20);
			this->labeladdress->TabIndex = 5;
			this->labeladdress->Text = L"daneadres";
			// 
			// labelwelcome
			// 
			this->labelwelcome->AutoSize = true;
			this->labelwelcome->Location = System::Drawing::Point(358, 51);
			this->labelwelcome->Name = L"labelwelcome";
			this->labelwelcome->Size = System::Drawing::Size(80, 20);
			this->labelwelcome->TabIndex = 6;
			this->labelwelcome->Text = L"welcome ";
			// 
			// buttonEXIT
			// 
			this->buttonEXIT->Location = System::Drawing::Point(715, 632);
			this->buttonEXIT->Name = L"buttonEXIT";
			this->buttonEXIT->Size = System::Drawing::Size(87, 32);
			this->buttonEXIT->TabIndex = 7;
			this->buttonEXIT->Text = L"EXIT";
			this->buttonEXIT->UseVisualStyleBackColor = true;
			this->buttonEXIT->Click += gcnew System::EventHandler(this, &dashboard::buttonEXIT_Click);
			// 
			// buttonLogout
			// 
			this->buttonLogout->Location = System::Drawing::Point(616, 632);
			this->buttonLogout->Name = L"buttonLogout";
			this->buttonLogout->Size = System::Drawing::Size(93, 32);
			this->buttonLogout->TabIndex = 8;
			this->buttonLogout->Text = L"Logout";
			this->buttonLogout->UseVisualStyleBackColor = true;
			this->buttonLogout->Click += gcnew System::EventHandler(this, &dashboard::buttonLogout_Click);
			// 
			// buttonprzelew
			// 
			this->buttonprzelew->Location = System::Drawing::Point(616, 279);
			this->buttonprzelew->Name = L"buttonprzelew";
			this->buttonprzelew->Size = System::Drawing::Size(93, 35);
			this->buttonprzelew->TabIndex = 9;
			this->buttonprzelew->Text = L"przelew";
			this->buttonprzelew->UseVisualStyleBackColor = true;
			this->buttonprzelew->Click += gcnew System::EventHandler(this, &dashboard::buttonprzelew_Click);
			// 
			// buttonwplac
			// 
			this->buttonwplac->Location = System::Drawing::Point(616, 320);
			this->buttonwplac->Name = L"buttonwplac";
			this->buttonwplac->Size = System::Drawing::Size(93, 29);
			this->buttonwplac->TabIndex = 10;
			this->buttonwplac->Text = L"wp³aæ";
			this->buttonwplac->UseVisualStyleBackColor = true;
			this->buttonwplac->Click += gcnew System::EventHandler(this, &dashboard::buttonwplac_Click);
			// 
			// buttonwyplac
			// 
			this->buttonwyplac->Location = System::Drawing::Point(616, 355);
			this->buttonwyplac->Name = L"buttonwyplac";
			this->buttonwyplac->Size = System::Drawing::Size(93, 28);
			this->buttonwyplac->TabIndex = 11;
			this->buttonwyplac->Text = L"wyp³aæ";
			this->buttonwyplac->UseVisualStyleBackColor = true;
			this->buttonwyplac->Click += gcnew System::EventHandler(this, &dashboard::buttonwyplac_Click);
			// 
			// dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(818, 676);
			this->Controls->Add(this->buttonwyplac);
			this->Controls->Add(this->buttonwplac);
			this->Controls->Add(this->buttonprzelew);
			this->Controls->Add(this->buttonLogout);
			this->Controls->Add(this->buttonEXIT);
			this->Controls->Add(this->labelwelcome);
			this->Controls->Add(this->labeladdress);
			this->Controls->Add(this->labelpesel);
			this->Controls->Add(this->labelemail);
			this->Controls->Add(this->labelusername);
			this->Controls->Add(this->labelid);
			this->Controls->Add(this->labelstronaglowna);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(836, 723);
			this->MinimumSize = System::Drawing::Size(836, 723);
			this->Name = L"dashboard";
			this->Text = L"dashboard";
			this->Load += gcnew System::EventHandler(this, &dashboard::dashboard_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	public:
		void OpenLoginForm() {

			this->Visible = false;
			login->ShowDialog();
			//	user = login->user;
			this->Visible = true;
		}
		void OpenWplacForm() {
			wplac=gcnew WplacForm();
			wplac->ShowDialog();
		}
		void OpenWyplacForm() {

			wyplac->ShowDialog();
		}
		void OpenPrzelejForm() {

			//jakos ten setuser tu musi byc bo inaczej nie dziala
			przelej->ShowDialog();
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
