// WAP TO CALCULATE SUM OF FIRST N NATURAL NUMBERS 
#include <iostream>
using namespace std;
int main()                   //main function block opens here
{
int i , n ,sum = 0;
cout<<"Enter the number upto which you need to find the sum\n";
cin>>n;                     // taking the user input in "n"
for(i=1;i<=n;i++)           // for loop uptill the number
{
sum+= i ;                   //adding the number i into sum (short hand operator += used )
}
cout<<"\nThe Sum of numbers is  = "<<sum;
return 0;
}