#include<iostream>
using namespace std ;

int main()
{
    int num = 18 ,div = 15,rem,temp=0 ;
    rem = num%div;
    while(rem!=0)
    {
        temp = div ;
        div = rem ;
        num = temp ;
        rem = num%div;

        
    }
    cout << div;
}