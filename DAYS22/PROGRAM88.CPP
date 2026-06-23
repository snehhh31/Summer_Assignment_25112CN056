// Q88 Write a program to Remove spaces from string.
#include <iostream>
using namespace std;

int main()
{
    char str[500], result[500];
    int i = 0, j = 0;
    
    cout << "ENTER THE STRING\n";
    cin.getline(str, 500);                              //using getline to accept spaces
    
    while (str[i] != '\0')
    {
        if (str[i] != ' ')                             //if character is not a space
        {
            result[j] = str[i];                         //copy to result array
            j++;
        }
        i++;
    }
    result[j] = '\0';                                   //appending null terminator to result
    
    cout << "STRING AFTER REMOVING SPACES: " << result << "\n";
    
    return 0;
}