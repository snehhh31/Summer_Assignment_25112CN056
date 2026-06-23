// Q85 Write a program to Check palindrome string.
#include <iostream>
using namespace std;

int main()
{
    char str[200];
    int length = 0, isPalindrome = 1;
    
    cout << "ENTER THE STRING\n";
    cin >> str;                                         //inputting string
    
    while (str[length] != '\0')                         //finding length of the string
    {
        length++;
    }
    
    for (int i = 0; i < length / 2; i++)                //checking characters from start and end
    {
        if (str[i] != str[length - 1 - i])
        {
            isPalindrome = 0;                           //set flag to 0 if mismatch found
            break;
        }
    }
    
    if (isPalindrome == 1)
        cout << "THE STRING IS A PALINDROME\n";
    else
        cout << "THE STRING IS NOT A PALINDROME\n";
        
    return 0;
}