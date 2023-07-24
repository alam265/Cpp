#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "123",str2{};

    
    
        for(int i=str.size()-1 ;i>=0 ;i--)
        {
            str2+=str[i];

        }
        cout << str2 ;

    
}