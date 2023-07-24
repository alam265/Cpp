#include<iostream>
using namespace std ;

template<class T>

T sum(T a=0,T b=0,T c=0)
{
    return a+b+c ;
}

int main()
{
    cout << sum(1);

}