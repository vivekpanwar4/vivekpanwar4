#include<iostream>
using namespace std;
int fac(int n)
{
     if(n<=1)
  {

     return 1;
 }
     return n*fac(n-1);
}
int main()
{
int a;
     cout<<"enter the factorial no";
     cin>>a;
     cout<<"factorial of "<<a<<" is:"<<fac(a);

return 0;
}

