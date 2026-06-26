// Q99 Write a program to Sort names alphabetically.
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char names[50][100], temp[100];
    int n;
    
    cout << "ENTER NUMBER OF NAMES\n";
    cin >> n;
    
    cout << "ENTER THE NAMES\n";
    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
    }
    
    // bubble sort to arrange names alphabetically
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    
    cout << "NAMES IN ALPHABETICAL ORDER:\n";
    for (int i = 0; i < n; i++)
    {
        cout << names[i] << "\n";
    }
    
    return 0;
}