#pragma once
#include<iostream>
#include<string>
class Account{
	double balance;
	std::string name;
public:
	Account(std::string = "Unnamed account", double a = 0.0);
	friend std::ostream& operator<<(std::ostream& os, const Account rhs);
	void withdraw(double a);
	double get_balance() {
		return balance;
	}
	std::string get_name() {
		return name;
	}
	double set_balance(double a) {
		balance = a;
		return balance;
	}
};

