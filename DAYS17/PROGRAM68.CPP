// Q68 Write a program to Find common elements.
#include <iostream>
using namespace std;

int main()
{
    int a[100], b[100], n, m, i, j;
    
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
    
    cout << "COMMON ELEMENTS ARE \n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";                    //printing matching common element
                break;
            }
        }
    }
    
    return 0;
}
