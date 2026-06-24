// Q95 Write a program to Find longest word.
#include <iostream>
using namespace std;

int main()
{
    char str[500];
    int i = 0, currentLen = 0, maxLen = 0;
    int startIdx = 0, maxStartIdx = 0;
    
    cout << "ENTER THE SENTENCE\n";
    cin.getline(str, 500);                              //using getline to read sentences with spaces
    
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            if (currentLen == 0)
            {
                startIdx = i;                           //track the starting index of the current word
            }
            currentLen++;
        }
        else
        {
            if (currentLen > maxLen)                    //compare current word length with max length
            {
                maxLen = currentLen;
                maxStartIdx = startIdx;
            }
            currentLen = 0;                             //reset length for next word
        }
        i++;
    }
    
    // check for the last word if sentence does not end with a space
    if (currentLen > maxLen)
    {
        maxLen = currentLen;
        maxStartIdx = startIdx;
    }
    
    cout << "THE LONGEST WORD IS: ";
    for (i = maxStartIdx; i < maxStartIdx + maxLen; i++)
    {
        cout << str[i];                                 //print the longest word character by character
    }
    cout << "\n";
    
    return 0;
}