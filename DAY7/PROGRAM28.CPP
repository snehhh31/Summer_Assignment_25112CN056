//Write a program to Recursive reverse number
#include <iostream>
using namespace std;
int reverseNumber(int num, int rev) 
{
    if (num == 0)                                                                  //BASE CASE
    {
        return rev;
    }
    return reverseNumber(num / 10, rev * 10 + num % 10);                               // RECURSIVE CASE
    }
int main() 
{
    int num;
    cin >> num;
    int reversed = reverseNumber(num, 0);
    cout << reversed << endl;
    return 0;
}
