// Q72 Write a program to Sort array in descending order.
#include <iostream>
using namespace std;

int main()
{
int a[100], n, i, j, temp;

cout << "ENTER THE SIZE OF ARRAY\n";
cin >> n;                                           //asking size of array

cout << "ENTER THE ELEMENTS OF ARRAY\n";
for (i = 0; i < n; i++)
{
    cin >> a[i];                                    //INPUT THE ARRAY
}

// Sorting in Descending Order Logic (using Bubble Sort approach)
for (i = 0; i < n - 1; i++)
{
    for (j = 0; j < n - i - 1; j++)
    {
        if (a[j] < a[j + 1])                        //condition to sort in descending order
        {
            // Swapping elements
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }
    }
}

cout << "DESCENDING ORDER SORTED ARRAY IS \n";
for (i = 0; i < n; i++)
{
    cout << a[i] << " ";                            //printing the sorted array
}
cout << "\n";

return 0;
}