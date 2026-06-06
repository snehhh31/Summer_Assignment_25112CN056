//Wap to find largest prime factor
#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int max=0;                              //initilizing max euqals to zero
for(int i=2;i<=n;i++)
{                                             
while(n%i==0)
{                                    //cheaking for factor
max=i;
n=n/i;
}
}
cout<<"Largest prime factor is "<<max;
return 0;
}