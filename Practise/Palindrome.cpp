#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num =121,rem,rev=0  ;
    string orgN = to_string(num);
    string str = to_string(num) ;

    reverse(str.begin(),str.end());

    if (str == orgN)
    {
        cout << "Palindrome";
    }
    else{
        cout << "Not Palindrome";
    }

}