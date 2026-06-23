// Q90 Write a program to Find first  repeating character.
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
    
    while (str[i] != '\0')
    {
        freq[(unsigned char)str[i]]++;
        if (freq[(unsigned char)str[i]] > 1)            //if count exceeds 1, it's the first to repeat
        {
            result = str[i];
            break;                                      //stop immediately
        }
        i++;
    }
    
    if (result != '\0')
        cout << "FIRST REPEATING CHARACTER IS: " << result << "\n";
    else
        cout << "NO REPEATING CHARACTER FOUND\n";
        
    return 0;
}