#pragma once
#include "Account.h"
class Savings_Account: public Account{
protected:
	double int_rate;
public:
	Savings_Account(std::string = "Unnamed Savings Account", double = 0.0, double = 0.0);
	friend std::ostream& operator<<(std::ostream& os, Savings_Account sa);
	double get_int_rate() { return int_rate; }
};

