// Q47 Write a program to Write function for Fibonacci 
#include <iostream>
using namespace std;

void fib(int n)                    //function is made in void return type as we donot return any value
{                                  //we print the values in the user defined function (fib) itself
    int a = 0;
    int b = 1;
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        int c = a + b;                  //fibonnaci logic
        a = b;
        b = c;
    }
    cout << "\n";
}

int main()                                    //main block opens here
{
    int k;
    cout<<"ENTER THE NUMBER OF TERMS\n";                 //user input
    cin>>k;
    fib(k);                                      //value of k is passed to the function (fib)
    return 0;                                // main block ends
}
