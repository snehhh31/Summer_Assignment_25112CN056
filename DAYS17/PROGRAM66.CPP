// Q66 Write a program to Union of arrays.
#include <iostream>
using namespace std;

int main()
{
    int a[100], b[100], n, m, i, j, f;
    
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
    
    cout << "UNION OF ARRAYS IS \n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";                            //print all elements of first array
    }
    
    for (i = 0; i < m; i++)
    {
        f = 0;                                          //reset existence flag
        for (j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                f = 1;                                  //element is already present in first array
                break;
            }
        }
        if (f == 0)
        {
            cout << b[i] << " ";                        //print non-duplicate elements of second array
        }
    }
    
    return 0;
}
