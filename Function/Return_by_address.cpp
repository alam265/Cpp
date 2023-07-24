#include<iostream>
using namespace std;


int *fun()
{
    int *p = new int[5];              

    cout << p <<endl;
    return p;
    
}




int main()
{
    int *q = fun();
    cout << q;
}