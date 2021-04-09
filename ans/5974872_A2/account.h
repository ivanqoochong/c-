#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<string>


using namespace std;

class Account
{
public:
	Account();
	~Account();
	void setName(string name);
	string getName();
	void setBalance(double balance);
	double getBalance();

private:
	string name;
	double balance;
};

#endif // !ACCOUNT_H
