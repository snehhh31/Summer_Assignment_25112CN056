// Q77 Write a program to Multiply matrices.
#include <iostream>
using namespace std;

int main()
{
    int a[100][100], b[100][100], c[100][100], r1, c1, r2, c2, i, j, k;
    
    cout << "ENTER ROWS AND COLUMNS FOR FIRST MATRIX\n";
    cin >> r1 >> c1;                                    
    cout << "ENTER ROWS AND COLUMNS FOR SECOND MATRIX\n";
    cin >> r2 >> c2;                                    
    
    if (c1 != r2)
    {
        cout << "MATRIX MULTIPLICATION NOT POSSIBLE!\n";
        return 0;
    }
    
    cout << "ENTER THE ELEMENTS OF FIRST MATRIX\n";
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cin >> a[i][j];                             //INPUT THE FIRST MATRIX
        }
    }
    
    cout << "ENTER THE ELEMENTS OF SECOND MATRIX\n";
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cin >> b[i][j];                             //INPUT THE SECOND MATRIX
        }
    }
    
    // Initializing elements of matrix c to 0
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            c[i][j] = 0;
        }
    }
    
    // Multiplying matrices
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]); //dot product calculations
            }
        }
    }
    
    cout << "RESULTANT MATRIX AFTER MULTIPLICATION IS\n";
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cout << c[i][j] << " ";                     //printing the product matrix
        }
        cout << "\n";
    }
    
    return 0;
}