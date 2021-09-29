#include<iostream>
using namespace std;
int main()
{
int n,r,temp;
int sum=0;
cout<<"enter the number";
cin>>n;
temp=n;
while(n>0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(temp==sum)
cout<<"the number is armstrong";

else 

cout<<"the number is not armstrong";

return 0;
}


