#include<iostream>
using namespace std ;

int main()
{
    char name[50] ;
    cout << "Enter your Name:";
    cin.getline(name,50);  

    cout <<"Welcome "<<name ;
}