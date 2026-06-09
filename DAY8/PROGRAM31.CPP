/*Write a program to Print character triangle.
A
AB
ABC
ABCD
ABCDE */


#include <iostream>
using namespace std;
int main()
{
    int i,j, r;
    cout<<"Enter the number of rows you want ";
    cin >> r;
    for(i = 1; i <= r;i++)                                 // outrer loop control number of rows 
    {
        for(j = 1; j <= i;j++)                             // inner loop controls no of columns
        {
            cout << (char)('A' + j - 1);                        //printing the character by explicit type casting using type cast opertor
        }
        cout << "\n";                                           //for coming in new line
    }
    return 0;
}
