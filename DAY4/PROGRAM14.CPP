// Write a program to Find nth Fibonacci term
#include <iostream>
using namespace std;
int main()
{
    int i , n ,pre = 0 , next =1 , sum ;
cout<<"Enter the term number\n";
cin>>n;
cout<<"The nth term is :- ";
for(i=1;i<=n;i++)
{
 if(i==n)
 cout<<pre;
sum = pre + next ;
pre = next ;
next = sum ;
}
return 0;
}
