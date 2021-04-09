#include <iostream>
#include "account.h"
#include"Bank.h"

using namespace std;

Account::Account() {
	name = "";
	balance = 0;
}

void Account::setName(string name) {
	this->name = name;
}

string Account::getName() {
	return name;
}

void Account::setBalance(double balance) {
	this->balance = balance;
}

double Account::getBalance() {
	return balance;
}

Account::~Account() {
	cout << "Destructor is called." << endl;
}