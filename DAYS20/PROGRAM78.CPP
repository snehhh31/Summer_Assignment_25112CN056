// Q78 Write a program to Check symmetric matrix.
#include <iostream>
using namespace std;

int main()
{
    int a[100][100], n, i, j, flag = 1;
    
    cout << "ENTER THE SIZE OF SQUARE MATRIX (N x N)\n";
    cin >> n;                                           //asking size of matrix
    
    cout << "ENTER THE ELEMENTS OF THE MATRIX\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];                             //INPUT THE MATRIX
        }
    }
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != a[j][i])                     //checking condition Matrix == Transpose
            {
                flag = 0;                               //not symmetric
                break;
            }
        }
    }
    
    if (flag == 1)
    {
        cout << "THE MATRIX IS SYMMETRIC\n";
    }
    else
    {
        cout << "THE MATRIX IS NOT SYMMETRIC\n";
    }
    
    return 0;
}