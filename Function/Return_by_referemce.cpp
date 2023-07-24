#include<iostream>
using namespace std;

int &fun(int &a)
{
    return a ;
}

int main()
{
    int  x=10 ;
    
    fun(x) = 19;
    cout << fun(x)  ;
}