// Q65 Write a program to Merge two arrays.
#include <iostream>
using namespace std;

int main()
{
    int a[100], b[100], c[200], n, m, i, j;
    
    cout << "ENTER THE SIZE OF FIRST ARRAY\n";
    cin >> n;                                           //asking size of first array
    cout << "ENTER THE ELEMENTS OF FIRST ARRAY\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];                                    //INPUT THE FIRST ARRAY
    }
    
    cout << "ENTER THE SIZE OF SECOND ARRAY\n";
    cin >> m;                                           //asking size of second array
    cout << "ENTER THE ELEMENTS OF SECOND ARRAY\n";
    for (i = 0; i < m; i++)
    {
        cin >> b[i];                                    //INPUT THE SECOND ARRAY
    }
    
    for (i = 0; i < n; i++)
    {
        c[i] = a[i];                                    //copy first array to merged array
    }
    
    for (j = 0; j < m; j++)
    {
        c[n + j] = b[j];                                //copy second array to merged array
    }
    
    cout << "MERGED ARRAY IS \n";
    for (i = 0; i < n + m; i++)
    {
        cout << c[i] << " ";                            //printing the merged array
    }
    
    return 0;
}
