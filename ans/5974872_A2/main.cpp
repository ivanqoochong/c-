#include <iostream>
#include"Bank.h"
#include"account.h"
using namespace std;

// main code
int main()
{
    Bank bank1[3];

    int found = 0, acno, ch, i;
    double interest;
    // Defualt create 3 account first
    for (i = 0; i <= 2; i++) {
        bank1[i].OpenAccount();
    }

    do {
        // Menu
        cout << "\n\n1:Display All\n2:Search By Account No\n3:Deposit\n4:Withdraw\n5:Compute Interest\n6:Exit" << endl;

       
        cout << "Please input your choice: ";
        cin >> ch;

        switch (ch) {
        case 1: // displating account info
            for (i = 0; i <= 2; i++) {
                bank1[i].ShowAccount();
            }
            break;
        case 2: // searching the record
            cout << "Account Number? ";
            cin >> acno;
            for (i = 0; i <= 2; i++) {
                found = bank1[i].Search(acno);
                if (found)
                    break;
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 3: // deposit operation
            cout << "Account Number To Deposit Amount? ";
            cin >> acno;
            for (i = 0; i <= 2; i++) {
                found = bank1[i].Search(acno);
                if (found) {
                    bank1[i].deposit();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 4: // withdraw operation
            cout << "Account Number To Withdraw Amount? ";
            cin >> acno;
            for (i = 0; i <= 2; i++) {
                found = bank1[i].Search(acno);
                if (found) {
                    bank1[i].withdraw();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 5: // compute interest
            cout << "Enter The Interest ";
            cin >> interest;
            for (i = 0; i <= 2; i++) {
                    bank1[i].giveInterest(interest);
            }
            cout << "Interest Calculated" << endl;
            break;
        case 6: // exit
            cout << "Have acno nice day" << endl;
            break;
        }
    } while (ch != 6);
    return 0;
}