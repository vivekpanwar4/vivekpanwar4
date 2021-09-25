
#include<iostream>
using namespace std;
void area(int a);
void area(int l,int b);
void area(float r);
int main()
{
int a , l, b;
float r;

cout<<"enter the side of square";
cin>>a;
cout<<"enter the length & breadth of rectangle";
cin>>l>>b;
cout<<"enter the radius of circle";
cin>>r;

area (a);
area(l,b);
area(r);

return 0;
}

void area(int a)
{
int ar;
ar=a*a;
cout<<"the area of square is:"<<ar<<endl;
}
void area(int l, int b)
{
int ar;
ar=l*b;
cout<<"the area of rectangle is:"<<ar<<endl;
}

void area(float r)
{
int ar;
int pi=3.14;
ar=3.14*r*r;
cout<<"the area of circle is:"<<ar<<endl;
}



 
