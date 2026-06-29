// Q112 Write a program to Create contact management system.
#include <iostream>
#include <cstring>
using namespace std;

struct Contact
{
    char name[100];
    char phone[20];
};

int main()
{
    Contact directory[100];
    int count = 0, choice;
    
    cout << "--- CONTACT MANAGEMENT SYSTEM ---\n";
    
    do
    {
        cout << "\n1. ADD CONTACT\n";
        cout << "2. DISPLAY ALL CONTACTS\n";
        cout << "3. SEARCH CONTACT BY NAME\n";
        cout << "4. EXIT\n";
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "ENTER NAME: ";
                cin >> directory[count].name;
                cout << "ENTER PHONE NUMBER: ";
                cin >> directory[count].phone;
                count++;
                cout << "CONTACT ADDED SUCCESSFULLY!\n";
                break;
                
            case 2:
                if (count == 0)
                {
                    cout << "CONTACT DIRECTORY IS EMPTY.\n";
                }
                else
                {
                    cout << "\n--- CONTACT LIST ---\n";
                    for (int i = 0; i < count; i++)
                    {
                        cout << "NAME: " << directory[i].name << " | PHONE: " << directory[i].phone << "\n";
                    }
                }
                break;
                
            case 3:
                {
                    char sName[100];
                    int found = 0;
                    cout << "ENTER NAME TO SEARCH: ";
                    cin >> sName;
                    for (int i = 0; i < count; i++)
                    {
                        if (strcmp(directory[i].name, sName) == 0)
                        {
                            cout << "CONTACT FOUND! PHONE: " << directory[i].phone << "\n";
                            found = 1;
                            break;
                        }
                    }
                    if (!found) cout << "CONTACT NOT FOUND.\n";
                }
                break;
                
            case 4:
                cout << "EXITING DIRECTORY SYSTEM...\n";
                break;
                
            default:
                cout << "INVALID CHOICE! PLEASE TRY AGAIN.\n";
        }
    } while (choice != 4);
    
    return 0;
}