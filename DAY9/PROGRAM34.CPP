/*WRITE THE PROGRAM TO PRINT THE PATTERN                                
12345
1234
123
12
1              */
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
            cout << j;                                     //printing number j
        }
        cout << "\n";                                      // THE \n CANGES THE NEW LINE AFTER COMPLETING OF J LOOP
    }
    return 0;
}
