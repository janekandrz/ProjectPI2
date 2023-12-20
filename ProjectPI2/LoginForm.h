#pragma once
#include"user.h"
#include"dashboard.h"
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
		User^ user;
		LoginForm(void)
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
			this->labelLogin = (gcnew System::Windows::Forms::Label());
			this->labelusername = (gcnew System::Windows::Forms::Label());
			this->labelpassword = (gcnew System::Windows::Forms::Label());
			this->tbusername = (gcnew System::Windows::Forms::TextBox());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// buttonOK
			// 
			this->buttonOK->Location = System::Drawing::Point(297, 397);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(75, 23);
			this->buttonOK->TabIndex = 0;
			this->buttonOK->Text = L"OK";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &LoginForm::buttonOK_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(378, 397);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(75, 23);
			this->buttonCancel->TabIndex = 1;
			this->buttonCancel->Text = L"Cancel";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &LoginForm::buttonCancel_Click);
			// 
			// labelLogin
			// 
			this->labelLogin->AutoSize = true;
			this->labelLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelLogin->Location = System::Drawing::Point(191, 35);
			this->labelLogin->Name = L"labelLogin";
			this->labelLogin->Size = System::Drawing::Size(73, 29);
			this->labelLogin->TabIndex = 2;
			this->labelLogin->Text = L"Login";
			// 
			// labelusername
			// 
			this->labelusername->AutoSize = true;
			this->labelusername->Location = System::Drawing::Point(16, 118);
			this->labelusername->Name = L"labelusername";
			this->labelusername->Size = System::Drawing::Size(67, 16);
			this->labelusername->TabIndex = 3;
			this->labelusername->Text = L"username";
			// 
			// labelpassword
			// 
			this->labelpassword->AutoSize = true;
			this->labelpassword->Location = System::Drawing::Point(16, 178);
			this->labelpassword->Name = L"labelpassword";
			this->labelpassword->Size = System::Drawing::Size(66, 16);
			this->labelpassword->TabIndex = 4;
			this->labelpassword->Text = L"password";
			// 
			// tbusername
			// 
			this->tbusername->Location = System::Drawing::Point(100, 118);
			this->tbusername->Name = L"tbusername";
			this->tbusername->Size = System::Drawing::Size(353, 22);
			this->tbusername->TabIndex = 5;
			// 
			// tbpassword
			// 
			this->tbpassword->Location = System::Drawing::Point(100, 178);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->PasswordChar = '*';
			this->tbpassword->Size = System::Drawing::Size(353, 22);
			this->tbpassword->TabIndex = 6;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(462, 433);
			this->Controls->Add(this->tbpassword);
			this->Controls->Add(this->tbusername);
			this->Controls->Add(this->labelpassword);
			this->Controls->Add(this->labelusername);
			this->Controls->Add(this->labelLogin);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonOK);
			this->MaximumSize = System::Drawing::Size(480, 480);
			this->MinimumSize = System::Drawing::Size(480, 480);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}


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
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->username = reader->GetString(1);
				user->email = reader->GetString(2);
				user->pesel = reader->GetString(3);
				user->address = reader->GetString(5);
				user->password = reader->GetString(4);

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
		this->Close();
	}
	
};
}

