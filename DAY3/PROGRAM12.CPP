//WAP to find LCM of two numbers
#include <iostream>
using namespace std;
int main()
{
   int a, b, max;
   cout << "Enter two numbers\n";
   cin >> a >> b;
   max = (a > b) ? a : b;                       //assining maximum
   while (true)                                  // while true runs an infinte loop 
    {
        if (max % a == 0 && max % b == 0)        //cheaking max is divisble by a as well as b 
       {
            cout << "LCM = " << max;               //if condition true then print LCM and break the infinte loop
            break;                                // to stop infinite loop we use break statement
        }
        max++;                                     // max is increased by one
    }
   return 0;
}