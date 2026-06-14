// Q55 Write a program to Second largest element.
#include <iostream>
using namespace std;

int main()
{
int a[100], n, i, h, s;
 cout<<"ENTER THE NO. OF ELEMENTS\n";
    cin >> n;                                           //asking the no of elements
    cout<<"ENTER THE ELEMENTS\n";
for (i = 0; i < n; i++)
    {
    cin >> a[i];                              //input of array
    }
    h = -100000;
    s = -100000;
for (i = 0; i < n; i++)
{
if (a[i] > h)
{
s = h;                              // logic for second largest
h = a[i];
}
else if (a[i] > s && a[i] != h)
{
 s = a[i];
}
}
cout <<"Second largest element :- "<<s;            //printing the element 
return 0;
}
