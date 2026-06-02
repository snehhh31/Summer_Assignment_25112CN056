//PROGRAM TO FIND REVERSE OF A NUMBER 
#include <iostream>
using namespace std;
int main()                         //main block opens here 
{
int n , n1, rev = 0;                 // rev = 0 and n1 is taken so that original no copy can be stored for future purpose 
cout<<"Enter the number\n";
cin>>n;                            // taking input in n 
n1=n;                              // intinalizing n1 as n for future purpose 
while(n!=0)                        
{                                     
rev = rev*10  + n%10 ;                  
n/= 10;                            // updating the no 
}
cout<<"\nThe reverse of number "<<n1<<" is "<<rev;             //using n1 for displaying original no
return 0;
}

