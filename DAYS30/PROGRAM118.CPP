// Q118 Write a program to Create mini library system.
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int bookIds[100];
    char titles[100][50];
    int count = 0, choice;
    
    cout << "--- MINI LIBRARY SYSTEM ---\n";
    
    do
    {
        cout << "\n1. ADD BOOK\n";
        cout << "2. DISPLAY ALL BOOKS\n";
        cout << "3. EXIT\n";
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "ENTER BOOK ID: ";
                cin >> bookIds[count];
                cout << "ENTER BOOK TITLE: ";
                cin >> titles[count];
                count++;
                cout << "BOOK ADDED TO SHELF.\n";
                break;
                
            case 2:
                if (count == 0)
                {
                    cout << "LIBRARY IS EMPTY.\n";
                }
                else
                {
                    cout << "\n--- AVAILABLE BOOKS ---\n";
                    for (int i = 0; i < count; i++)
                    {
                        cout << "BOOK ID: " << bookIds[i] 
                             << " | TITLE: " << titles[i] << "\n";
                    }
                }
                break;
                
            case 3:
                cout << "CLOSING LIBRARY...\n";
                break;
                
            default:
                cout << "INVALID CHOICE!\n";
        }
    } while (choice != 3);
    
    return 0;
}