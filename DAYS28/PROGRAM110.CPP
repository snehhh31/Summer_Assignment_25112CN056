// Q110 Write a program to Create bank account system.
#include <iostream>
using namespace std;

struct BankAccount
{
    int accountNo;
    char name[100];
    double balance;
};

int main()
{
    BankAccount accounts[100];
    int count = 0, choice;
    
    cout << "--- BANK ACCOUNT SYSTEM ---\n";
    
    do
    {
        cout << "\n1. CREATE ACCOUNT\n";
        cout << "2. DEPOSIT MONEY\n";
        cout << "3. WITHDRAW MONEY\n";
        cout << "4. DISPLAY ACCOUNT DETAILS\n";
        cout << "5. EXIT\n";
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "ENTER NEW ACCOUNT NUMBER: ";
                cin >> accounts[count].accountNo;
                cout << "ENTER ACCOUNT HOLDER NAME: ";
                cin >> accounts[count].name;
                cout << "ENTER INITIAL DEPOSIT: ";
                cin >> accounts[count].balance;
                count++;
                cout << "ACCOUNT CREATED SUCCESSFULLY!\n";
                break;
                
            case 2:
                {
                    int accNo, found = 0;
                    double amt;
                    cout << "ENTER ACCOUNT NUMBER: ";
                    cin >> accNo;
                    for (int i = 0; i < count; i++)
                    {
                        if (accounts[i].accountNo == accNo)
                        {
                            cout << "ENTER AMOUNT TO DEPOSIT: ";
                            cin >> amt;
                            accounts[i].balance += amt;
                            cout << "DEPOSITED SUCCESSFULLY! NEW BALANCE: $" << accounts[i].balance << "\n";
                            found = 1;
                            break;
                        }
                    }
                    if (!found) cout << "ACCOUNT NOT FOUND.\n";
                }
                break;
                
            case 3:
                {
                    int accNo, found = 0;
                    double amt;
                    cout << "ENTER ACCOUNT NUMBER: ";
                    cin >> accNo;
                    for (int i = 0; i < count; i++)
                    {
                        if (accounts[i].accountNo == accNo)
                        {
                            cout << "ENTER AMOUNT TO WITHDRAW: ";
                            cin >> amt;
                            if (amt <= accounts[i].balance)
                            {
                                accounts[i].balance -= amt;
                                cout << "WITHDRAWAL SUCCESSFUL! NEW BALANCE: $" << accounts[i].balance << "\n";
                            }
                            else
                            {
                                cout << "INSUFFICIENT FUNDS!\n";
                            }
                            found = 1;
                            break;
                        }
                    }
                    if (!found) cout << "ACCOUNT NOT FOUND.\n";
                }
                break;
                
            case 4:
                {
                    int accNo, found = 0;
                    cout << "ENTER ACCOUNT NUMBER: ";
                    cin >> accNo;
                    for (int i = 0; i < count; i++)
                    {
                        if (accounts[i].accountNo == accNo)
                        {
                            cout << "\n--- ACCOUNT DETAILS ---\n";
                            cout << "ACC NO: " << accounts[i].accountNo << "\n";
                            cout << "HOLDER: " << accounts[i].name << "\n";
                            cout << "BALANCE: $" << accounts[i].balance << "\n";
                            found = 1;
                            break;
                        }
                    }
                    if (!found) cout << "ACCOUNT NOT FOUND.\n";
                }
                break;
                
            case 5:
                cout << "EXITING BANKING SYSTEM...\n";
                break;
                
            default:
                cout << "INVALID CHOICE! PLEASE TRY AGAIN.\n";
        }
    } while (choice != 5);
    
    return 0;
}