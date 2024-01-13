#pragma once

using namespace System;

public ref class User {
public:
	static int id;
	static String^ username;
	static String^ email;
	static String^ password;
	static String^ pesel;
	static String^ address;
	static double saldo;
	static int nr;

	User(){
		User::id = id;
		User::username = username;
		User::email = email;
		User::password = password;
		User::pesel = pesel;
		User::address = address;
		User::saldo = saldo;
		User::nr = nr;
	}

	User(int arg_id, String^ arg_username, String^ arg_email, String^ arg_password, String^ arg_pesel, String^ arg_address, double arg_saldo, int arg_nr){
		User::id = arg_id;
		User::username = arg_username;
		User::email = arg_email;
		User::password = arg_password;
		User::pesel = arg_pesel;
		User::address = arg_address;
		User::saldo = arg_saldo;
		User::nr = arg_nr;
	}

	void setEmail(String^ arg_id){
		User::email = arg_id;
	}
};