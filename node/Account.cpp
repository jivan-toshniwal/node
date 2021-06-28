#include "Account.h"
#include<iostream>

Account::Account(std::string n, double a)
	:balance(a), name(n){}

std::ostream& operator<<(std::ostream& os, const Account rhs) {
	os << "[Account: "<<rhs.name<<": "<<rhs.balance<<"]";
	return os;
}

void Account::withdraw(double a) {
	if (balance < a) {
		std::cout << "Insufficient funds!\n";
	}
	else balance -= a;
}

