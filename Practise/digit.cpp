#include<iostream>
using namespace std;

int main()
{
    int num,rem,res;
    cin >> num ;
    
    
    while(res>0){
       
        rem = num%10 ;
        res = num/10 ;
        cout << rem <<endl;
        
        num = res ;
       

        


    }
}