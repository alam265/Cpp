#include<iostream>
using namespace std ;

int main()
{
    int num ;
    cout << "Enter Dimension: ";
    cin >> num ;

    for(int r=0 ;r<num;r++)
    {
        for(int space=0;space<num-r ;space++)
        {
            cout << " " ;
        }
        for(int col=0 ;col<2*r+1 ;col++)
        {
            cout << "*";
        }
        cout << endl ;

    }
}