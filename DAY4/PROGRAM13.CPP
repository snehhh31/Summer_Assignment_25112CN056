// Write a program to Generate Fibonacci series 
#include <iostream>
using namespace std;
int main()
{
    int i , n ,pre = 0 , next =1 , sum ;
cout<<"Enter the no of terms till you want to print the series\n";
cin>>n;
cout<<"The series \n";
for(i=1;i<=n;i++)
{
cout<<","<<" "<<pre<<" ";
sum = pre + next ;
pre = next ;
next = sum ;
}
return 0;
}