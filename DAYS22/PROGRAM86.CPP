// Q86 Write a program to Count words in a sentence.
#include <iostream>
using namespace std;

int main()
{
    char str[500];
    int words = 0, i = 0;
    
    cout << "ENTER THE SENTENCE\n";
    cin.getline(str, 500);                              //using getline to read spaces
    
    while (str[i] != '\0')
    {
        // counting word if current char is not space and next char is space or null terminator
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
        {
            words++;                                    //increment word counter
        }
        i++;
    }
    
    cout << "NUMBER OF WORDS IS: " << words << "\n";
    
    return 0;
}