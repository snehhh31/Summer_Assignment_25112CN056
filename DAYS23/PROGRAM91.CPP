// Q91 Write a program to Check anagram strings.
#include <iostream>
using namespace std;

int main()
{
    char str1[200], str2[200];
    int freq[256] = {0};
    int i = 0, isAnagram = 1;
    
    cout << "ENTER FIRST STRING\n";
    cin >> str1;
    cout << "ENTER SECOND STRING\n";
    cin >> str2;
    
    while (str1[i] != '\0')                             //increment counts for first string
    {
        freq[(unsigned char)str1[i]]++;
        i++;
    }
    
    i = 0;
    while (str2[i] != '\0')                             //decrement counts for second string
    {
        freq[(unsigned char)str2[i]]--;
        i++;
    }
    
    for (int j = 0; j < 256; j++)                       //check if all frequencies are balanced back to zero
    {
        if (freq[j] != 0)
        {
            isAnagram = 0;
            break;
        }
    }
    
    if (isAnagram == 1)
        cout << "STRINGS ARE ANAGRAMS\n";
    else
        cout << "STRINGS ARE NOT ANAGRAMS\n";
        
    return 0;
}