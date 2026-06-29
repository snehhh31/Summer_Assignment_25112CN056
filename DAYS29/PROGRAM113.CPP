// Q113 Write a program to Create menu-driven calculator.
#include <iostream>
using namespace std;

int main()
{
    int choice;
    double num1, num2;
    
    cout << "--- MENU-DRIVEN CALCULATOR ---\n";
    
    do
    {
        cout << "\n1. ADDITION\n";
        cout << "2. SUBTRACTION\n";
        cout << "3. MULTIPLICATION\n";
        cout << "4. DIVISION\n";
        cout << "5. EXIT\n";
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;
        
        if (choice >= 1 && choice <= 4)
        {
            cout << "ENTER TWO NUMBERS: ";
            cin >> num1 >> num2;
        }
        
        switch (choice)
        {
            case 1:
                cout << "RESULT: " << (num1 + num2) << "\n";
                break;
            case 2:
                cout << "RESULT: " << (num1 - num2) << "\n";
                break;
            case 3:
                cout << "RESULT: " << (num1 * num2) << "\n";
                break;
            case 4:
                if (num2 != 0)
                    cout << "RESULT: " << (num1 / num2) << "\n";
                else
                    cout << "ERROR! DIVISION BY ZERO IS NOT ALLOWED.\n";
                break;
            case 5:
                cout << "EXITING CALCULATOR...\n";
                break;
            default:
                cout << "INVALID CHOICE! TRY AGAIN.\n";
        }
    } while (choice != 5);
    
    return 0;
}