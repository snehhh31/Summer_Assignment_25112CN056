// Q87 Write a program to Character frequency.
#include <iostream>
using namespace std;

int main()
{
    char str[200];
    int freq[256] = {0};                                //initialize frequency array for all ASCII characters
    int i = 0;
    
    cout << "ENTER THE STRING\n";
    cin >> str;                                         //inputting string
    
    while (str[i] != '\0')
    {
        freq[(unsigned char)str[i]]++;                 //increment character count
        i++;
    }
    
    cout << "CHARACTER FREQUENCIES:\n";
    for (int j = 0; j < 256; j++)
    {
        if (freq[j] > 0)                                //print only if character exists in string
        {
            cout << (char)j << " : " << freq[j] << "\n";
        }
    }
    
    return 0;
}