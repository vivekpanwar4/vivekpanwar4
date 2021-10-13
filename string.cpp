#include<iostream>
#include<string.h>
using namespace std;

int main()
{
 string s, s1;
  cout<<"enter the string: ";
  cin>>s;
  cout<<"entered string :"<<s<<endl;

  cout<<"\nenter string 1: ";
  getline(cin,s1);
  cout<<"entered string 1 :"<<s1<<endl;
  cout<<"string is:"<<s<<s1;

  
  return 0;
}
