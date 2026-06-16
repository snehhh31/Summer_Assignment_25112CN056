// Q61 Write a program to Find missing number in array.
#include <iostream>
using namespace std;
int main()
{
    int a[100], n, i, b = 0, c, m;
    cout<<"ENTER THE TOTAL NO. OF ELEMENTS EXPECTED (1 to N)\n";
    cin >> n;                                           //asking the total number of elements including the missing one
    cout<<"ENTER THE " << n - 1 << " ELEMENTS\n";
    for (i = 0; i < n - 1; i++)
    {
     cin >> a[i];                                       //INPUT THE ARRAY
     b += a[i];                                         //calculate sum of array elements
    }
    c = (n * (n + 1)) / 2;                              //sum of first n natural numbers
    m = c - b;                                          //missing number is the difference
    cout<<"MISSING NUMBER IS \n";
    cout << m << "\n";                                  //printing the missing number
    return 0;
}

