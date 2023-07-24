#include<iostream>
using namespace std ;

int division(int n1,int n2)
{
    if(n2==0){
        throw 1;
    }
    return n1/n2;
}

int main()
{
    int x = 10,  y=5,r;

    try 
    {
        r = division(x,y);
        cout << r;
    }
    catch(int)
    {
        cout<<"0 can not be divisor";
    }

}
