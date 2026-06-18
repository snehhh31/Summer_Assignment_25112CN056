// Q70 Write a program to Selection sort. Amazon, Deloitte, Capgemini
#include <iostream>
using namespace std;

int main()
{
int a[100], n, i, j, min_idx, temp;

cout << "ENTER THE SIZE OF ARRAY\n";
cin >> n;                                           //asking size of array

cout << "ENTER THE ELEMENTS OF ARRAY\n";
for (i = 0; i < n; i++)
{
    cin >> a[i];                                    //INPUT THE ARRAY
}

// Selection Sort Logic
for (i = 0; i < n - 1; i++)
{
    min_idx = i;
    for (j = i + 1; j < n; j++)
    {
        if (a[j] < a[min_idx])
        {
            min_idx = j;                            //finding the minimum element index
        }
    }
    // Swapping the found minimum element with the first element
    temp = a[min_idx];
    a[min_idx] = a[i];
    a[i] = temp;
}

cout << "SORTED ARRAY IS \n";
for (i = 0; i < n; i++)
{
    cout << a[i] << " ";                            //printing the sorted array
}
cout << "\n";

return 0;
}