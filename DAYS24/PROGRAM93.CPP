// Q93 Write a program to Check string rotation.
#include <iostream>
using namespace std;

int main()
{
    char str1[200], str2[200], temp[400];
    int len1 = 0, len2 = 0, i = 0, j = 0;
    int isRotation = 0;
    
    cout << "ENTER FIRST STRING\n";
    cin >> str1;
    cout << "ENTER SECOND STRING\n";
    cin >> str2;
    
    while (str1[len1] != '\0') len1++;                  //find length of str1
    while (str2[len2] != '\0') len2++;                  //find length of str2
    
    if (len1 == len2)
    {
                                                      // concatenate str1 with itself to handle all rotation combinations
        for (i = 0; i < len1; i++)
        {
            temp[i] = str1[i];
            temp[i + len1] = str1[i];
        }
        temp[2 * len1] = '\0';
        
                                                    // check if str2 is a substring of the concatenated temp string
        for (i = 0; i <= len1; i++)
        {
            for (j = 0; j < len2; j++)
            {
                if (temp[i + j] != str2[j])
                {
                    break;
                }
            }
            if (j == len2)                              //if complete match found
            {
                isRotation = 1;
                break;
            }
        }
    }
    
    if (isRotation == 1)
        cout << "STRINGS ARE ROTATIONS OF EACH OTHER\n";
    else
        cout << "STRINGS ARE NOT ROTATIONS OF EACH OTHER\n";
        
    return 0;
}