#include<iostream>

using namespace std;
int main()
{
    int num,sum=0 ,rem;
    cout << "Enter Number: ";
    cin >> num ;
    int original_number = num ;
    while(num>0){
        rem = num%10 ;
        num = num/10 ;
        sum+=rem*rem*rem;
        

    }
    
    
   
    if (original_number==sum){
        cout << "Amstrong Number";
    }
    else{
        cout << "Not Amstrong";
    }
}