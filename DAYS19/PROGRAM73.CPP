// Q73 Write a program to Add matrices.
#include <iostream>
using namespace std;

int main()
{
    int a[100][100], b[100][100], c[100][100], r, col, i, j;
    
    cout << "ENTER THE NUMBER OF ROWS AND COLUMNS\n";
    cin >> r >> col;                                    //asking dimensions for matrices
    
    cout << "ENTER THE ELEMENTS OF FIRST MATRIX\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> a[i][j];                             //INPUT THE FIRST MATRIX
        }
    }
    
    cout << "ENTER THE ELEMENTS OF SECOND MATRIX\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> b[i][j];                             //INPUT THE SECOND MATRIX
        }
    }
    
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];                 //adding elements
        }
    }
    
    cout << "RESULTANT MATRIX AFTER ADDITION IS\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << c[i][j] << " ";                     //printing the result matrix
        }
        cout << "\n";
    }
    
    return 0;
}