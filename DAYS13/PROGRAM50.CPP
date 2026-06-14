// Q50 Write a program to Find sum and average of array.
#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i, s = 0;                                 //array size declared of 100
    float v;                                                 // a variable for average
    cout<<"ENTER THE NO. OF ELEMENTS\n";                     
    cin >> n;                                                 // asking the number of elements
    cout<<"ENTER THE ELEMENTS\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];                                          //input of array
    }
    for (i = 0; i < n; i++)
    {
        s = s + a[i];                                          // finding the sum of array
    }
    v = (float)s / n;                                          //type casting the variable for average
    cout <<"SUM "<< s << " AVERAGE " << v;                     // printing the values
    return 0;
}
