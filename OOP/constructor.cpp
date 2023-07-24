#include<iostream>
using namespace std;

class Rectangle 
{
    private:
    int length,width ;

    public :
    Rectangle()                  // Non-parameterized constructor 
    {
        length=0; 
        width=0; 
    }
    Rectangle(int l,int w)     // parameterized constructo
    {
        length = l ;
        width = w ;
    }
    Rectangle(Rectangle &rect){    // Copy Contructor 
        
        length = rect.length;
        width = rect.width;
    }

    void setLength(int l)
    {
        if(l>0)
        length=l ;
        else 
        length = 0;
        cout << "length can not be Negetive"<<endl;
    }

    void setWidth(int w)
    {   
        if(w >0)
        width = w ;
        else 
        width = 0;
        cout << "width can not be Negetive"<<endl;
    }
    int area()
    {   
        return length * width ;
    
       
    }
};
int main()
{
    Rectangle r;
    Rectangle r1(3,4);
    Rectangle r2(r1) ;
    

    cout << r1.area() << endl; 
    cout << r2.area();
}