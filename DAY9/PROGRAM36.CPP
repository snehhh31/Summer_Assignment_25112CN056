/*WRITE THE PROGRAM TO PRINT THE PATTERN                                
******
*    *
*    *
******              */
#include <iostream>
using namespace std;
int main()
{
    int r, c, i, j;
    cout << "ENTER THE NO OF ROWS YOU WANT: ";
    cin >> r;                               
    cout << "ENTER THE NO OF COLUMNS YOU WANT: ";
    cin >> c;                               
    for(i = 1; i <= r; i++)                                 // I LOOP CONTROL THE ROWS
    {
        
        for(j = 1; j <= c; j++)                            // J LOOP CONTROLS THE COLOMNS
        {
            if(i == 1 || i == r || j == 1 || j == c)
            {
                cout << "*";                               //printing star for boundaries
            }
            else
            {
                cout << " ";                               //printing blank space for inner gap area
            }
        }
        cout << "\n";                                      // THE \n CHANGES THE NEW LINE AFTER COMPLETING OF J LOOP
    }
    return 0;
}
