#pragma once
using namespace System;
using namespace System::Data::SqlClient;

ref class sqlconnection
{
	String^ connectionString;
	
	public:
		void connect(){
			connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=dane;Integrated Security=True";
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			connection->Open();
		}
};