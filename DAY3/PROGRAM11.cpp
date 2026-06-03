//WAP to find GCD of two numbers
//This is what the logic I thought when I first hit by this problem I know there 
//must be some more easier logic can be present which can reduce the time complexicty of loop

#include <iostream>
using namespace std;
int main()
{int a,b,i,min,hcf;
 cout<<"Enter two numbers\n";
 cin>>a>>b;
 min = (a>b)?b:a;                    // assinging a min for loop limit
 for(i=1;i<=min;i++)
 {                     
  if(a%i==0)                          //if i is the factor of a
  {  
    if(b%i==0)                          // also cheak if i is the factor of b
     {
       hcf = i;                         //if so assing hcf equals to i
     }
  }
}
cout<<"GCD of two numbers are"<<hcf;
return 0;
}
