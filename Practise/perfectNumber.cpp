#include<iostream>
using namespace std;
int main()
{
    int num,sum=0 ;
    cout << "Enter Number:";
    cin >> num ;

    for(int i=1 ;i<num+1 ;i++)
    {
        if (num%i == 0){
            sum+=i ;
        }
    }
    if(sum==2*num){
        cout << "Perfect Number";
    }
    else{
        cout << "Not Perfect Number";
    }
}