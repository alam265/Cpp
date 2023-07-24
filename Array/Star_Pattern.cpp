#include<iostream>
using namespace std;
int main()
{
    int num ;
    cout << "Enter Number of DImension:";
    cin >> num ;

    for(int row=0; row<num ;row++){
        for(int col=0 ;col<num ;col++){
            if(row>col){
                cout << " " << " ";
            }
            else{
                cout << "*"<<" ";
            }

        }
        cout <<endl;
    }
}