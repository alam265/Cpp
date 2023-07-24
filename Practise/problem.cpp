#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string:";
    getline(cin,str) ;

    for(int i=1;i<str.size();i=i+2){
        cout << char(str[i]-32)<<endl;
    }

   
   
    
}