#include<iostream>
using namespace std;

class Rectangle 
{
    private:
    int length,width ;

    public :
    void setLength(int l)
    {
        length = l;
    }

    void setWidth(int w)
    {   
        if(w >0)
        width = w ;
        else 
        width = 0;
        cout << "widrh can not be Negetive"<<endl;
    }
    int area()
    {   if(length>0 && width>0){
        return length * width ;
    }
        else 
        return  -1;
    }
};
int main()
{
    Rectangle r ;
    r.setLength(5);
    r.setWidth(-6);

    cout << r.area() << endl; 
}