/*WRITE THE PROGRAM TO PRINT THE PATTERN                                
*********
 *******
  *****
   ***
    *          */
#include <iostream>
using namespace std;
int main()
{
    int r, i, j, k;
    cout << "ENTER THE NO OF ROWS YOU WANT: ";
    cin >> r;                               
    for(i = r; i >= 1; i--)                                 //ROWS ARE CONTROOLLED BY I LOOP
    {
        for(j = 1; j <= r - i; j++)                            // FOR SPACES
        {
        cout << " ";                                   
        }
        for(k = 1; k <= (2 * i - 1); k++)                            //FOR STAR PRINTING
        {
        cout << "*";                                   
        }
        cout << "\n";                                      //FOR NEXT LINE
    }
    return 0;
}
