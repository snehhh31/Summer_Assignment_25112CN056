//Write a program to Write function for Armstrong
#include <iostream>
using namespace std;

bool arm(int n)              // making the function in boolean return type so that it either returns true or false
{
    int temp = n;            //a copy of variable is stored
    int sum = 0;
    int c = 0;
    while (temp > 0)
    {
        c++;                      // digit counter
        temp = temp / 10;
    }
    temp = n;
    while (temp > 0)
    {
        int d = temp % 10;
    int p = 1;                              //armstrong logic
        for (int i = 0; i < c; i++)             //without using the builtin power function
        {
            p = p * d;
    }
    sum = sum + p;
        temp = temp / 10;
}
     return (n == sum);                          //as the function is in boolean it returns eitheer true or false
}

int main()                                      //main block opens here

{
    int a;
cout<<"ENTER THE NUMBER\n";                 //user input
    cin>>a;
if (arm(a))                                  //invoking the function 
{
             cout << "Yes\n";                         //if true is returend if block exectutes
    }
    
 else
    {                                           
     cout << "No\n";                        // if false is returned else block executes
   }
    return 0;                                  // amin function ends here
}
