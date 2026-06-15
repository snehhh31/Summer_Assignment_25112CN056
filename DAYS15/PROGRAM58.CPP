// Write a program to Rotate array left.
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
     temp = a[0];                                       //store first element
     for (i = 0; i < n - 1; i++)
     {
      a[i] = a[i + 1];                                  //shift elements to left
     }
     a[n - 1] = temp;                                   //put first element at last position
    }
    cout<<"ARRAY AFTER LEFT ROTATION \n";
    for (i = 0; i < n; i++)
    {
     cout << a[i] << " ";                               //printing rotated array
    }
    return 0;
}
