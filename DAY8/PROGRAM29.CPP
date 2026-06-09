//Write a program to Print half pyramid pattern
//                    for example :- sample input is 5
//                    sample output will be 
//                    *
//                    **
//                    ***
//                    ****
//                    *****
#include <iostream>
using namespace std;
int main()
{
    int i,j,r;
    cout<<"ENTER THE NUMBER OF ROWS YOU NEED  ";
    cin>>r;
   for(i = 1; i <= r; i++)                                             // outrer loop control number of rows
    {
        for(j = 1; j <= i;j++)                                         // inner loop will control the total no of columns
        {
            cout << "* ";
        }
        cout << "\n";                                                         // changing the the line at the last of completing a inner loop
    }
    return 0;
}