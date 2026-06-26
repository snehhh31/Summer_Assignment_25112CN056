// Q97 Write a program to Merge two sorted arrays.
#include <iostream>
using namespace std;

int main()
{
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i = 0, j = 0, k = 0;
    
    cout << "ENTER SIZE OF FIRST SORTED ARRAY\n";
    cin >> n1;
    cout << "ENTER ELEMENTS OF FIRST SORTED ARRAY\n";
    for(int m = 0; m < n1; m++) cin >> arr1[m];
    
    cout << "ENTER SIZE OF SECOND SORTED ARRAY\n";
    cin >> n2;
    cout << "ENTER ELEMENTS OF SECOND SORTED ARRAY\n";
    for(int m = 0; m < n2; m++) cin >> arr2[m];
    
    // traverse both arrays and pick the smaller element
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            merged[k] = arr1[i];
            i++;
        }
        else
        {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }
    
    // copy remaining elements of first array if any
    while (i < n1)
    {
        merged[k] = arr1[i];
        i++;
        k++;
    }
    
    // copy remaining elements of second array if any
    while (j < n2)
    {
        merged[k] = arr2[j];
        j++;
        k++;
    }
    
    cout << "MERGED SORTED ARRAY IS: \n";
    for (int m = 0; m < n1 + n2; m++)
    {
        cout << merged[m] << " ";
    }
    cout << "\n";
    
    return 0;
}