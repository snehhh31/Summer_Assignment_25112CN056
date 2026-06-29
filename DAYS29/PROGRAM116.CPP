// Q116 Write a program to Create inventory management system.
#include <iostream>
using namespace std;

struct Item
{
    int itemCode;
    char name[100];
    int quantity;
    double price;
};

int main()
{
    Item inventory[100];
    int count = 0, choice;
    
    cout << "--- INVENTORY MANAGEMENT SYSTEM ---\n";
    
    do
    {
        cout << "\n1. ADD NEW ITEM\n";
        cout << "2. VIEW INVENTORY STOCK\n";
        cout << "3. CHECK TOTAL STOCK VALUE\n";
        cout << "4. EXIT\n";
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "ENTER ITEM CODE: ";
                cin >> inventory[count].itemCode;
                cout << "ENTER ITEM NAME: ";
                cin >> inventory[count].name;
                cout << "ENTER QUANTITY: ";
                cin >> inventory[count].quantity;
                cout << "ENTER UNIT PRICE: ";
                cin >> inventory[count].price;
                count++;
                cout << "ITEM REGISTERED SUCCESSFULLY!\n";
                break;
                
            case 2:
                if (count == 0)
                {
                    cout << "INVENTORY IS OUT OF STOCK.\n";
                }
                else
                {
                    cout << "\n--- CURRENT STOCK DATA ---\n";
                    for (int i = 0; i < count; i++)
                    {
                        cout << "CODE: " << inventory[i].itemCode 
                             << " | NAME: " << inventory[i].name 
                             << " | QTY: " << inventory[i].quantity 
                             << " | PRICE: $" << inventory[i].price << "\n";
                    }
                }
                break;
                
            case 3:
                {
                    double totalValue = 0;
                    for (int i = 0; i < count; i++)
                    {
                        totalValue += (inventory[i].quantity * inventory[i].price);
                    }
                    cout << "TOTAL FINANCIAL VALUE OF STORAGE STOCK: $" << totalValue << "\n";
                }
                break;
                
            case 4:
                cout << "EXITING INVENTORY SYSTEM...\n";
                break;
                
            default:
                cout << "INVALID OPTION SELECTION!\n";
        }
    } while (choice != 4);
    
    return 0;
}