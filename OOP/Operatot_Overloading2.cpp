#include<iostream>
using namespace std;

class complex 
{ 
    public:
        int real;
        int img;
    public:
        complex(int r=0,int i=0)
        {
            real = r;
            img = i ;
        }
        complex operator+(complex other)
        {
            complex temp;
            temp.real = real + other.real;
            temp.img = img + other.img ; 
            return temp;

        }

};

int main()
{
    complex c1(2,5);
    complex c2(4,5);
    complex c3 ;
    c3 = c1+c2;
    cout << c3.real <<"+"<<c3.img<<"i" ;
}