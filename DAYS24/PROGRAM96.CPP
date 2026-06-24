// Q96 Write a program to Remove duplicate characters.
#include <iostream>
using namespace std;

int main()
{
    char str[200];
    int freq[256] = {0};                                //hash array to keep track of visited characters
    int i = 0, j = 0;
    
    cout << "ENTER THE STRING\n";
    cin >> str;
    
    while (str[i] != '\0')
    {
                                                       // if character is not visited yet, keep it in the string
        if (freq[(unsigned char)str[i]] == 0)
        {
            freq[(unsigned char)str[i]] = 1;            //mark character as visited
            str[j] = str[i];                            //overwrite original array in-place
            j++;
        }
        i++;
    }
    str[j] = '\0';                                      //null terminate the modified string
    
    cout << "STRING AFTER REMOVING DUPLICATES: " << str << "\n";
    
    return 0;
}