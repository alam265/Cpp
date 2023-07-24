#include<iostream>
using namespace std ;
int main()
{
    int A[5]{2,5,7,9,15};
    int *p=A;

    cout << *p <<endl;
    p++ ;
    cout << *p << endl;
    p=p+2 ;
    cout << *p <<endl;
    p--;
    cout << *p ;


    
}