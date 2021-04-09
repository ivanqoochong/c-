#ifndef BANK_H
#define BANK_H
#include"account.h"

using namespace std;

class Bank : public Account{
private:
    int acno;
    char name[30];
    double balance;

public:
    Bank();
    Bank(const Bank &c);
    ~Bank();
    void OpenAccount();
    void ShowAccount();
    void deposit();
    void withdraw();
    void giveInterest(double in);
    int Search(int);
};



#endif // !BANK_H
