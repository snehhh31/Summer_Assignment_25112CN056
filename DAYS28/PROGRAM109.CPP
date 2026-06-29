// Q109 Write a program to Create library management system.
#include <iostream>
#include <cstring>
using namespace std;

struct Book
{
    int bookId;
    char title[100];
    char author[100];
    int isIssued;
};

int main()
{
    Book library[100];
    int count = 0, choice;
    
    cout << "--- LIBRARY MANAGEMENT SYSTEM ---\n";
    
    do
    {
        cout << "\n1. ADD NEW BOOK\n";
        cout << "2. DISPLAY ALL BOOKS\n";
        cout << "3. ISSUE A BOOK\n";
        cout << "4. RETURN A BOOK\n";
        cout << "5. EXIT\n";
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "ENTER BOOK ID: ";
                cin >> library[count].bookId;
                cout << "ENTER BOOK TITLE: ";
                cin >> library[count].title;
                cout << "ENTER AUTHOR NAME: ";
                cin >> library[count].author;
                library[count].isIssued = 0;                    // 0 means available
                count++;
                cout << "BOOK ADDED SUCCESSFULLY!\n";
                break;
                
            case 2:
                if (count == 0)
                {
                    cout << "NO BOOKS IN THE LIBRARY.\n";
                }
                else
                {
                    cout << "\n--- BOOK INVENTORY ---\n";
                    for (int i = 0; i < count; i++)
                    {
                        cout << "ID: " << library[i].bookId 
                             << " | TITLE: " << library[i].title 
                             << " | AUTHOR: " << library[i].author 
                             << " | STATUS: " << (library[i].isIssued ? "ISSUED" : "AVAILABLE") << "\n";
                    }
                }
                break;
                
            case 3:
                {
                    int id, found = 0;
                    cout << "ENTER BOOK ID TO ISSUE: ";
                    cin >> id;
                    for (int i = 0; i < count; i++)
                    {
                        if (library[i].bookId == id)
                        {
                            found = 1;
                            if (library[i].isIssued == 0)
                            {
                                library[i].isIssued = 1;
                                cout << "BOOK ISSUED SUCCESSFULLY!\n";
                            }
                            else
                            {
                                cout << "BOOK IS ALREADY ISSUED.\n";
                            }
                            break;
                        }
                    }
                    if (!found) cout << "BOOK NOT FOUND.\n";
                }
                break;
                
            case 4:
                {
                    int id, found = 0;
                    cout << "ENTER BOOK ID TO RETURN: ";
                    cin >> id;
                    for (int i = 0; i < count; i++)
                    {
                        if (library[i].bookId == id)
                        {
                            found = 1;
                            if (library[i].isIssued == 1)
                            {
                                library[i].isIssued = 0;
                                cout << "BOOK RETURNED SUCCESSFULLY!\n";
                            }
                            else
                            {
                                cout << "BOOK WAS NOT ISSUED.\n";
                            }
                            break;
                        }
                    }
                    if (!found) cout << "BOOK NOT FOUND.\n";
                }
                break;
                
            case 5:
                cout << "EXITING SYSTEM...\n";
                break;
                
            default:
                cout << "INVALID CHOICE! PLEASE TRY AGAIN.\n";
        }
    } while (choice != 5);
    
    return 0;
}