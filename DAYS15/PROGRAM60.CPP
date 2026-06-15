// Write a program to Move zeroes to end.
#include <iostream>
using namespace std;
int main()
{
    int a[100], n, i, temp, count = 0;                  //count variable to keep track of non-zero elements
    cout<<"ENTER THE NO. OF ELEMENTS\n";
    cin >> n;                                           //asking the no of elements
    cout<<"ENTER THE ELEMENTS\n";
    for (i = 0; i < n; i++)
    {
     cin >> a[i];                                       //INPUT THE ARRAY
    }
    for (i = 0; i < n; i++)
    {
     if (a[i] != 0)                                     //if element is not zero
     {
      temp = a[i];                                      //swap current element with element at count index
      a[i] = a[count];
      a[count] = temp;
      count++;                                          //increment count index
     }
    }
    cout<<"ARRAY AFTER MOVING ZEROES TO END \n";
    for (i = 0; i < n; i++)
    {
     cout << a[i] << " ";                               //printing modified array
    }
    return 0;
}
