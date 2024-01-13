#pragma once
#include"user.h"
#include"RegisterForm.h"


namespace ProjectPI2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Podsumowanie informacji o LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:

		RegisterForm^ reg;

		void OpenRegisterForm() {
			try{
			reg = gcnew RegisterForm();
			this->Visible = false;
			reg->ShowDialog();
			this->Visible = true;
			}
			catch (Exception^ e) {
				if (e->Message == "exit") {
					Application::Exit();
					return;
				}
				throw e;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	public:
		User^ user;
		LoginForm()
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonOK;
	private: System::Windows::Forms::Button^ buttonCancel;
	private: System::Windows::Forms::Label^ labelLogin;


	private: System::Windows::Forms::TextBox^ tbusername;
	private: System::Windows::Forms::TextBox^ tbpassword;
	private: System::Windows::Forms::Button^ buttonRegister;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->labelLogin = (gcnew System::Windows::Forms::Label());
			this->tbusername = (gcnew System::Windows::Forms::TextBox());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->buttonRegister = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonOK
			// 
			this->buttonOK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->buttonOK->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonOK->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->buttonOK->Location = System::Drawing::Point(57, 371);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(295, 31);
			this->buttonOK->TabIndex = 0;
			this->buttonOK->Text = L"Sign in ";
			this->buttonOK->UseVisualStyleBackColor = false;
			this->buttonOK->Click += gcnew System::EventHandler(this, &LoginForm::buttonOK_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCancel->ForeColor = System::Drawing::Color::White;
			this->buttonCancel->Location = System::Drawing::Point(302, 541);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(94, 30);
			this->buttonCancel->TabIndex = 1;
			this->buttonCancel->Text = L"EXIT";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &LoginForm::buttonCancel_Click);
			// 
			// labelLogin
			// 
			this->labelLogin->AutoSize = true;
			this->labelLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelLogin->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->labelLogin->Location = System::Drawing::Point(166, 66);
			this->labelLogin->Name = L"labelLogin";
			this->labelLogin->Size = System::Drawing::Size(85, 32);
			this->labelLogin->TabIndex = 2;
			this->labelLogin->Text = L"Login";
			// 
			// tbusername
			// 
			this->tbusername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbusername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbusername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbusername->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->tbusername->HideSelection = false;
			this->tbusername->Location = System::Drawing::Point(80, 151);
			this->tbusername->Name = L"tbusername";
			this->tbusername->Size = System::Drawing::Size(290, 17);
			this->tbusername->TabIndex = 5;
			this->tbusername->Text = L"Username";
			this->tbusername->Click += gcnew System::EventHandler(this, &LoginForm::tbusername_Click);
			// 
			// tbpassword
			// 
			this->tbpassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbpassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbpassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbpassword->ForeColor = System::Drawing::Color::White;
			this->tbpassword->HideSelection = false;
			this->tbpassword->Location = System::Drawing::Point(81, 224);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->PasswordChar = '*';
			this->tbpassword->Size = System::Drawing::Size(290, 17);
			this->tbpassword->TabIndex = 6;
			this->tbpassword->Text = L"Password";
			this->tbpassword->Click += gcnew System::EventHandler(this, &LoginForm::tbpassword_Click);
			// 
			// buttonRegister
			// 
			this->buttonRegister->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonRegister->ForeColor = System::Drawing::Color::White;
			this->buttonRegister->Location = System::Drawing::Point(57, 454);
			this->buttonRegister->Name = L"buttonRegister";
			this->buttonRegister->Size = System::Drawing::Size(295, 31);
			this->buttonRegister->TabIndex = 7;
			this->buttonRegister->Text = L"Register";
			this->buttonRegister->UseVisualStyleBackColor = true;
			this->buttonRegister->Click += gcnew System::EventHandler(this, &LoginForm::buttonRegister_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(193, 418);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"or";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(38, 139);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(36, 35);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(38, 212);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(36, 35);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(81, 173);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(290, 1);
			this->panel1->TabIndex = 11;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(81, 246);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(290, 1);
			this->panel2->TabIndex = 12;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(82, 428);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(100, 1);
			this->panel3->TabIndex = 13;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(227, 428);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(100, 1);
			this->panel4->TabIndex = 14;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->ClientSize = System::Drawing::Size(414, 587);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonRegister);
			this->Controls->Add(this->tbpassword);
			this->Controls->Add(this->tbusername);
			this->Controls->Add(this->labelLogin);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonOK);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(436, 638);
			this->MinimumSize = System::Drawing::Size(436, 638);
			this->Name = L"LoginForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonOK_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = this->tbusername->Text;
		String^ password = this->tbpassword->Text;

		if (username->Length == 0 || password->Length == 0) {
			MessageBox::Show("prosze wprowadzic username i password",
				"username lub password puste"), MessageBoxButtons::OK;
			return;
		}
		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=dane;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM users WHERE username=@username AND password=@pwd";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@username", username);
			command.Parameters->AddWithValue("@pwd", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				user->id = reader->GetInt32(0);
				user->username = reader->GetString(1);
				user->email = reader->GetString(2);
				user->pesel = reader->GetString(3);
				user->address = reader->GetString(5);
				user->password = reader->GetString(4);
				user->saldo = reader->GetDouble(6);
				user->nr = reader->GetInt32(7);
				
				
				this->Close();
				
			}
			else {
				MessageBox::Show("username lub password nieprawidlowe"),
					MessageBoxButtons::OK;

			}
			sqlConn.Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("error w polaczeniu do bazy danych" + e->Message),
				MessageBoxButtons::OK;
		}
	}
	private: System::Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
		this->Close();
	}
	private: System::Void buttonRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenRegisterForm();
}
	private: System::Void tbusername_Click(System::Object^ sender, System::EventArgs^ e) {
		tbusername->Clear();
}
	private: System::Void tbpassword_Click(System::Object^ sender, System::EventArgs^ e) {
		tbpassword->Clear();
}
};
}

