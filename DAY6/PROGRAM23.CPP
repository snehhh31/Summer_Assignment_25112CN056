//Write a program tO count SET BIT in A NUMBER
//for example :- decimal     binary      sets bits 
//                 5           101          2
//                15          1111          4

#include <iostream>
using namespace std;
int main()
{
int n , q , r , num[100],i=0,j,c=0;                   // c is a counter which counts no of 1's in binary number
cout<<"Enter a decimal number ";                            
cin>>n;
while(n!=0)
{
r=n%2;
num[i]=r;
n = n/2;
i++;                                                       // same as decimal to binary program just one change at last
}
for(j=i-1;j>=0;j--)                                        //  the change is:- 
{
if (num[j]==1)                                             //cheaking the element of reverse array wheater it is 1 or not
{
   c++;                                                    //if it is 1 update the counter c by one
}
}
cout<<"THE SET BIT IS : "<<c;                              //print c as sets bit
return 0;                                                     
}