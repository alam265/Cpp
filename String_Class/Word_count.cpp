#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str{};
    cout << "Enter Sentence:" ;
    getline(cin,str);

    int word=0,letter=0 ;

    for(int i=0; i<str.size(); i++)
    {
        if (str[i]==' ')
        {
            if(letter!=0)
            {
                word++;
            }
            letter = 0 ;

        }
        else 
        {
            letter++  ;
        } 

    }
    cout << word ; 

}