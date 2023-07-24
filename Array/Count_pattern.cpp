#include<iostream>
using namespace std ;

int main(){
    int colN,rowN,count=1 ;
    cout << "Enter Row and Coloumn:";
    cin >> rowN >> colN ;

    for(int row=0 ;row<rowN ;row++){
        for(int col=0 ;col<colN ;col++){
            cout << count++<<" ";
        }
        cout << "\n";
    }
}