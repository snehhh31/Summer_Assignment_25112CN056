//Write a program to Recursive Fibonacci
#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;                                                      //BASE CASE
    }
    if (n == 1)
    {
    
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);                         //RECURSIVE CASE
}              

int main()
{
    int terms;
    
    cout << "Enter the number of terms: ";
    cin >> terms;
    
    if (terms < 0)
    {
        cout << "Error" << endl;
    }
    else
    {
        cout << "Fibonacci series: ";
        for (int i = 0; i < terms; i++)
        {
            cout << fibonacci(i) << " ";
        }
        cout << endl;
    }
    
    return 0;
}
