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
	private: System::Windows::Forms::Label^ labelusername;
	private: System::Windows::Forms::Label^ labelpassword;
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
			this->labelusername = (gcnew System::Windows::Forms::Label());
			this->labelpassword = (gcnew System::Windows::Forms::Label());
			this->tbusername = (gcnew System::Windows::Forms::TextBox());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->buttonRegister = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonOK
			// 
			this->buttonOK->Location = System::Drawing::Point(57, 371);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(295, 31);
			this->buttonOK->TabIndex = 0;
			this->buttonOK->Text = L"Login";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &LoginForm::buttonOK_Click);
			// 
			// buttonCancel
			// 
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
			this->labelLogin->Location = System::Drawing::Point(160, 68);
			this->labelLogin->Name = L"labelLogin";
			this->labelLogin->Size = System::Drawing::Size(85, 32);
			this->labelLogin->TabIndex = 2;
			this->labelLogin->Text = L"Login";
			// 
			// labelusername
			// 
			this->labelusername->AutoSize = true;
			this->labelusername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelusername->Location = System::Drawing::Point(12, 165);
			this->labelusername->Name = L"labelusername";
			this->labelusername->Size = System::Drawing::Size(104, 25);
			this->labelusername->TabIndex = 3;
			this->labelusername->Text = L"username";
			// 
			// labelpassword
			// 
			this->labelpassword->AutoSize = true;
			this->labelpassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelpassword->Location = System::Drawing::Point(12, 254);
			this->labelpassword->Name = L"labelpassword";
			this->labelpassword->Size = System::Drawing::Size(101, 25);
			this->labelpassword->TabIndex = 4;
			this->labelpassword->Text = L"password";
			// 
			// tbusername
			// 
			this->tbusername->Location = System::Drawing::Point(12, 190);
			this->tbusername->Name = L"tbusername";
			this->tbusername->Size = System::Drawing::Size(380, 23);
			this->tbusername->TabIndex = 5;
			// 
			// tbpassword
			// 
			this->tbpassword->Location = System::Drawing::Point(16, 279);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->PasswordChar = '*';
			this->tbpassword->Size = System::Drawing::Size(380, 23);
			this->tbpassword->TabIndex = 6;
			// 
			// buttonRegister
			// 
			this->buttonRegister->Location = System::Drawing::Point(57, 460);
			this->buttonRegister->Name = L"buttonRegister";
			this->buttonRegister->Size = System::Drawing::Size(295, 34);
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
			this->label1->Location = System::Drawing::Point(189, 425);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"or";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(401, 582);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonRegister);
			this->Controls->Add(this->tbpassword);
			this->Controls->Add(this->tbusername);
			this->Controls->Add(this->labelpassword);
			this->Controls->Add(this->labelusername);
			this->Controls->Add(this->labelLogin);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonOK);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"LoginForm";
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
};
}

