#include<iostream>
using namespace std ;

int main()
{
    int A[5]={1,3,5,7,9};
    int *p = A ;

    for(int i=0; i<5 ;i++)
    {
        cout << *(A+i)  << endl ;
    }

}