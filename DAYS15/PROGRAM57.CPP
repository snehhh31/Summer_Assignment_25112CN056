// Write a program to Reverse array.
#include <iostream>
using namespace std;
int main()
{
    int a[100], n, i, temp;
    cout<<"ENTER THE NO. OF ELEMENTS\n";
    cin >> n;                                           //asking the no of elements
    cout<<"ENTER THE ELEMENTS\n";
    for (i = 0; i < n; i++)
    {
     cin >> a[i];                                       //INPUT THE ARRAY
    }
    for (i = 0; i < n / 2; i++)                         //loop till middle of array
    {
     temp = a[i];                                       //swapping elements from start and end
     a[i] = a[n - 1 - i];
     a[n - 1 - i] = temp;
    }
    cout<<"REVERSED ARRAY IS \n";
    for (i = 0; i < n; i++)
    {
     cout << a[i] << " ";                               //printing reversed array
    }
    return 0;
}
