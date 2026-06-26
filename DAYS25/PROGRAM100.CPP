// Q100 Write a program to Sort words by length.
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char words[50][100], temp[100];
    int n;
    
    cout << "ENTER NUMBER OF WORDS\n";
    cin >> n;
    
    cout << "ENTER THE WORDS\n";
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }
    
    // bubble sort to arrange words based on length
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strlen(words[j]) > strlen(words[j + 1]))
            {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }
    
    cout << "WORDS SORTED BY LENGTH:\n";
    for (int i = 0; i < n; i++)
    {
        cout << words[i] << "\n";
    }
    
    return 0;
}