#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int Search(int arr[],int n, int elem)

{
    
    
    for(int i=0 ;i<n;i++) 
    {
        if (arr[i] == elem)
        {
            return i ;
        }
    }
    return -1;
}



int main()
{
    int array[]{1,3,5,6,8,0,2,4,6}; 

    int n = sizeof(array)/sizeof(int) ; 

    cout << Search(array,n,5);

}