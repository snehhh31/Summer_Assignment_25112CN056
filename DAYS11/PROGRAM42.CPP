//Write a program to Write function to find maximum

#include <iostream>
using namespace std;

int findMax(int a, int b)             //USER DEFINED FUNCTION FINDMAX
{
    if (a > b) 
    {
        return a;                         // CHRAKING THE MAXIMUM VALUE AND RETURNING
    }
    return b;
}

int main()                        //MAIN BLOCK OPENS HERE
{
    int a = 10;
    int b = 20;
    int c = findMax(a, b);                //PASSING VALUES TO MAX FUNCTION
    cout << c;
    return 0;
}
