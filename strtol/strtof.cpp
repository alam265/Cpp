#include<iostream>
#include<string.h>
using namespace std ;

int main()
{
    char s1[]{"10"};
    char s2[]{"45.78"};


    cout << strtol(s2,NULL,10)+20 <<endl;
    cout << strtod(s1,NULL) +12 <<endl;
    cout << strtof(s2,NULL) +10 ;
    
}