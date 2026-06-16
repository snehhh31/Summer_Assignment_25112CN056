// Q62 Write a program to Find maximum frequency element.
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
    for (i = 0; i < n; i++)                             //loop through each element
    {
     int k = 0;
     for (j = 0; j < n; j++)                            //count occurrences of current element
     {
      if (a[i] == a[j])
      {
       k++;
      }
     }
     if (k > c)                                         //update max frequency and element
     {
      c = k;
      b = a[i];
     }
    }
    cout<<"MAXIMUM FREQUENCY ELEMENT IS \n";
    cout << b << "\n";                                  //printing maximum frequency element
    return 0;
}
