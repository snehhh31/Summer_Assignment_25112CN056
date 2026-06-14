// Q52 Write a program to Count even and odd elements.
#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i, e = 0, o = 0;                      //array size declared of 100, e for even count ,o for odd count
    cout<<"ENTER THE NO. OF ELEMENTS\n";
    cin >> n;
    cout<<"ENTER THE ELEMENTS\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];                                      // input of array
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            e++;                                          // counting the even
        }
        else
        {
            o++;                                          // counting the odd
        }
    }
    cout <<"EVEN "<< e << " "<<"ODD " << o;                //printing the values
    return 0;
}
