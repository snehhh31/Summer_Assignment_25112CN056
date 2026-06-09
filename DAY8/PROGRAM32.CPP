/* Write a program to Print repeated-number
pattern
1
22
333
4444
55555     */
#include <iostream>
using namespace std;
int main()
{
    int i,j,r;
    cout<<"ENTER THE NUMBER OF ROWS YOU WANT ";
    cin >> r;
    for(i = 1; i <= r;i++)                                        // outrer loop control number of rows 
    {
        for(j = 1; j <= i;j++)                                    // inner loop controls no of columns
        {
            cout << i;                                           // PRINTING THE i ITSELF 
        }
        cout << "\n";                                            //for coming in new line
    }
    return 0;
}
