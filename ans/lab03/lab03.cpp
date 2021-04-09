#include<iostream>
#include<fstream>
#include<cctype>
#include "account.h"
using namespace std;

int main()
{
	char ch;
	int num;
	do
	{
		system("cls");
		cout << "\n\n\n\tMAIN MENU";
		cout << "\n\n\tO/o. NEW ACCOUNT";
		cout << "\n\n\tB/b. BALANCE ENQUIRY";
		cout << "\n\n\tD/d. DEPOSIT AMOUNT";
		cout << "\n\n\tW/w. WITHDRAW AMOUNT";
		cout << "\n\n\tC/c. CLOSE AN ACCOUNT";
		cout << "\n\n\tI/i. COMPUTE INTEREST";
		cout << "\n\n\tP/p. ALL ACCOUNT HOLDER LIST";
		cout << "\n\n\tE/e. EXIT";
		cout << "\n\n\tSelect Your Transaction Type: ";
		cin >> ch;
		system("cls");
		switch (ch)
		{
		case 'o': case 'O':
			write_account();
			break;

		case 'b': case 'B':
			cout << "\n\n\tEnter The account No. : "; cin >> num;
			display_sp(num);
			break;

		case 'D': case 'd':
			cout << "\n\n\tEnter The account No. : "; cin >> num;
			deposit_withdraw(num, 1);
			display_sp(num);
			break;

		case 'w': case 'W':
			cout << "\n\n\tEnter The account No. : "; cin >> num;
			deposit_withdraw(num, 2);
			display_sp(num);
			break;
		
		case 'c': case'C':
			cout << "\n\n\tEnter The account No. : "; cin >> num;
			delete_account(num);
			break;

		case 'i': case'I': 
			cout << "\n\n\tEnter The account No. : "; cin >> num;
			deposit_withdraw(num, 3);
			break;

		case 'p': case 'P':
			display_all();
			break;
			
			case 'e': case 'E':
			cout << "\n\n\tThanks for using! Bye!";
			exit(0);
			break;
		default:cout << "\a";
		}
		cin.ignore();
		cin.get();
	} while (ch != '8');
	return 0;
}


