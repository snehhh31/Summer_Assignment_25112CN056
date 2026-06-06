//WRITE A PROGRAM TO PRINT THE FACTORS OF A NUMBER.

#include <iostream>
using namespace std;
int main()                                                 ///main block opens here
{
int i,n;                                                  //i for loop variable 
cout<<"Enter the number \n";                              //n for taking the number
cin>>n; 
cout<<"Factors are:-\n";             
for(i=1;i<=n;i++)                                        
{
if(n%i==0)                                                 //if it completely divides the number it is a factor and we wwill print it
cout<<i<<" ,";
}
return 0;
}