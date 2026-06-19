// Q84 Write a program to Convert lowercase to uppercase.
#include <iostream>
using namespace std;

int main()
{
    char str[200];
    int i = 0;
    
    cout << "ENTER THE STRING IN LOWERCASE\n";
    cin >> str;                                         //INPUT THE STRING
    
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')             //identifying lowercase characters
        {
            str[i] = str[i] - 32;                       //subtracting 32 from ASCII value to make uppercase
        }
        i++;
    }
    
    cout << "STRING IN UPPERCASE IS: " << str << "\n";  //printing modified uppercase string
    
    return 0;
}