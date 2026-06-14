// Write a program to Linear search.
#include <iostream>
using namespace std;
int main()
{
    int a[100], n, i, k, f = 0;                         // F variable for found or not found 
    cout<<"ENTER THE NO. OF ELEMENTS\n";
    cin >> n;                                           //asking the no of elements
    cout<<"ENTER THE ELEMENTS\n";
    for (i = 0; i < n; i++)
    {
     cin >> a[i];                                       //INPUT THE ARRAY
    }
    cout<<"ENTER ELEMENT TO SEARCH \n";
    cin >> k;                                            // asking element for search
    for (i = 0; i < n; i++)
    {
        if (a[i] == k)                                   //searching element at every index
    {
    f = 1;
     cout <<"ELEMENT FOUND AT POSITION "<< i;           //if found then break 
    break;
    }
    }
    if (f == 0)
    {
     cout <<"ELEMENT NOT FOUND " -1;                     //if not found then -1
    }
    return 0;
}
