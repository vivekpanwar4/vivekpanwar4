#include<iostream>
using namespace std;

class sample
{
 int m;
void read(void); 
public:
  void display();
 
};

void sample::read(void)
{
  cout<<"PRIVATE ACCESS"<<endl;
}
void sample::display()
{
  cout<<"PUBLIC ACCESS"<<endl;
 read();
}
  int main()
{
 sample s;
 s.display();
return 0;
}

