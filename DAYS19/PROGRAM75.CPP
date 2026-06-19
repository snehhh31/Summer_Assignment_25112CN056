// Q75 Write a program to Transpose matrix.
#include <iostream>
using namespace std;

int main()
{
    int a[100][100], t[100][100], r, col, i, j;
    
    cout << "ENTER THE NUMBER OF ROWS AND COLUMNS\n";
    cin >> r >> col;                                    //asking dimensions of matrix
    
    cout << "ENTER THE ELEMENTS OF THE MATRIX\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> a[i][j];                             //INPUT THE MATRIX
        }
    }
    
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            t[j][i] = a[i][j];                          //swapping rows and columns
        }
    }
    
    cout << "TRANSPOSED MATRIX IS\n";
    for (i = 0; i < col; i++)                           //rows become col and col become rows
    {
        for (j = 0; j < r; j++)
        {
            cout << t[i][j] << " ";                     //printing transposed matrix
        }
        cout << "\n";
    }
    
    return 0;
}