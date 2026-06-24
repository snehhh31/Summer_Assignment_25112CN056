// Q94 Write a program to Compress a string.
#include <iostream>
using namespace std;

int main()
{
    char str[200];
    int i = 0, count = 1;
    
    cout << "ENTER THE STRING\n";
    cin >> str;
    
    cout << "COMPRESSED STRING: ";
    while (str[i] != '\0')
    {
                                                    // if next character is the same, increment the consecutive count
        if (str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            cout << str[i] << count;                    //print character followed by its count
            count = 1;                                  //reset counter for the next character
        }
        i++;
    }
    cout << "\n";
    
    return 0;
}