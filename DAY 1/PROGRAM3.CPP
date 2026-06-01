// WAP TO PRINT FACTORIAL OF A GIVEN NUMBER  
// EXAMPLE :- FACTORIAL OF 5 IS (5 x 4 x 3 x 2 x 1 = 120) 
// NOTE :- FACTORIAL OF ZERO(0) IS 1
#include <iostream>
using namespace std;
int main()                   //main function block opens here
{
int i , n, fact=1 ;
cout<<"Enter the number for factorial \n";
cin>>n;                     // taking the user input in "n"
if(n<0)                     // inspecting weather the no is positive or not (factorial is only for positive numbers)
cout<<"ERROR!! ONLY ENTER A POSITIVE(+) NUMBER";
else{
for(i=1;i<=n;i++)           // for loop uptill the n
{
fact = fact*i;              //calculating the factorial here 
}
cout<<"The Factorial of the number is = "<<fact;
}
return 0;
}
