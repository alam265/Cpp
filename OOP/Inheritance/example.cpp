#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int length, breadth ;
    public:
        Rectangle(int l=1,int b=1)
        {
            length = l;
            breadth = b;
        }

        

        int area()
        {
            return length*breadth ;
        }
        int perimeter(){return 2*(length+breadth);}

};

class Cube:public Rectangle  
{
    private:
        int heigth;
    public:
        Cube(int l,int b,int h):Rectangle(l,b)
        {
            heigth = h ;
            
        }
    int volume()
    {
        return area()*heigth ;
    }

};


int main()
{
    Cube c(3,3,5);

    cout << c.volume() ;

}