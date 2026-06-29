// Q114 Write a program to Create menu-driven array operations system.
#include <iostream>
using namespace std;

int main()
{
    int arr[100], n = 0, choice;
    
    cout << "--- MENU-DRIVEN ARRAY OPERATIONS ---\n";
    
    do
    {
        cout << "\n1. INSERT ELEMENTS\n";
        cout << "2. DISPLAY ARRAY\n";
        cout << "3. SEARCH AN ELEMENT\n";
        cout << "4. EXIT\n";
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "ENTER NUMBER OF ELEMENTS TO INSERT: ";
                cin >> n;
                cout << "ENTER " << n << " ELEMENTS:\n";
                for (int i = 0; i < n; i++)
                {
                    cin >> arr[i];
                }
                cout << "ELEMENTS INSERTED.\n";
                break;
                
            case 2:
                if (n == 0)
                {
                    cout << "ARRAY IS EMPTY.\n";
                }
                else
                {
                    cout << "ARRAY ELEMENTS: ";
                    for (int i = 0; i < n; i++)
                    {
                        cout << arr[i] << " ";
                    }
                    cout << "\n";
                }
                break;
                
            case 3:
                if (n == 0)
                {
                    cout << "ARRAY IS EMPTY. NOTHING TO SEARCH.\n";
                }
                else
                {
                    int item, found = -1;
                    cout << "ENTER ELEMENT TO SEARCH: ";
                    cin >> item;
                    for (int i = 0; i < n; i++)
                    {
                        if (arr[i] == item)
                        {
                            found = i;
                            break;
                        }
                    }
                    if (found != -1)
                        cout << "ELEMENT FOUND AT INDEX: " << found << "\n";
                    else
                        cout << "ELEMENT NOT FOUND.\n";
                }
                break;
                
            case 4:
                cout << "EXITING SYSTEM...\n";
                break;
                
            default:
                cout << "INVALID CHOICE!\n";
        }
    } while (choice != 4);
    
    return 0;
}