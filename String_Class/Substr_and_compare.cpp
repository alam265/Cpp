#include<iostream>
#include<string>
using namespace std ;

int main()
{
    string str1 = "Programming";
    string x = str1.substr(3,4);

    string str2 = "pelloo";

    cout << x <<endl; 

    cout << str1.compare(str2) ;
}