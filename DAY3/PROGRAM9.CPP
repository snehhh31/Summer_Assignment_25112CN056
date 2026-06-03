// WAP to Cheak wheather the no is PRIME or NOT
#include <iostream>
using namespace std;
int main()
{
 int i , n ,c=0;                                // c is a counter variable whicgh counts the no of diviors
 cout<<"Enter the number to be cheaked\n";
 cin>> n;
 for(i=1;i<=(n/2);i++)                 // here I have looped only uptill n/2 times because number itself will be always a factor 
 {                                    // and no factor will be there after n/2 only itself will be there ( to reduce time complexcity)
  if(n%i==0)
  c++;
 }
 if(c==1)                               //cheaking the counter variable and printing the result
 {                                        
 cout<<"\nNumber "<<n<<" is Prime number ";
 }
 else
 cout<<"The number is NOT a Prime number ";
 return 0;
}