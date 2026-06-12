//Write a program to Write function for palindrome
#include <iostream>
using namespace std;

bool palin(int n)                             // making the function in boolean return type so that it either returns true or false
{
    int temp = n;                             // a copy of variable is stored
    int rev = 0;
    while (temp > 0)
    {
    int d = temp % 10;
         rev = rev * 10 + d;                   //palindrome logic
    temp = temp / 10;
    }
    return (n == rev);                        //returns either true or false to the caller fxn
}

int main()                                      // main function
{   
    int a;
 cout<<"ENTER THE NUMBER\n";                 //user input
  cin>>a;
    if (palin(a))                               //invoking the function 
{
        cout << "Yes\n";                        //if true is returend if block exectutes
    }
else
    {
        cout << "No\n";                         // if false is returned else block executes
 }
    return 0;                                   //main function ends
}

