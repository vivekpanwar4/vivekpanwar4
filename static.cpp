#include<iostream>
using namespace std;
class KC 
{
public:
int x;
static int y;
void display()
{
  cout<<"X :"<<x<<endl;
  cout<<"Y :"<<y<<endl;
}
}; 

     int KC::y;  
     int main()
{
     KC k1,k2;
     k1.x=20;
     k2.x=30;
     k1.y=40;
     k2.y=70;
k2.display();
k1.display();

 
return 0;
}

