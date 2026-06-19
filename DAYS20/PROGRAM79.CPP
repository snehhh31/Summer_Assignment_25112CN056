// Q79 Write a program to Find row-wise sum.
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
    
    for (i = 0; i < r; i++)
    {
        sum = 0;                                        //reset sum for every new row
        for (j = 0; j < col; j++)
        {
            sum = sum + a[i][j];                        //adding items row wise
        }
        cout << "SUM OF ROW " << i + 1 << " IS: " << sum << "\n"; //printing row sum
    }
    
    return 0;
}