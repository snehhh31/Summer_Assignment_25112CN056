// Q89 Write a program to Find first non-repeating character.
#include <iostream>
using namespace std;

int main()
{
    char str[200];
    int freq[256] = {0};
    int i = 0;
    char result = '\0';
    
    cout << "ENTER THE STRING\n";
    cin >> str;                                         //inputting string
    
    while (str[i] != '\0')                              //first pass: count frequencies
    {
        freq[(unsigned char)str[i]]++;
        i++;
    }
    
    i = 0;
    while (str[i] != '\0')                              //second pass: find first char with frequency 1
    {
        if (freq[(unsigned char)str[i]] == 1)
        {
            result = str[i];
            break;                                      //stop at the first match
        }
        i++;
    }
    
    if (result != '\0')
        cout << "FIRST NON-REPEATING CHARACTER IS: " << result << "\n";
    else
        cout << "NO NON-REPEATING CHARACTER FOUND\n";
        
    return 0;
}