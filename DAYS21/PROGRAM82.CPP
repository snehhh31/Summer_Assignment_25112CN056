// Q82 Write a program to Reverse a string.
#include <iostream>
using namespace std;

int main()
{
    char str[200], rev[200];
    int length = 0, i, j;
    
    cout << "ENTER THE STRING\n";
    cin >> str;                                         //INPUT THE STRING
    
    while (str[length] != '\0')
    {
        length++;                                       //finding length of string first
    }
    
    j = 0;
    for (i = length - 1; i >= 0; i--)
    {
        rev[j] = str[i];                                //copying from end to beginning
        j++;
    }
    rev[j] = '\0';                                      //appending null terminator to end
    
    cout << "REVERSED STRING IS: " << rev << "\n";      //printing reversed string
    
    return 0;
}