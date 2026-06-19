// Q80 Write a program to Find column-wise sum.
#include <iostream>
using namespace std;

int main()
{
    int a[100][100], r, col, i, j, sum;
    
    cout << "ENTER THE NUMBER OF ROWS AND COLUMNS\n";
    cin >> r >> col;                                    //asking dimensions
    
    cout << "ENTER THE ELEMENTS OF THE MATRIX\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> a[i][j];                             //INPUT THE MATRIX
        }
    }
    
    for (j = 0; j < col; j++)                           //fixing columns first
    {
        sum = 0;                                        //reset sum for every new column
        for (i = 0; i < r; i++)
        {
            sum = sum + a[i][j];                        //adding items column wise
        }
        cout << "SUM OF COLUMN " << j + 1 << " IS: " << sum << "\n"; //printing col sum
    }
    
    return 0;
}