#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream ifs("My.txt");
    if(!ifs){cout << "No file exist";}
    else 
    {
        string str,branch;
        int roll;
        
        ifs >> str >> roll >> branch ;


        cout << "Name:"<< str<<endl;
        cout << "Roll" << roll<<endl;
        cout << "Branch "<< branch;
    }


}