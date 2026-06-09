//Write a program to Recursive factorial
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0 || n == 1)                          //base case 
    {
        return 1;
    }
    return n * factorial(n - 1);                  // recursive case 
}
int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    if (num < 0)
    {
        cout << "Error" << endl;
    }
    else
    {
        cout << "Factorial: " << factorial(num) << endl;
    }
    return 0;
}

