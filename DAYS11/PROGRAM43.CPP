//Write a program to Write function to check prime
#include <iostream>
using namespace std;

bool chePrime(int a)                        //USER DEFINED FUNCTION CHKPRIME
{                                           //MADE IN BOOLEAN RETURN TYPE
    if (a <= 1) 
    {
        return false;                         //IF NUMBER IS NEGATIVE RETURNING FALSE 
    }
    for (int b = 2; b * b <= a; b++)          // ELSE NUMBER IS POSTIVE THEN THE PRIME OR NOT IS CHEAKED AND TRUE IS RETURNED
    {
        if (a % b == 0)                       
        {
            return false;
        }
    }
    return true;
}

int main()                           //MAIN FUNCTION BLOCK OPENS MERE
{
    int a = 11;
    bool b = chePrime(a);            //VALUE IS PASSED TO PRIME NUMBER
    cout << b;
    return 0;
}
