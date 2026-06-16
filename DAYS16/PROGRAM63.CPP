// Q63 Write a program to Find pair with given sum.
#include <iostream>
using namespace std;
int main()
{
    int a[100], n, i, j, b, c = 0;
    cout<<"ENTER THE NO. OF ELEMENTS\n";
    cin >> n;                                           //asking the no of elements
    cout<<"ENTER THE ELEMENTS\n";
    for (i = 0; i < n; i++)
    {
     cin >> a[i];                                       //INPUT THE ARRAY
    }
    cout<<"ENTER THE TARGET SUM\n";
    cin >> b;                                           //asking target sum
    cout<<"PAIRS ARE \n";
    for (i = 0; i < n; i++)                             //nested loop to check every pair
    {
     for (j = i + 1; j < n; j++)
     {
      if (a[i] + a[j] == b)                             //check if sum matches target
      {
       cout << "(" << a[i] << ", " << a[j] << ")\n";    //printing matching pair
       c = 1;
      }
     }
    }
    if (c == 0)
    {
     cout << "NO PAIR FOUND\n";
    }
    return 0;
}
