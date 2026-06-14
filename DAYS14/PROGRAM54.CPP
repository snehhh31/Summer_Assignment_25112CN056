// Q54 Write a program to Frequency of an element.
#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i, k, c = 0;
    
    cout<<"ENTER THE NO. OF ELEMENTS\n";
    cin >> n;                                           //asking the no of elements
    cout<<"ENTER THE ELEMENTS\n";
    
    for (i = 0; i < n; i++)
    {
        cin >> a[i];                                  //input of array
    }
    cout<<"ENTER ELEMENT FOR FREQUENCY \n";
    cin >> k;                                 
    for (i = 0; i < n; i++)
    {
        if (a[i] == k)                                //cheaking the element at each position and increasing the count
        {
            c++;
        }
    }
    cout <<"FREQENCY OF ELEMENT = "<<c;                //printing the frequency of element
    return 0;
}
