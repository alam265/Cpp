#include<iostream>
using namespace std ;

int largest(int x,int y,int z)
{
    if (x>y && x>z)
    {
        return x ;
    }
    else if (y>x && y>z)
    {
        return y ;
    }
    else 
    {
        return z ;
    }
}

int main()
{
    cout <<"Largest Number is: " <<largest(12,67,34) ;
}