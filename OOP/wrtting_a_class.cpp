#include<iostream>
using namespace std;

class Rectangle 
{
    public: 
    int length,breadth; 

    int area()
    {
        return length*breadth ;
    }

    int perimeter()
    {
        return 2*(length + breadth);
    }

};

int main()
{
    Rectangle r1,r2 ;           // Creating Object
    r1.length = 10 ;
    r1.breadth = 5 ;
    cout << r1.area() << endl; 

    r2.length = 12 ;
    r2.breadth = 4 ;

    cout << r2.area() <<endl;
    cout << r1.perimeter()<<endl;  

}