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





	private: System::Windows::Forms::TextBox^ TBusername;
	private: System::Windows::Forms::TextBox^ TBemail;
	private: System::Windows::Forms::TextBox^ TBpassword;
	private: System::Windows::Forms::TextBox^ TBpassword2;
	private: System::Windows::Forms::TextBox^ TBadress;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ TBemail2;
	private: System::Windows::Forms::TextBox^ TBpesel;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::PictureBox^ pictureBox7;

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
			this->TBusername = (gcnew System::Windows::Forms::TextBox());
			this->TBemail = (gcnew System::Windows::Forms::TextBox());
			this->TBpassword = (gcnew System::Windows::Forms::TextBox());
			this->TBpassword2 = (gcnew System::Windows::Forms::TextBox());
			this->TBadress = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TBemail2 = (gcnew System::Windows::Forms::TextBox());
			this->TBpesel = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonOK
			// 
			this->buttonOK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->buttonOK->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonOK->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->buttonOK->Location = System::Drawing::Point(43, 490);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(329, 33);
			this->buttonOK->TabIndex = 0;
			this->buttonOK->Text = L"Register";
			this->buttonOK->UseVisualStyleBackColor = false;
			this->buttonOK->Click += gcnew System::EventHandler(this, &RegisterForm::buttonOK_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCancel->ForeColor = System::Drawing::Color::White;
			this->buttonCancel->Location = System::Drawing::Point(329, 551);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(77, 28);
			this->buttonCancel->TabIndex = 1;
			this->buttonCancel->Text = L"Cancel";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &RegisterForm::buttonCancel_Click);
			// 
			// TBusername
			// 
			this->TBusername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->TBusername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TBusername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->TBusername->ForeColor = System::Drawing::Color::White;
			this->TBusername->Location = System::Drawing::Point(82, 206);
			this->TBusername->Name = L"TBusername";
			this->TBusername->Size = System::Drawing::Size(384, 17);
			this->TBusername->TabIndex = 7;
			this->TBusername->Text = L"Username";
			this->TBusername->Click += gcnew System::EventHandler(this, &RegisterForm::TBusername_Click);
			// 
			// TBemail
			// 
			this->TBemail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->TBemail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TBemail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->TBemail->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->TBemail->Location = System::Drawing::Point(82, 91);
			this->TBemail->Name = L"TBemail";
			this->TBemail->Size = System::Drawing::Size(384, 17);
			this->TBemail->TabIndex = 8;
			this->TBemail->Text = L"email";
			this->TBemail->Click += gcnew System::EventHandler(this, &RegisterForm::TBemail_Click);
			// 
			// TBpassword
			// 
			this->TBpassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->TBpassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TBpassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->TBpassword->ForeColor = System::Drawing::Color::White;
			this->TBpassword->Location = System::Drawing::Point(82, 262);
			this->TBpassword->Name = L"TBpassword";
			this->TBpassword->PasswordChar = '*';
			this->TBpassword->Size = System::Drawing::Size(384, 17);
			this->TBpassword->TabIndex = 9;
			this->TBpassword->Text = L"Password";
			this->TBpassword->Click += gcnew System::EventHandler(this, &RegisterForm::TBpassword_Click);
			// 
			// TBpassword2
			// 
			this->TBpassword2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->TBpassword2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TBpassword2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->TBpassword2->ForeColor = System::Drawing::Color::White;
			this->TBpassword2->Location = System::Drawing::Point(82, 321);
			this->TBpassword2->Name = L"TBpassword2";
			this->TBpassword2->PasswordChar = '*';
			this->TBpassword2->Size = System::Drawing::Size(384, 17);
			this->TBpassword2->TabIndex = 10;
			this->TBpassword2->Tag = L"";
			this->TBpassword2->Text = L"Password";
			this->TBpassword2->Click += gcnew System::EventHandler(this, &RegisterForm::TBpassword2_Click);
			// 
			// TBadress
			// 
			this->TBadress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->TBadress->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TBadress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->TBadress->ForeColor = System::Drawing::Color::White;
			this->TBadress->Location = System::Drawing::Point(82, 370);
			this->TBadress->Name = L"TBadress";
			this->TBadress->Size = System::Drawing::Size(384, 17);
			this->TBadress->TabIndex = 11;
			this->TBadress->Text = L"Adress";
			this->TBadress->Click += gcnew System::EventHandler(this, &RegisterForm::TBadress_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(147, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 32);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Register";
			// 
			// TBemail2
			// 
			this->TBemail2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->TBemail2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TBemail2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->TBemail2->ForeColor = System::Drawing::Color::White;
			this->TBemail2->Location = System::Drawing::Point(82, 150);
			this->TBemail2->Name = L"TBemail2";
			this->TBemail2->Size = System::Drawing::Size(384, 17);
			this->TBemail2->TabIndex = 14;
			this->TBemail2->Text = L"confirm email";
			this->TBemail2->Click += gcnew System::EventHandler(this, &RegisterForm::TBemail2_Click);
			// 
			// TBpesel
			// 
			this->TBpesel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->TBpesel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TBpesel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->TBpesel->ForeColor = System::Drawing::Color::White;
			this->TBpesel->Location = System::Drawing::Point(82, 420);
			this->TBpesel->Name = L"TBpesel";
			this->TBpesel->Size = System::Drawing::Size(384, 17);
			this->TBpesel->TabIndex = 15;
			this->TBpesel->Text = L"Pesel";
			this->TBpesel->Click += gcnew System::EventHandler(this, &RegisterForm::TBpesel_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(43, 84);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(33, 29);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(82, 112);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(290, 1);
			this->panel1->TabIndex = 18;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(82, 171);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(290, 1);
			this->panel2->TabIndex = 20;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(43, 143);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(33, 29);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 19;
			this->pictureBox2->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(82, 227);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(290, 1);
			this->panel3->TabIndex = 23;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(43, 199);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(33, 29);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 22;
			this->pictureBox3->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(82, 283);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(290, 1);
			this->panel4->TabIndex = 26;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(43, 255);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(33, 29);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 25;
			this->pictureBox4->TabStop = false;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(82, 338);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(290, 1);
			this->panel5->TabIndex = 28;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(43, 310);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(33, 29);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 27;
			this->pictureBox5->TabStop = false;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(82, 391);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(290, 1);
			this->panel6->TabIndex = 30;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(43, 363);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(33, 29);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 29;
			this->pictureBox6->TabStop = false;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Location = System::Drawing::Point(82, 441);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(290, 1);
			this->panel7->TabIndex = 32;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(43, 417);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(33, 25);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 31;
			this->pictureBox7->TabStop = false;
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->ClientSize = System::Drawing::Size(414, 587);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->TBpesel);
			this->Controls->Add(this->TBemail2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TBadress);
			this->Controls->Add(this->TBpassword2);
			this->Controls->Add(this->TBpassword);
			this->Controls->Add(this->TBemail);
			this->Controls->Add(this->TBusername);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonOK);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(436, 638);
			this->MinimumSize = System::Drawing::Size(436, 638);
			this->Name = L"RegisterForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
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
private: System::Void TBemail_Click(System::Object^ sender, System::EventArgs^ e) {
		TBemail->Clear();
}
private: System::Void TBemail2_Click(System::Object^ sender, System::EventArgs^ e) {
		TBemail2->Clear();
}
private: System::Void TBusername_Click(System::Object^ sender, System::EventArgs^ e) {
		TBusername->Clear();
}
private: System::Void TBpassword_Click(System::Object^ sender, System::EventArgs^ e) {
		TBpassword->Clear();
}
private: System::Void TBpassword2_Click(System::Object^ sender, System::EventArgs^ e) {
		TBpassword2->Clear();
}
private: System::Void TBadress_Click(System::Object^ sender, System::EventArgs^ e) {
		TBadress->Clear();
}
private: System::Void TBpesel_Click(System::Object^ sender, System::EventArgs^ e) {
		TBpesel->Clear();
}
};
}
