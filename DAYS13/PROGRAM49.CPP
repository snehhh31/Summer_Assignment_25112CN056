// Write a program to Input and display array.
#include <iostream>
using namespace std;

int main()                                               
{
    int a[100], n, i;                                    //array size declared of 100
    cout<<"ENTER THE NO. OF ELEMENTS\n";
    cin >> n;                                           //asking the no of elements
    cout<<"ENTER THE ELEMENTS\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];                                    //input array in loop
    }
    cout<<"OUTPUT :- \n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";                            //output in loop
    }
    return 0;
}
