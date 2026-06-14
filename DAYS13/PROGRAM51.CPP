// Q51 Write a program to Find largest and smallest element.
#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i, h, l;                            //array size declared of 100 , h for highest ,l for lowest
    cout<<"ENTER THE NO. OF ELEMENTS\n";
    cin >> n;                                            // asking the number of elements
    cout<<"ENTER THE ELEMENTS\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];                                    // input variable
    }
    h = a[0];                                           //assing the first index value to highest and lowest
    l = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > h)
        {
            h = a[i];                                           //logic for highest
        }
        if (a[i] < l)
        {
            l = a[i];                                        //logic for lowest
        }
    }
    cout <<"LARGEST ELEMENT "<< h << " SMALLEST ELEMENT  " << l;           //printing the values
    return 0;
}
