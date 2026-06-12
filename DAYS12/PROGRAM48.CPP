// Q48 Write a program to Write function for perfect number
#include <iostream>
using namespace std;

bool perf(int n)                          // making the function in boolean return type so that it either returns true or false
{
 int sum = 0;
   for (int i = 1; i < n; i++)
 {
     if (n % i == 0)                    // logic of perfect number cheaking
        {
            sum = sum + i;
}
    }
    return (n == sum);                    //as the function is in boolean it returns eitheer true or false
}

int main()                                //main function
{
    int a;
cout<<"ENTER THE NUMBER OF TERMS\n";                 //user input
    cin>>a;
    if (perf(a))                                   //invoking the function 
 {
        cout << "Yes\n";                             //if true is returend if block exectutes
    }
else
 {
     cout << "No\n";                               // if false is returned else block executes
}
    return 0;                                        //main function ends
}
