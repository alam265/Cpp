#include<iostream>
using namespace std ;

int main()
{
    int num,rem ;
    cout << "Enter a number: ";
    cin >> num ;

    int rev=0;

    while(num!=0)
    {
        rem = num%10 ; 
        rev = rev*10 + rem ;
        num=num/10 ;

    }
    cout << "Reverse: " << rev ;
}