// Write a program cheak perfect number
// a perfect number is a number whose sum of factors excluding the number itself is eual to the number 
//for example 6 => factors 1,2,3,6 => now excude 6(number itself)  => so 1,2,3 => add them 1+2+3 = 6 => so this is perfect number
#include <iostream>
using namespace std;
int main()
{
    int i , n ,sum = 0 ;                            // sum is taken zero at first
cout<<"Enter the number to be cheaked\n";
cin>>n;
for(i=1;i<=(n/2);i++)                              // running loop n/2 times because we need not to take the number itself
{                                                  //  so it can reduce the time complexity of loop

if(n%i==0)                                         //cheaking if it the factor of n and adding it to sum
sum=sum+i;

}
if(sum==n)
cout<<"The number "<<n<<" is a Perfect number";                 //cheaking the sum is equal to the number 
else
cout<<"The number "<<n<<" is NOT a Perfect number";
return 0;
}
