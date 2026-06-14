// Q56 Write a program to Find duplicates in array.
#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i, j, c;
    cout<<"ENTER THE NO. OF ELEMENTS\n";
    cin >> n;                                           //asking the no of elements
    cout<<"ENTER THE ELEMENTS\n";
    for (i = 0; i < n; i++)
    {
    cin >> a[i];                              //input of array
    }
    for (i = 0; i < n; i++)
    {
        c = 0;
        for (j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                c = 1;                      
                break;
            }
        }
        if (c == 0)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    cout << a[i] << " ";
                    break;
                }
            }
        }
    }
    return 0;
}
