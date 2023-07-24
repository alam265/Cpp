#include<iostream>
#include<string>
using namespace std;

int main()
{
    string email{"alam234@gmail.com"};
    cout << "Enter Email Address: ";
    getline(cin,email); 


    int idx =  email.find('@') ;
    
    cout << "User name is: " << email.substr(0,idx) ;









}