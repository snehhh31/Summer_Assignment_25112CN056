// Q64 Write a program to Remove duplicates from array.
#include <iostream>
using namespace std;
int main()
{
    int a[100], n, i, j, k;
    cout<<"ENTER THE NO. OF ELEMENTS\n";
    cin >> n;                                           //asking the no of elements
    cout<<"ENTER THE ELEMENTS\n";
    for (i = 0; i < n; i++)
    {
     cin >> a[i];                                       //INPUT THE ARRAY
    }
    for (i = 0; i < n; i++)                             //loop to pick elements one by one
    {
     for (j = i + 1; j < n; j++)                        //loop to find duplicate of picked element
     {
      if (a[i] == a[j])
      {
       for (k = j; k < n - 1; k++)                      //shift elements to remove duplicate
       {
        a[k] = a[k + 1];
       }
       n--;                                             //decrease size after removal
       j--;                                             //adjust index after shifting
      }
     }
    }
    cout<<"ARRAY AFTER REMOVING DUPLICATES IS \n";
    for (i = 0; i < n; i++)
    {
     cout << a[i] << " ";                               //printing unique array
    }
    return 0;
}
