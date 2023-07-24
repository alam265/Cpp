#include<iostream>
using namespace std;

int main()
{
    int num ;
    bool flag = false ;
    cout << "Enter Number:";
    cin >> num;

    for(int i=2 ;i<num ;i++){
        if(num%i == 0){
            flag = false ;
            break ;
        }
        else{
            flag = true ;
            

            
        }
    }
    if(flag == false){
        cout << "Not a Prime Number";
    }
    else{
        cout << "Prime Number";
    }
}