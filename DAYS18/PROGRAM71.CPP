// Q71 Write a program to Binary search. Amazon, Deloitte, Capgemini
#include <iostream> 
using namespace std;

int main()
{
int a[100], n, i, key, low, high, mid, found = 0;

cout << "ENTER THE SIZE OF SORTED ARRAY\n";
cin >> n;                                           //asking size of array

cout << "ENTER THE ELEMENTS OF SORTED ARRAY\n";
for (i = 0; i < n; i++)
{
    cin >> a[i];                                    //INPUT THE SORTED ARRAY
}

cout << "ENTER THE ELEMENT TO SEARCH\n";
cin >> key;                                         //asking search element

// Binary Search Logic
low = 0;
high = n - 1;

while (low <= high)
{
    mid = (low + high) / 2;
    
    if (a[mid] == key)
    {
        cout << "ELEMENT FOUND AT POSITION " << mid + 1 << "\n";
        found = 1;
        break;
    }
    else if (a[mid] < key)
    {
        low = mid + 1;                              //search in the right half
    }
    else
    {
        high = mid - 1;                             //search in the left half
    }
}

if (found == 0)
{
    cout << "ELEMENT NOT FOUND\n";
}

return 0;
}