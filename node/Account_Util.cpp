#include "Account_Util.h"

void display(const std::vector<Account>& vec) {
	std::cout << "\n=== Accounts ==========================================" << std::endl;
	for (const auto& a : vec)
		std::cout << a << std::endl;
}

void deposit(std::vector<Account>& vec, double a) {
	std::cout << "\n=== Depositing to Accounts =================================" << std::endl;
	for (auto& c : vec) {
		double x = c.get_balance() + a;
		c.set_balance(x);
			std::cout << "Deposited " << a << " to " << c << std::endl;
	}
}

void withdraw(std::vector<Account>& vec, double a) {
	std::cout << "\n=== Withdrawing from Accounts ==============================" << std::endl;
	for (auto& c : vec) {
		if (c.get_balance() >= a) {
			double x = c.get_balance() - a;
			c.set_balance(x);
			std::cout << "Withdrew " << a << " from " << c << std::endl;
		}
		else {
			std::cout << "Failed withdrawal " << a << " to " << c << std::endl;
		}
	}
}

void display(const std::vector<Savings_Account>& vec) {
	std::cout << "\n=== Savings Accounts ====================================" << std::endl;
	for (const auto& a : vec)
		std::cout << a << std::endl;
}

void deposit(std::vector<Savings_Account>& vec, double a) {
	std::cout << "\n=== Depositing to Savings Accounts ==========================" << std::endl;
	for (auto& c : vec) {
		double x = (c.get_balance() + a) + a* (c.get_int_rate() / 100);
		c.set_balance(x);
		std::cout << "Deposited " << a << " to " << c << std::endl;
	}
}

void withdraw(std::vector<Savings_Account>& vec, double a) {
	std::cout << "\n=== Withdrawing from Savings Accounts ======================" << std::endl;
	for (auto& c : vec) {
		if (c.get_balance() >= a) {
			double x = c.get_balance() - a;
			c.set_balance(x);
			std::cout << "Withdrew " << a << " from " << c << std::endl;
		}
		else {
			std::cout << "Failed withdrawal " << a << " to " << c << std::endl;
		}
	}
}