#include<iostream>
using namespace std;

int main()
{
    int num1 ,num2 ;
    float r;
    cout << "Enter num1";
    cin >> num1 ;
    cout << "Enter num2";
    cin >> num2 ;


   try 
   {
    if(num2==0)
        throw 1;
    r = (float) num1/num2;
    cout << r;
    
    
    
   }
   catch(int)
   {
      cout << "0 can not be divisor";

   }
    
    
}