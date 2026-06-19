// Q83 Write a program to Count vowels and consonants.
#include <iostream>
using namespace std;

int main()
{
    char str[200];
    int i = 0, vow = 0, conso = 0;
    
    cout << "ENTER THE STRING\n";
    cin >> str;                                         //INPUT THE STRING
    
    while (str[i] != '\0')
    {
        char ch = str[i];
        
                                                // checking for vowel cases (both lower and upper case)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vow++;                                   //incrementing vowel count
        }
        // checking to ensure characters are valid alphabets
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            conso++;                               //incrementing consonant count
        }
        i++;
    }
    
    cout << "NUMBER OF VOWELS: " << vow << "\n";
    cout << "NUMBER OF CONSONANTS: " << conso << "\n";
    
    return 0;
}