// Write function to find sum of two numbers

#include <iostream>
using namespace std;

int ADD(int a, int b)                 // USER DEFINED FUNCTION
{
    return a + b;                  //RETURNING THE VALUE OF SUM
}

int main()                       //MAIN FUNCTION
{
    int a = 10;                     
    int b = 20;
    int c = ADD(a, b);              //PASSING VALUES TO MAIN FUNCTION 
    cout << c;
    return 0;
}
