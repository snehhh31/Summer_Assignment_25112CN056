// Q102 Write a program to Create voting eligibility system.
#include <iostream>
using namespace std;

int main()
{
    int age;
    
    cout << "--- VOTING ELIGIBILITY SYSTEM ---\n";
    cout << "ENTER YOUR AGE\n";
    cin >> age;
    
    if (age >= 18)
    {
        cout << "YOU ARE ELIGIBLE TO VOTE.\n";
    }
    else
    {
        cout << "YOU ARE NOT ELIGIBLE TO VOTE.\n";
        cout << "YEARS LEFT FOR ELIGIBILITY: " << (18 - age) << "\n";
    }
    
    return 0;
}