// Q119 Write a program to Create mini employee management system.
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int empIds[100];
    char empNames[100][50];
    int count = 0, choice;
    
    cout << "--- MINI EMPLOYEE MANAGEMENT SYSTEM ---\n";
    
    do
    {
        cout << "\n1. REGISTER EMPLOYEE\n";
        cout << "2. DISPLAY EMPLOYEES\n";
        cout << "3. EXIT\n";
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "ENTER EMPLOYEE ID: ";
                cin >> empIds[count];
                cout << "ENTER EMPLOYEE NAME: ";
                cin >> empNames[count];
                count++;
                cout << "EMPLOYEE PROFILE CREATED.\n";
                break;
                
            case 2:
                if (count == 0)
                {
                    cout << "NO EMPLOYEES FOUND.\n";
                }
                else
                {
                    cout << "\n--- WORKFORCE REGISTRY ---\n";
                    for (int i = 0; i < count; i++)
                    {
                        cout << "ID: " << empIds[i] 
                             << " | NAME: " << empNames[i] << "\n";
                    }
                }
                break;
                
            case 3:
                cout << "SHUTTING DOWN SYSTEM...\n";
                break;
                
            default:
                cout << "INVALID OPTION DETECTED!\n";
        }
    } while (choice != 3);
    
    return 0;
}