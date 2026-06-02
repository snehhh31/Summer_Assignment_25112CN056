//PROGRAM TO FIND PRODUCT OF DIGITS OF A NUMBER 
#include <iostream>
using namespace std;
int main()                         //main block opens here 
{
int n , n1,pro = 1;                 // pro = 1 and n1 is taken so that original no copy can be stored for future purpose 
cout<<"Enter the number\n";
cin>>n;                            // taking input in n 
n1=n;                              // intinalizing n1 as n for future purpose 
while(n!=0)                        
{                                     
pro = pro * (n%10);                 // extracting digits via % operator from back side of number & USE OF () IS MANDATORY HERE...
n/= 10;                            // updating the no 
}
cout<<"\nThe Product of digits of number "<<n1<<" is "<<pro;             
return 0;
}

