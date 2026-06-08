//Write a program to Find x^n without pow() 

#include <iostream>
using namespace std;
int main()
{
int a , b,v=1;                             //  v=1 for calculation purpose (repetative multiplication)
cout<<"Enter the number ";
cin>>a;
cout<<"Enter the power ";
cin>>b;
while(b!=0)                                // while the power beecomes zero the multiplication of nuber happens in loop
{
v=v*a;                                     //multiplication of number to v
b--;                                       //updating b and bringing it near to zero by decrement of 1
}
cout<<"RESULT = "<<v;                      //printing the result
return 0;
}