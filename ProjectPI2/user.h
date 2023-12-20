#pragma once

using namespace System;

public ref class User {
public:
	int id;
	static String^ username;
	static String^ email;
	static String^ password;
	static String^ pesel;
	static String^ address;
	float saldo;
};