// Q106 Write a program to Create employee management system.
#include <iostream>
using namespace std;

struct Employee
{
    int empId;
    char name[100];
    char department[50];
};

int main()
{
    Employee employees[100];
    int count = 0, choice;
    
    cout << "--- EMPLOYEE MANAGEMENT SYSTEM ---\n";
    
    do
    {
        cout << "\n1. ADD EMPLOYEE\n";
        cout << "2. DISPLAY ALL EMPLOYEES\n";
        cout << "3. SEARCH EMPLOYEE BY ID\n";
        cout << "4. EXIT\n";
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "ENTER EMPLOYEE ID: ";
                cin >> employees[count].empId;
                cout << "ENTER NAME: ";
                cin >> employees[count].name;
                cout << "ENTER DEPARTMENT: ";
                cin >> employees[count].department;
                count++;
                cout << "EMPLOYEE ADDED SUCCESSFULLY!\n";
                break;
                
            case 2:
                if (count == 0)
                {
                    cout << "NO EMPLOYEE RECORDS FOUND.\n";
                }
                else
                {
                    cout << "\n--- EMPLOYEE LIST ---\n";
                    for (int i = 0; i < count; i++)
                    {
                        cout << "ID: " << employees[i].empId 
                             << " | NAME: " << employees[i].name 
                             << " | DEPT: " << employees[i].department << "\n";
                    }
                }
                break;
                
            case 3:
                if (count == 0)
                {
                    cout << "NO EMPLOYEES REGISTERED YET.\n";
                }
                else
                {
                    int sId, found = 0;
                    cout << "ENTER EMPLOYEE ID TO SEARCH: ";
                    cin >> sId;
                    for (int i = 0; i < count; i++)
                    {
                        if (employees[i].empId == sId)
                        {
                            cout << "EMPLOYEE FOUND!\n";
                            cout << "NAME: " << employees[i].name << " | DEPT: " << employees[i].department << "\n";
                            found = 1;
                            break;
                        }
                    }
                    if (found == 0) cout << "EMPLOYEE NOT FOUND.\n";
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