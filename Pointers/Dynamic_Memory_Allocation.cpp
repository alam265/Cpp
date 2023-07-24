#include<iostream>
using namespace std;

int main()
{
     
    int *p = new int[20];

    p[1] = 3;

    

    delete []p ;               // deteling the array 
    cout << p[1]<<endl;       // It'll print garbage value bcz the array is deleted 
    cout << p <<endl ;        // Print the array's memory location. Note That array is deleted but p is holding the memory adrss

    p = new int[40];   //   creating a new array in same memory location 
    p[1] = 5 ;

    cout << p[1] <<endl;
    cout << p;




}