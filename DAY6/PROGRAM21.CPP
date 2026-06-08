//Write a program to convert Decimal to Binary
//for example:- 10 -------> 1010
//               9 -------> 1001

#include <iostream>
using namespace std;
int main()
{
    int n , q , r , num[100],i=0,j;             //array for storing the remainders
cout<<"Enter the decimal number ";
cin>>n;
while(n!=0)                                  //loops runs untill the quoient or the number becomes zero
{
r=n%2;                                       //evaluating the remainder
num[i]=r;                                    //storing the remainder
n = n/2;                                     //updating the number or finding the quotient
i++;                                         //updating the index of array
}
cout<<"Binary is : ";
for(j=i-1;j>=0;j--)                           //printing the array of remainder into reverse order
cout<<num[j];                                 //in order to get the correct binary number
return 0;
}