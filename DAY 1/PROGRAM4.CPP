// WAP TO COUNT DIGITS IN A NUMBER  
#include <iostream>
using namespace std;
int main()                   //main function block opens here
{
int c=0 , n ;
cout<<"Enter the number \n";
cin>>n;                     // taking the user input in "n"
if(n==0)                    // inspecting wweather the no is zero
cout<<"\nThe No Of Digits Are = 1";
else 
{
while(n!=0)                 //while loop is used because there is updation in number n
{
 c++;                       // counter of digits 
 n=n/10;                    // updating the nuber by dividing it by 10 ()
}
cout<<"\nThe No Of Digits Are = "<<c;
}
return 0;
}