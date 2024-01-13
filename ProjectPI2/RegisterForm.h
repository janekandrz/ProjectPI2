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
	/// Podsumowanie informacji o RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		bool IsValidEmail(System::String^ email)
		{
			System::Text::RegularExpressions::Regex^ emailRegex = gcnew System::Text::RegularExpressions::Regex(
				"(\\w+([-+.']\\w+)*@\\w+([-.]\\w+)*\\.\\w+([-.]\\w+)*)"
			);
			return emailRegex->IsMatch(email);
		}

		bool IsDigitsOnly(String^ arg_pesel)
		{
				for each(char c in arg_pesel)
				{
					if (c < '0' || c > '9')
						return false;
				}

				return true;
		}
		int generateNumber() {
			Random^ rnd = gcnew Random();
			int number = rnd->Next(100000000, 999999999);
			return number;
		}

		RegisterForm(void)
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonOK;
	private: System::Windows::Forms::Button^ buttonCancel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ TBusername;
	private: System::Windows::Forms::TextBox^ TBemail;
	private: System::Windows::Forms::TextBox^ TBpassword;
	private: System::Windows::Forms::TextBox^ TBpassword2;
	private: System::Windows::Forms::TextBox^ TBadress;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ TBemail2;
	private: System::Windows::Forms::TextBox^ TBpesel;
	private: System::Windows::Forms::Label^ label7;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TBusername = (gcnew System::Windows::Forms::TextBox());
			this->TBemail = (gcnew System::Windows::Forms::TextBox());
			this->TBpassword = (gcnew System::Windows::Forms::TextBox());
			this->TBpassword2 = (gcnew System::Windows::Forms::TextBox());
			this->TBadress = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TBemail2 = (gcnew System::Windows::Forms::TextBox());
			this->TBpesel = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonOK
			// 
			this->buttonOK->ForeColor = System::Drawing::Color::Black;
			this->buttonOK->Location = System::Drawing::Point(228, 657);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(75, 23);
			this->buttonOK->TabIndex = 0;
			this->buttonOK->Text = L"OK";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &RegisterForm::buttonOK_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(325, 657);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(75, 23);
			this->buttonCancel->TabIndex = 1;
			this->buttonCancel->Text = L"Cancel";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &RegisterForm::buttonCancel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 258);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"email";
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Location = System::Drawing::Point(10, 319);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(66, 16);
			this->password->TabIndex = 4;
			this->password->Text = L"password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 380);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"confirm password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 444);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"adress";
			// 
			// TBusername
			// 
			this->TBusername->Location = System::Drawing::Point(12, 277);
			this->TBusername->Name = L"TBusername";
			this->TBusername->Size = System::Drawing::Size(388, 22);
			this->TBusername->TabIndex = 7;
			// 
			// TBemail
			// 
			this->TBemail->Location = System::Drawing::Point(12, 155);
			this->TBemail->Name = L"TBemail";
			this->TBemail->Size = System::Drawing::Size(388, 22);
			this->TBemail->TabIndex = 8;
			// 
			// TBpassword
			// 
			this->TBpassword->Location = System::Drawing::Point(12, 338);
			this->TBpassword->Name = L"TBpassword";
			this->TBpassword->PasswordChar = '*';
			this->TBpassword->Size = System::Drawing::Size(388, 22);
			this->TBpassword->TabIndex = 9;
			// 
			// TBpassword2
			// 
			this->TBpassword2->Location = System::Drawing::Point(12, 399);
			this->TBpassword2->Name = L"TBpassword2";
			this->TBpassword2->PasswordChar = '*';
			this->TBpassword2->Size = System::Drawing::Size(388, 22);
			this->TBpassword2->TabIndex = 10;
			// 
			// TBadress
			// 
			this->TBadress->Location = System::Drawing::Point(12, 463);
			this->TBadress->Name = L"TBadress";
			this->TBadress->Size = System::Drawing::Size(388, 22);
			this->TBadress->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(151, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 29);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Register";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 195);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 16);
			this->label6->TabIndex = 13;
			this->label6->Text = L"confirm email ";
			// 
			// TBemail2
			// 
			this->TBemail2->Location = System::Drawing::Point(12, 214);
			this->TBemail2->Name = L"TBemail2";
			this->TBemail2->Size = System::Drawing::Size(388, 22);
			this->TBemail2->TabIndex = 14;
			// 
			// TBpesel
			// 
			this->TBpesel->Location = System::Drawing::Point(12, 518);
			this->TBpesel->Name = L"TBpesel";
			this->TBpesel->Size = System::Drawing::Size(388, 22);
			this->TBpesel->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 499);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 16);
			this->label7->TabIndex = 16;
			this->label7->Text = L"pesel";
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(412, 704);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->TBpesel);
			this->Controls->Add(this->TBemail2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TBadress);
			this->Controls->Add(this->TBpassword2);
			this->Controls->Add(this->TBpassword);
			this->Controls->Add(this->TBemail);
			this->Controls->Add(this->TBusername);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->password);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonOK);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(430, 751);
			this->MinimumSize = System::Drawing::Size(430, 751);
			this->Name = L"RegisterForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	throw gcnew Exception("exit");
}
private: System::Void buttonOK_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username = this->TBusername->Text;
	String^ password = this->TBpassword->Text;
	String^ password2 = this->TBpassword2->Text;
	String^ email = this->TBemail->Text;
	String^ email2 = this->TBemail2->Text;
	String^ address = this->TBadress->Text;
	String^ pesel = this->TBpesel->Text;

	if (username->Length == 0 || password->Length == 0 || password2->Length == 0 || email->Length == 0 || email->Length == 0 || email2->Length == 0 || pesel->Length==0) {
		MessageBox::Show("Prosze wprowadzic wszystkie dane"), MessageBoxButtons::OK;
		return;
	}
	else if (password != password2) {
		MessageBox::Show("Niezgodne has³a"), MessageBoxButtons::OK;
		return;
	}
	else if (email != email2) {
		MessageBox::Show("Niezgodny email"), MessageBoxButtons::OK;
		return;
	}
	else if(pesel->Length!=11) {
		MessageBox::Show("Niepoprawny pesel"), MessageBoxButtons::OK;
		return;
	}
	else if(IsValidEmail(email)==false) {
		MessageBox::Show("Niepoprawny email"), MessageBoxButtons::OK;
		return;
	}
	else if (IsDigitsOnly(pesel) == false) {
		MessageBox::Show("Pesel musi skladac sie z samych cyfr"), MessageBoxButtons::OK;
		return;
	}
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=dane;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ sqlQuery = "INSERT INTO users (username, email, password, address, pesel, saldo, nr) VALUES (@username, @email, @password, @address, @pesel, @saldo, @nr)";
		SqlCommand command(sqlQuery, % sqlConn);

		command.Parameters->AddWithValue("@username", username);
		command.Parameters->AddWithValue("@password", password);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@address", address);
		command.Parameters->AddWithValue("@pesel", pesel);
		command.Parameters->AddWithValue("@saldo", 0);
		command.Parameters->AddWithValue("@nr", generateNumber());

		SqlDataReader^ reader = command.ExecuteReader();
		sqlConn.Close();

		MessageBox::Show("Zarejestrowano"), MessageBoxButtons::OK;
		this->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message), MessageBoxButtons::OK;
	}
}
};
}
