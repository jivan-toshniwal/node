#include <iostream>
#include "Savings_Account.h"
#include "Account.h"

Savings_Account::Savings_Account(std::string n, double a, double b)
	:Account(n,a), int_rate(b) {}

std::ostream& operator<<(std::ostream& os, Savings_Account sa) {
	os << "[Savings Account: " << sa.get_name() << ": "<<sa.get_balance() <<", " << sa.int_rate << "% ]";
	return os;
}


