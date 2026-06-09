/*WRITE THE PROGRAM TO PRINT THE PATTERN                                
*****
****
***
**
*              */
#include <iostream>
using namespace std;

int main()
{
    int r, i, j;
    cout << "ENTER THE NO OF ROWS YOU WANT: ";
    cin >> r;                               
    for(i = r; i >= 1; i--)                                 // I LOOP CONTROL THE ROWS
    {
        
        for(j = 1; j <= i; j++)                            // J LOOP CONTROLS THE COLOMNS
        {
            cout << "*";                                   //printing star *
        }
        cout << "\n";                                      // THE \n CANGES THE NEW LINE AFTER COMPLETING OF J LOOP
    }
    return 0;
}
