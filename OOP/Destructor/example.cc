#include<iostream>
using namespace std;

class test 
{   public:
    test()
    {
        cout << "Created"<<endl;
    }
    ~test()
    {
        cout << "destroyed";
    }

};

int main()
{
    test t;
}