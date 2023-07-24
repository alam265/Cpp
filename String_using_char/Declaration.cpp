#include<iostream>
using namespace std ;

int main()
{

    char s[]{"Hello"};

    cout << s << endl;

    char s1[]{"Hello\0 World"};  //It'll print till null character 

    cout <<  s1 <<endl   ;

    char s2[]{'H','E','L','L','O','\0'};

    cout << s2 ;
}