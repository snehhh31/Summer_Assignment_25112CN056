// Q103 Write a program to Create ATM simulation.
#include <iostream>
using namespace std;

int main()
{
    int choice;
    double balance = 5000.0, amount;
    
    cout << "--- ATM SIMULATION ---\n";
    
    do
    {
        cout << "\n1. CHECK BALANCE\n";
        cout << "2. DEPOSIT MONEY\n";
        cout << "3. WITHDRAW MONEY\n";
        cout << "4. EXIT\n";
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "YOUR CURRENT BALANCE IS: $" << balance << "\n";
                break;
            case 2:
                cout << "ENTER AMOUNT TO DEPOSIT: ";
                cin >> amount;
                balance += amount;
                cout << "$" << amount << " DEPOSITED SUCCESSFULLY.\n";
                break;
            case 3:
                cout << "ENTER AMOUNT TO WITHDRAW: ";
                cin >> amount;
                if (amount <= balance)
                {
                    balance -= amount;
                    cout << "$" << amount << " WITHDRAWN SUCCESSFULLY.\n";
                }
                else
                {
                    cout << "INSUFFICIENT BALANCE!\n";
                }
                break;
            case 4:
                cout << "THANK YOU FOR USING OUR ATM.\n";
                break;
            default:
                cout << "INVALID CHOICE! PLEASE TRY AGAIN.\n";
        }
    } while (choice != 4);
    
    return 0;
}