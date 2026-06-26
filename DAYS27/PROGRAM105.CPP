// Q105 Write a program to Create student record management system.
#include <iostream>
#include <cstring>
using namespace std;

struct Student
{
    int rollNo;
    char name[100];
    float marks;
};

int main()
{
    Student students[100];
    int count = 0, choice;
    
    cout << "--- STUDENT RECORD MANAGEMENT SYSTEM ---\n";
    
    do
    {
        cout << "\n1. ADD STUDENT RECORD\n";
        cout << "2. DISPLAY ALL RECORDS\n";
        cout << "3. SEARCH STUDENT BY ROLL NO\n";
        cout << "4. EXIT\n";
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "ENTER ROLL NUMBER: ";
                cin >> students[count].rollNo;
                cout << "ENTER NAME: ";
                cin >> students[count].name;
                cout << "ENTER MARKS: ";
                cin >> students[count].marks;
                count++;
                cout << "RECORD ADDED SUCCESSFULLY!\n";
                break;
                
            case 2:
                if (count == 0)
                {
                    cout << "NO RECORDS FOUND.\n";
                }
                else
                {
                    cout << "\n--- STUDENT RECORDS ---\n";
                    for (int i = 0; i < count; i++)
                    {
                        cout << "ROLL NO: " << students[i].rollNo 
                             << " | NAME: " << students[i].name 
                             << " | MARKS: " << students[i].marks << "\n";
                    }
                }
                break;
                
            case 3:
                if (count == 0)
                {
                    cout << "NO RECORDS TO SEARCH.\n";
                }
                else
                {
                    int sRoll, found = 0;
                    cout << "ENTER ROLL NUMBER TO SEARCH: ";
                    cin >> sRoll;
                    for (int i = 0; i < count; i++)
                    {
                        if (students[i].rollNo == sRoll)
                        {
                            cout << "RECORD FOUND!\n";
                            cout << "NAME: " << students[i].name << " | MARKS: " << students[i].marks << "\n";
                            found = 1;
                            break;
                        }
                    }
                    if (found == 0) cout << "RECORD NOT FOUND.\n";
                }
                break;
                
            case 4:
                cout << "EXITING SYSTEM...\n";
                break;
                
            default:
                cout << "INVALID CHOICE! PLEASE TRY AGAIN.\n";
        }
    } while (choice != 4);
    
    return 0;
}