#pragma once
#include "Account.h"
#include "Savings_Account.h"
#include <vector>

void display(const std::vector<Account>& vec);
void deposit(std::vector<Account>& vec, double a);
void withdraw(std::vector<Account>& vec, double a);
void display(const std::vector<Savings_Account>& vec);
void deposit(std::vector<Savings_Account>& vec, double a);
void withdraw(std::vector<Savings_Account>& vec, double a);


