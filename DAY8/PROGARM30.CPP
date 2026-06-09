//Write a program to Print number triangle.
//1
//12
//123
//1234
//12345
#include <iostream>
using namespace std;
int main()
{
    int i,j,r;
    cout<<"Enter the number of rows you want ";
    cin >> r;
    for(i = 1; i <= r; i++)                             // outrer loop control number of rows 
    {
        for(j = 1; j <= i; j++)                         // inner loop controls no of columns
        {
            cout << j;                                      //printing the value of j itself
        }
        cout << "\n";                                       //for coming in new line
    }
    return 0;
}
