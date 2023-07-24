#include<iostream>
using namespace std;

class Rectangle 
{
    private:
      int length;
      int breadth;
    public:
    Rectangle(int l,int b)
    {
        length = l;
        breadth = b;
    }
      int area()
      {
        return length*breadth ;
      }
      int perimeter() ;
    
};

int Rectangle::perimeter()
{
    return 2*(length +breadth);
}



int main()
{
    Rectangle r1(3,6) ;
    cout << r1.perimeter();
}