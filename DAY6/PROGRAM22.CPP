//Write a program to convert Binary TO Decimal 
//for example:- 1010 -------> 10
//              1001 ------->  9


#include <iostream>
#include <cmath>                              //cmath header file because we are using predefined pow() funx
using namespace std;
int main()
{int n ,POW, r,num=0,i=0 ;                    //i is used to do  power of 2
cout<<"Enter the binary number ";
cin>>n;
while(n!=0)                                   //loops runs untill number becoms zero
{
r=n%10;                                       // extracting the digits of binary no from right end
POW=r * pow(2,i);                             // calculating the power rasied to 2 and multiping it with extracted binary bit
i++;                                          // updating the power raised
num=num+POW;                                  //adding the calculated POW to num
n = n/10;                                     //updating the binary number for next itteration
}
cout<<"Decimal is : "<<num;                   //printing the final num
return 0;
}