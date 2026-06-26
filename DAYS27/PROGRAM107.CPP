// Q107 Write a program to Create salary management system.
#include <iostream>
using namespace std;

struct SalaryRecord
{
    int empId;
    char name[100];
    double baseSalary;
    double allowance;
    double deductions;
    double netSalary;
};

int main()
{
    SalaryRecord records[100];
    int count = 0, choice;
    
    cout << "--- SALARY MANAGEMENT SYSTEM ---\n";
    
    do
    {
        cout << "\n1. GENERATE SALARY SLIP\n";
        cout << "2. DISPLAY ALL SALARY SLIPS\n";
        cout << "3. EXIT\n";
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "ENTER EMPLOYEE ID: ";
                cin >> records[count].empId;
                cout << "ENTER NAME: ";
                cin >> records[count].name;
                cout << "ENTER BASE SALARY: ";
                cin >> records[count].baseSalary;
                cout << "ENTER ALLOWANCES: ";
                cin >> records[count].allowance;
                cout << "ENTER DEDUCTIONS: ";
                cin >> records[count].deductions;
                
                // net salary formula configuration
                records[count].netSalary = (records[count].baseSalary + records[count].allowance) - records[count].deductions;
                count++;
                cout << "SALARY CALCULATED AND SLIP GENERATED!\n";
                break;
                
            case 2:
                if (count == 0)
                {
                    cout << "NO SALARY SLIPS GENERATED YET.\n";
                }
                else
                {
                    cout << "\n--- SALARY LEDGER ---\n";
                    for (int i = 0; i < count; i++)
                    {
                        cout << "ID: " << records[i].empId 
                             << " | NAME: " << records[i].name 
                             << " | BASE: $" << records[i].baseSalary
                             << " | ALLOW: $" << records[i].allowance
                             << " | DEDUCT: $" << records[i].deductions
                             << " | NET SALARY: $" << records[i].netSalary << "\n";
                    }
                }
                break;
                
            case 3:
                cout << "EXITING SALARY MANAGEMENT SYSTEM...\n";
                break;
                
            default:
                cout << "INVALID CHOICE! PLEASE TRY AGAIN.\n";
        }
    } while (choice != 3);
    
    return 0;
}