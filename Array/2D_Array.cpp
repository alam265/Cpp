#include<iostream>
using namespace std;

int main()
{
    int A[2][3] = {{1,3,5},{6,98,12}};
    int B[3][2] = {{6,9},{12,20},{11,31}};
    int C[2][2] ;
    int sum = 0;  
    
    for(int i=0 ;i<3 ;i++)
    {
        for(int j=0 ;j<2 ;j++)
        {
            for(int k=0 ;k<3 ;k++)
            {
                sum=sum + A[i][k] * B[k][j];

            }
            C[i][j] = sum ;
            sum=0;
        }
    }
    
    //Printing The matrix 

    for(int i=0 ;i<2 ;i++)
    {
        for(int j=0 ;j<2 ;j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl ;
    }
    
}