//Write a program to Check Armstrong number
//for example 153 ====> 1 cube + 5 cube + 3 cube = 153 itself

#include <iostream> 
#include <cmath>                                    // math standard library
using namespace std;

int main()
{
    int n,c=0,n1,n2,r;                             // n1 n2 n is taken so that orignal no gets destroed the also we have a copy
    double sum=0;                                  //intilazing sum with double so that math power doest make error
    cout<<"Enter the number to be cheaked\n";
    cin>>n;
    n1=n;                                           //n1 = n and n2 = n (storing copy)
    n2=n;
    while(n!=0)
    {
     c++;                                           //counting no of digits
     n=n/10;
    }
    while(n2!=0){
     r=n2%10;                        
    sum += pow(r,c);                                  //using math power function (pre defined) and summing 
    n2/= 10; 
   }
   if(n1==sum)                                           //cheaking sum with original number
   cout<<"The Number "<<n1<<" is a ARMSTRONG NUMBER ";
   else
   cout<<"The Number is NOT a ARMSTRONG NUMBER";
return 0;
}
