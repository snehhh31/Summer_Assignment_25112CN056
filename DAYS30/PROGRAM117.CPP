// Q117 Write a program to Create student record system using arrays and strings.
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int rollNumbers[100];
    char names[100][50];
    float marks[100];
    int count = 0, choice;
    
    cout << "--- STUDENT RECORD SYSTEM ---\n";
    
    do
    {
        cout << "\n1. ADD STUDENT\n";
        cout << "2. DISPLAY ALL STUDENTS\n";
        cout << "3. EXIT\n";
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "ENTER ROLL NUMBER: ";
                cin >> rollNumbers[count];
                cout << "ENTER NAME: ";
                cin >> names[count];
                cout << "ENTER MARKS: ";
                cin >> marks[count];
                count++;
                cout << "STUDENT RECORD RECORDED.\n";
                break;
                
            case 2:
                if (count == 0)
                {
                    cout << "NO RECORDS FOUND.\n";
                }
                else
                {
                    cout << "\n--- RECORD DATABASE ---\n";
                    for (int i = 0; i < count; i++)
                    {
                        cout << "ROLL NO: " << rollNumbers[i] 
                             << " | NAME: " << names[i] 
                             << " | MARKS: " << marks[i] << "\n";
                    }
                }
                break;
                
            case 3:
                cout << "EXITING SYSTEM...\n";
                break;
                
            default:
                cout << "INVALID CHOICE! TRY AGAIN.\n";
        }
    } while (choice != 3);
    
    return 0;
}