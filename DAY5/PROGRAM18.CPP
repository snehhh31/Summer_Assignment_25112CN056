//Write a program to Check strong number
//a strong  number is a number the sum of factorials of its digits equal the number itself 
//for example 145 is a strong number

#include <iostream>
using namespace std;
int main()
{
int i,n,n1,r,fact,sum=0;                           
cout<<"Enter the number \n";
cin>>n;                     // taking the user input in "n"
n1=n;                       // initillizing n1 = n so that updation in number doesnt affect the number from input
while(n1!=0)
{                            
 r=n1%10;                   //extracting digit from backside
 fact=1;                    //initalizing factorial everytime the while loops runs
 for(i=1;i<=r;i++)          //finding factorial of r 
 fact=fact*i;           
 sum = sum+fact;              //adding the factorial to the sum
 n1=n1/10;                    // updating the number by dividing it by 10 
}
if(sum==n)                                             //cheaking the sum is equal to number itself
cout<<"The number "<<n<<" is STRONG number";
else
cout<<"The number "<<n<<" is  NOT STRONG number";
return 0;
}
