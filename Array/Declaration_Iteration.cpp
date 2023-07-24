#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int A[] = {1,3,4,6,7,9,23,45};
    for(auto x:A){
        cout << x << endl;
    }
    cout << sizeof(A)/sizeof(int);
    return 0;
}