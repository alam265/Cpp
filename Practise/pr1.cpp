#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int main()
{
    string str ;
    int num ;

    cout << "Enter Number:";
    cin >> num ;

    str = to_string(num);

    reverse(str.begin(),str.end());

    cout << str ;



    
}