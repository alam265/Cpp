#include<iostream>
#include<string>
using namespace std ;

int main()
{
    string word ;
    char letter ;
    bool flag = false ;
    cout << "Enter word: ";
    getline(cin,word) ; 
    cout  << "Enter character:";
    cin >> letter ;

    for(auto i:word)
    {
        if (i==letter) 
        {
               flag = true ;
               break;

        }
        else 
        {
            flag =false ;
        }
        
    
        
    }
    if (flag == true) 
    {
        cout << "Yes";
    }
    else 
    {
        cout << "No";
    }

    




}