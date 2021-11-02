#include<iostream>
#include<stdlib.h>
using namespace std;
class student
{
    string name;
    int age;
public:
    student()
    {
        cout<<"constructor is"<<endl;

    }    
    student(string name , int age)
    {
        this-> name = name;
        this-> age = age;
    }
    void display()
    {
        cout<<"NAME:"<<name<<endl;
        cout<<"AGE:"<<age<<endl;
    }
    void *operator new(size_t size)
    {
        cout<<"overloading NEW operator with SIZE:"<<size<<endl;
        void *p = ::operator new(size);

        return p;
    }
    void operator delete(void *p)
    {
        cout<<"overloading DELETE operator "<<endl;
        free(p);    
    }

};

int main()
{
    student *p = new student("vivek", 21);

    p->display();

}


    
