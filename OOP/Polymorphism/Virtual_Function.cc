#include<iostream>
using namespace std;

class Parent 
{
    public:
    virtual void func()
    {
        cout << "func of Parent";
    }

};
class Child:public Parent 
{
    public:
    void func() 
    {
        cout << "func of child";
    }
};

int main()
{
    Parent*p = new Child;
    p-> func();
}