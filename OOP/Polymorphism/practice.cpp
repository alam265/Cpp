#include<iostream>
#include<cmath>
using namespace std;

class Shape 
{
    public:
    virtual float area() = 0 ;
    virtual float perimeter()=0;

};

class Rectangle:public Shape
{ 
    private:
        float length,breadth;
    public:
        Rectangle(float l,float b)
        {
            length = l;
            breadth = b;
        }
       float area(){
            return length*breadth;
        }
        float perimeter()
        {
            return  2*(length+breadth);
        }


};
class Circle:public Shape
{ 
    private:
        float radius;
    public:
        Circle(float r)
        {
            radius =r;
        }
        float area(){
            return  radius*M_PI;
        }
        float perimeter()
        {
            return 2*M_PI*radius;
        }


};

int main()
{
    Shape *s = new Rectangle(2,4) ;
    cout <<"Area of Rectangle is:"<< s->area()<<endl;
    cout << "Perimeter of Rectangle:"<<s->perimeter() <<endl<<endl;

    s = new Circle(5);
    cout <<"Area of Circle is:"<< s->area()<<endl;
    cout << "Perimeter of Circle:"<<s->perimeter() <<endl;

    

}
