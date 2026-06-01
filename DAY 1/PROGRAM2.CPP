// WAP TO PRINT MUTLIPICATION TABLE OF A GIVEN NUMBER  
#include <iostream>
using namespace std;
int main()                   //main function block opens here
{
int i , n ;
cout<<"Enter the number for table \n";
cin>>n;                     // taking the user input in "n"
for(i=1;i<=10;i++)           // for loop uptill the 10
{
cout<<n<<" x "<<i<<" = "<<(i*n)<<"\n";        //calculating the table and printing it in 2x1=2 formate 
}
return 0;
}