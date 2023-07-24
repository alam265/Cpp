#include<iostream>
#include<bits/stdc++.h>
using namespace std ; 

int main()
{
    char name[]{};

    cout << "Enter your name:" ;
    cin.getline(name,100);

    cout << "Your Name length is:" << strlen(name) ;
}