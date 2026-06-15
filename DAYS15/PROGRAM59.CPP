// Write a program to Rotate array right.
#include <iostream>
using namespace std;
int main()
{
    int a[100], n, i, r, temp;
    cout<<"ENTER THE NO. OF ELEMENTS\n";
    cin >> n;                                           //asking the no of elements
    cout<<"ENTER THE ELEMENTS\n";
    for (i = 0; i < n; i++)
    {
     cin >> a[i];                                       //INPUT THE ARRAY
    }
    cout<<"ENTER NUMBER OF ROTATIONS \n";
    cin >> r;                                           //asking rotation count
    r = r % n;                                          //handling rotations greater than n
    for (int j = 0; j < r; j++)                         //loop for each rotation
    {
     temp = a[n - 1];                                   //store last element
     for (i = n - 1; i > 0; i--)
     {
      a[i] = a[i - 1];                                  //shift elements to right
     }
     a[0] = temp;                                       //put last element at first position
    }
    cout<<"ARRAY AFTER RIGHT ROTATION \n";
    for (i = 0; i < n; i++)
    {
     cout << a[i] << " ";                               //printing rotated array
    }
    return 0;
}
