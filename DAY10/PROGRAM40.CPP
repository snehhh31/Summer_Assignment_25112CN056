/*WRITE THE PROGRAM TO PRINT THE PATTERN                                
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA              */
#include <iostream>
using namespace std;
int main()
{
    int r, i, j, k, l;
    cout << "ENTER THE NO OF ROWS YOU WANT: ";
    cin >> r;                               
    for(i = 1; i <= r; i++)                                 //FOR CONTROLLING THE I LOOP
    {
        for(j = 1; j <= r - i; j++)                            // FOR SPACES 
        {
            cout << " ";                                   
        }
        for(k = 1; k <= i; k++)                            // FOR INCRREASING THE CHARCTER BY A ASCCI VALUE
        {
            cout << (char)('A' + k - 1);                                   
        }
        for(l = i - 1; l >= 1; l--)                            // FOR DECRERASING THE CHARCTER BY A ASCCI VALUE
        {
            cout << (char)('A' + l - 1);                                   
        }
        cout << "\n";                                      //FOR NEW LINE s
    }
    return 0;
}
