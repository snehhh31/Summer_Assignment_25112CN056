// Q69 Write a program to Bubble sort.
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

// Bubble Sort Logic
for (i = 0; i < n - 1; i++)
{
    for (j = 0; j < n - i - 1; j++)
    {
        if (a[j] > a[j + 1])
        {
            // Swapping elements
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }
    }
}

cout << "SORTED ARRAY IS \n";
for (i = 0; i < n; i++)
{
    cout << a[i] << " ";                            //printing the sorted array
}
cout << "\n";

return 0;
}