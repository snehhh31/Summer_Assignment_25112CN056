// Q115 Write a program to Create menu-driven string operations system.
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[200], str2[200];
    int choice;
    
    cout << "--- MENU-DRIVEN STRING OPERATIONS ---\n";
    
    do
    {
        cout << "\n1. STRING LENGTH\n";
        cout << "2. STRING COPY\n";
        cout << "3. STRING CONCATENATION\n";
        cout << "4. EXIT\n";
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "ENTER STRING: ";
                cin >> str1;
                cout << "LENGTH OF STRING: " << strlen(str1) << "\n";
                break;
                
            case 2:
                cout << "ENTER SOURCE STRING: ";
                cin >> str1;
                strcpy(str2, str1);
                cout << "COPIED STRING IS: " << str2 << "\n";
                break;
                
            case 3:
                cout << "ENTER FIRST STRING: ";
                cin >> str1;
                cout << "ENTER SECOND STRING: ";
                cin >> str2;
                strcat(str1, str2);
                cout << "CONCATENATED STRING IS: " << str1 << "\n";
                break;
                
            case 4:
                cout << "EXITING STRING SYSTEM...\n";
                break;
                
            default:
                cout << "INVALID CHOICE!\n";
        }
    } while (choice != 4);
    
    return 0;
}