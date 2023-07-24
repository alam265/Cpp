#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "Welcome";
    char str1[]{};
    str.copy(str1,3);

    cout << str1 ;


}