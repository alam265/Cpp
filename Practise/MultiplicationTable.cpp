#include<iostream>
using namespace std;

int main()
{
    int num,i;
    cout << "Enter Number:";
    cin >> num ;

    for(i=1 ; i<11 ;i++){
        cout << num << "X" << i << "=" << num*i << endl ;
    }
    
}