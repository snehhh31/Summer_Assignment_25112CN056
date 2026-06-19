// Q81 Write a program to Find string length without strlen().
#include <iostream>
using namespace std;

int main()
{
    char str[200];
    int length = 0;
    
    cout << "ENTER THE STRING\n";
    cin >> str;                                         //inputting string (single word)
    
    while (str[length] != '\0')                         //counting until null terminator is hit
    {
        length++;                                       //increment length counter
    }
    
    cout << "LENGTH OF THE STRING IS: " << length << "\n"; //printing total length
    
    return 0;
}