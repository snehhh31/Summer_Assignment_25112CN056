// WAP TO COUNT DIGITS IN A NUMBER  
#include <iostream>
using namespace std;
int main()                   //main function block opens here
{
int c=0 , n ;
cout<<"Enter the number \n";
cin>>n;                     // taking the user input in "n"
if(n==0)
cout<<"\nThe No Of Digits Are = 1";
else 
{
while(n!=0)
{
 c++;
 n=n/10;     
}
cout<<"\nThe No Of Digits Are = "<<c;
}
return 0;
}