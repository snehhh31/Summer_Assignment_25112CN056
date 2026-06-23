// Q92 Write a program to Find maximum occurring  character.
#include <iostream>
using namespace std;

int main()
{
    char str[200];
    int freq[256] = {0};
    int i = 0, maxCount = 0;
    char maxChar = '\0';
    
    cout << "ENTER THE STRING\n";
    cin >> str;                                         //inputting string
    
    while (str[i] != '\0')
    {
        freq[(unsigned char)str[i]]++;
        if (freq[(unsigned char)str[i]] > maxCount)     //update track of highest frequency
        {
            maxCount = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
        i++;
    }
    
    cout << "MAXIMUM OCCURRING CHARACTER IS: " << maxChar << " (OCCURS " << maxCount << " TIMES)\n";
    
    return 0;
}