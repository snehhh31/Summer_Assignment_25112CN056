//Write a program to Write function to find factorial
#include <iostream>
using namespace std;

long long findFact(int a)                     // FACTORIAL USER DEFINED FUNCTION
{
    long long b = 1;
    for (int c = 1; c <= a; c++) 
    {
        b *= c;                            //FINDING FACTORIAL
    }
    return b;
}

int main()                              //MAIN BLOCK OPENS HERE
{
    int a = 5;                                 //PASSING THE VALUE TO FACT FUNCTION
    long long b = findFact(a);
    cout << b;
    return 0;
}
