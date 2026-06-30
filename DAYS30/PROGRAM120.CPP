// Q120 Write a program to Develop complete mini project using arrays, strings and functions.
#include <iostream>
#include <cstring>
using namespace std;

// global array structures for storage tracking
int itemIds[100];
char itemNames[100][50];
int itemQuantities[100];
int itemCount = 0;

// modular functionality implementations
void addItem()
{
    cout << "ENTER ITEM ID: ";
    cin >> itemIds[itemCount];
    cout << "ENTER ITEM NAME: ";
    cin >> itemNames[itemCount];
    cout << "ENTER QUANTITY: ";
    cin >> itemQuantities[itemCount];
    itemCount++;
    cout << "STOCK ENTRY COMPLETED.\n";
}

void displayInventory()
{
    if (itemCount == 0)
    {
        cout << "WAREHOUSE STORAGE IS EMPTY.\n";
        return;
    }
    cout << "\n--- WAREHOUSE STOCK LEDGER ---\n";
    for (int i = 0; i < itemCount; i++)
    {
        cout << "ITEM ID: " << itemIds[i] 
             << " | NAME: " << itemNames[i] 
             << " | QUANTITY: " << itemQuantities[i] << "\n";
    }
}

int main()
{
    int choice;
    cout << "--- COMPLETE MINI PROJECT: WAREHOUSE MANAGER ---\n";
    
    do
    {
        cout << "\n1. RECORD NEW STOCK ENTRY\n";
        cout << "2. DISPLAY CURRENT STOCK LIST\n";
        cout << "3. EXIT APP\n";
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                addItem();                                      //calling structured function
                break;
            case 2:
                displayInventory();                             //calling structured function
                break;
            case 3:
                cout << "TERMINATING TERMINAL WORKSPACE...\n";
                break;
            default:
                cout << "ERROR: INVALID INPUT ATTEMPTED.\n";
        }
    } while (choice != 3);
    
    return 0;
}