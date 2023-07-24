#include<iostream>
using namespace std;

class outer 
{
    private: int a = 10;
    static int b;
    public:
    void func()
    {
        i.show(); 
       cout << i.x;
    }

    class inner
    {
        public:
        int x = 25;
        void show()
        {
            cout << b <<endl ;
        }

    };
    inner i;

};

int outer::b = 20;


int main()
{
    outer o;
    o.func();
}