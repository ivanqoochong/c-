#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<iomanip>
using namespace std;

class account
{
	int ac_num;
	char name[50];
	int deposit;
	char type;
public:
	void create_account();	//function to get data from user
	void show_account() const;	//function to show data on screen
	void dep(int);	//function to accept amount and add to balance amount
	void draw(int);	//function to accept amount and subtract from balance amount
	void intrate(double);//function to accept amount and compute interest
	void report() const;	//function to show data in tabular format
	int retacno() const;	//function to return account number
	int retdeposit() const;	//function to return balance amount
	char rettype() const;	//function to return type of account
};

//function declaration
void write_account();	//function to write record in binary file
void display_sp(int);	//function to display account details given by user
void delete_account(int);	//function to delete record of file
void display_all();		//function to display all account details
void deposit_withdraw(int, int); // function to desposit/withdraw amount for given account

#endif // !ACCOUNT_H

