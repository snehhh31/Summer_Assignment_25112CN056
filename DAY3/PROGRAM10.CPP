// WAP to Cheak wheather the no is PRIME or NOT in a RANGE

#include <iostream>
using namespace std;
int main()
{
 int i , n1 , n2 ,c,a ;                                // c is a counter variable whicgh counts the no of diviors
 cout<<"Enter the lower limit of range\n";            // taking lower limit
 cin>>n1;
 cout<<"Enter the upper limit of range\n";            // taking upper limit
 cin>>n2;
 cout<<"PRIME numbers in the range "<<n1<<" to "<<n2<<" are:-\n";
 for(a=n1; a<=n2; a++)
 {
  c=0;                                  // c is set to zero every time the loops runs


 for(i=1;i<=(a/2);i++)                 // here I have looped only uptill n/2 times because number itself will be always a factor 
 {                                    // and no factor will be there after n/2 only itself will be there ( to reduce time complexcity)
  if(a%i==0)
  c++;
 }
 if(c==1)                              //cheaking the counter variable and printing the result
 {                                        
 cout<<"\n"<<a;
 }
 }
 return 0;
}