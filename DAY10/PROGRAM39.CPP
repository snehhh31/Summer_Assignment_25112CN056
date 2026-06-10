/*WRITE THE PROGRAM TO PRINT THE PATTERN                                
    1
   121
  12321
 1234321
123454321              */
#include <iostream>
using namespace std;
int main()
{
    int r, i, j, k, l;
    cout << "ENTER THE NO OF ROWS YOU WANT: ";
    cin >> r;                               
    for(i = 1; i <= r; i++)                                 //ROWS ARE CONTROLLED BY I LOOP
    {
        for(j = 1; j <= r - i; j++)                            //FOR SPACES
        {
            cout << " ";                                   
        }
        for(k = 1; k <= i; k++)                            // FOR INCREASING THE NUMBER BY ONE
        {
            cout << k;                                   
        }
        for(l = i - 1; l >= 1; l--)                            //FOR DECREASING THE NUMBER BY ONE
        {
            cout << l;                                   
        }
        cout << "\n";                                      // FOR NEW LINE
    }
    return 0;
}
