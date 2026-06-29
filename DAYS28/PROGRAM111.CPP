// Q111 Write a program to Create ticket booking system.
#include <iostream>
using namespace std;

int main()
{
    int seats[10] = {0};                                // 0 means available, 1 means booked
    int choice, seatNum;
    
    cout << "--- TICKET BOOKING SYSTEM ---\n";
    
    do
    {
        cout << "\n1. VIEW SEAT AVAILABILITY\n";
        cout << "2. BOOK A SEAT\n";
        cout << "3. CANCEL A SEAT\n";
        cout << "4. EXIT\n";
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "\nSEAT STATUS (1 to 10):\n";
                for (int i = 0; i < 10; i++)
                {
                    cout << "SEAT " << (i + 1) << ": " << (seats[i] == 1 ? "BOOKED" : "AVAILABLE") << "\n";
                }
                break;
                
            case 2:
                cout << "ENTER SEAT NUMBER TO BOOK (1-10): ";
                cin >> seatNum;
                if (seatNum >= 1 && seatNum <= 10)
                {
                    if (seats[seatNum - 1] == 0)
                    {
                        seats[seatNum - 1] = 1;
                        cout << "SEAT " << seatNum << " BOOKED SUCCESSFULLY!\n";
                    }
                    else
                    {
                        cout << "SEAT ALREADY BOOKED!\n";
                    }
                }
                else
                {
                    cout << "INVALID SEAT NUMBER!\n";
                }
                break;
                
            case 3:
                cout << "ENTER SEAT NUMBER TO CANCEL (1-10): ";
                cin >> seatNum;
                if (seatNum >= 1 && seatNum <= 10)
                {
                    if (seats[seatNum - 1] == 1)
                    {
                        seats[seatNum - 1] = 0;
                        cout << "SEAT " << seatNum << " CANCELLED SUCCESSFULLY!\n";
                    }
                    else
                    {
                        cout << "SEAT WAS NOT BOOKED!\n";
                    }
                }
                else
                {
                    cout << "INVALID SEAT NUMBER!\n";
                }
                break;
                
            case 4:
                cout << "EXITING BOOKING SYSTEM...\n";
                break;
                
            default:
                cout << "INVALID CHOICE! PLEASE TRY AGAIN.\n";
        }
    } while (choice != 4);
    
    return 0;
}