#include<iostream>
using namespace std ;

int main()
{
    int A[10] = {1,3,5,7,9,13,34,55,56,89};
    int num ;
    cout << "Enter Number:";
    cin >> num; 


    int i = 0 ;
    int e = sizeof(A)/sizeof(int) -1 ;
    int mid ;
    while(i<=e)
    {
        mid = (i+e)/2 ;
        
        if (A[mid]==num){
            cout << mid ;
            break ;
        }
        else if(A[mid] < num){
            i = mid + 1 ;
        }
        else{
            e = mid -1 ;
        }
        
    }


}