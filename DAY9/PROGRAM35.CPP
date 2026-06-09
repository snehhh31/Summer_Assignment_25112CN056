/*WRITE THE PROGRAM TO PRINT THE PATTERN                                
A
BB
CCC
DDDD
EEEEE              */
#include <iostream>
using namespace std;
int main()
{
    int r, i, j;
    cout << "ENTER THE NO OF ROWS YOU WANT: ";
    cin >> r;                               
    for(i = 1; i <= r; i++)                                 // I LOOP CONTROL THE ROWS
    {
        
        for(j = 1; j <= i; j++)                            // J LOOP CONTROLS THE COLOMNS
        {
            cout << (char)('A' + i - 1);                   //printing character based on row i
        }
        cout << "\n";                                      // THE \n HANGES THE NEW LINE AFTER COMPLETING OF J LOOP
    }
    return 0;
}
