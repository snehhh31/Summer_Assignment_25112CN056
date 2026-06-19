// Q76 Write a program to Find diagonal sum.
#include <iostream>
using namespace std;

int main()
{
    int a[100][100], n, i, j, sum = 0;
    
    cout << "ENTER THE SIZE OF SQUARE MATRIX (N x N)\n";
    cin >> n;                                           //asking size of square matrix
    
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
        sum = sum + a[i][i];                            //adding main diagonal elements where i == j
    }
    
    cout << "SUM OF MAIN DIAGONAL ELEMENTS IS: " << sum << "\n"; //printing diagonal sum
    
    return 0;
}