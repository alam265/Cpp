#include<iostream>
using namespace std ;



int sum(int x=0, int y=0,int z=0)
{
    return x+y+z ;
}

int main()
{
    cout << sum()<<endl;
    cout << sum(1,9)<<endl ;
    cout << sum(1,25,76);
}