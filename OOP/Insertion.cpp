#include<iostream>
using namespace std;

class complex 
{
    private:
        int real;
        int img;
    public:
        complex(int r=0,int i=0)
        {
            real = r;
            img = i;
        }
        complex operator+(complex c)
        {
            complex t ;
            t.real = real + c.real;
            t.img = img + c.img ;
            return t ;



        }
    friend ostream & operator<<(ostream &out,complex &c1);

};

ostream & operator<<(ostream &out,complex &c1)
{
    out<<c1.real<<"+"<<c1.img<<"i";
    return out ;
}

int main()
{
    complex c1(2,4);
    complex c2(1,3);
    complex c3 = c1 + c2 ;
    
   cout <<c1 <<endl;
   cout << c2 <<endl;
   cout << "Sum:"<<c3;
}