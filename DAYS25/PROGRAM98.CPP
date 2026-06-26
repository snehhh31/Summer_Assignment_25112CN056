// Q98 Write a program to Find common characters in strings.
#include <iostream>
using namespace std;

int main()
{
    char str1[200], str2[200];
    int freq1[256] = {0}, freq2[256] = {0};
    int i = 0;
    
    cout << "ENTER FIRST STRING\n";
    cin >> str1;
    cout << "ENTER SECOND STRING\n";
    cin >> str2;
    
    while (str1[i] != '\0')
    {
        freq1[(unsigned char)str1[i]]++;
        i++;
    }
    
    i = 0;
    while (str2[i] != '\0')
    {
        freq2[(unsigned char)str2[i]]++;
        i++;
    }
    
    cout << "COMMON CHARACTERS ARE:\n";
    for (int j = 0; j < 256; j++)
    {
        // if character exists in both strings
        if (freq1[j] > 0 && freq2[j] > 0)
        {
            cout << (char)j << " ";
        }
    }
    cout << "\n";
    
    return 0;
}