//Write a program to Print Armstrong number in Range
//for example 153 ====> 1 cube + 5 cube + 3 cube = 153 itself
#include <iostream> 
#include <cmath>                                    // math standard library
using namespace std;

int main()
{
    int n,n1,n2,r,i,ll,ul;                             // n1 n2 n is taken so that orignal no gets destroed the also we have a copy
    cout<<"Enter the lower limit\n";
    cin>>ll;
    cout<<"Enter the upper limit\n";
    cin>>ul;
    for(i=ll;i<=ul;i++)                               // (strictly no updation in i should be made) because it will affect the loop
    {
    int c = 0 ;                                      // c and sum will be zero in begineing of every loop
    double sum=0;                                   //intilazing sum with double so that math power doest make error
    n1=i;                                           //n1 = i and n2 = i (storing copy)
    n2=i;
    while(n1!=0)
    {
     c++;                                           //counting no of digits
     n1=n1/10;
    }
    while(n2!=0){
     r=n2%10;                        
    sum += pow(r,c);                                  //using math power function (pre defined) and summing 
    n2/= 10; 
   }
   if(sum==i)                                           //cheaking sum with original number
   cout<<i<<" , ";                                      // and printing it
}
return 0;
}