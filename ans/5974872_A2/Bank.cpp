#include<iostream>
#include"Bank.h"
#include"account.h"

Bank::Bank() {
    this->acno = acno;
    this->balance = balance;
}
void Bank::OpenAccount()
{
    cout << "Enter Account Number: ";
    cin >> acno;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter  Balance: ";
    cin >> balance;
}
void Bank::ShowAccount()
{
    cout << "Account Number: " << acno << endl;
    cout << "Name: " << name << endl;
    cout << "Balance: " << balance << endl;
}
void Bank::deposit()
{
    long amt;
    cout << "Enter Amount U want to deposit? ";
    cin >> amt;
    balance = balance + amt;
}
void Bank::withdraw()
{
    long amt;
    cout << "Enter Amount U want to withdraw? ";
    cin >> amt;
    if (amt <= balance)
        balance = balance - amt;
    else
        cout << "Less Balance..." << endl;
}

void Bank::giveInterest(double in) {
    in = in / 100;
    balance = balance * in;
    
}

int Bank::Search(int a)
{
    if (acno == a) {
        ShowAccount();
        return (1);
    }
    return (0);
}

Bank::Bank(const Bank& c) {
    this->acno = c.acno;
    this->balance = c.balance;
}

Bank::~Bank() {
    cout << "Destructor is called" << endl;
}
