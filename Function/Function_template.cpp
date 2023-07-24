#include<iostream>
using namespace std ;

template<class T> 
T largest(T x,T y)
{
    if (x> y)
    {
        return x ;
    }
    else 
    {
        return y ;
    }
}

int main()
{
    cout << largest(12,67) <<endl;

    cout << largest(2.5,2.6);
}