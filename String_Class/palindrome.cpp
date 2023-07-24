#include<iostream>
#include<string>
using namespace std ;

int main()
{
    string word{},Rword{};
    cout << "Enter a word: ";
    
    getline(cin,word);

    for(int i=word.size()-1;i>=0 ;i--)
    {
        Rword += word[i];
    }

    if (word == Rword)
    {
        cout << "Palindrome";
    }
    else 
        cout << "Not palindrome";


}